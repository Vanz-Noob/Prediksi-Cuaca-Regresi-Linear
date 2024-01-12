#include <EloquentTinyML.h>
#include <eloquent_tinyml/tensorflow.h>
#include <DHT.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#include "sensor_model.h"

#define N_INPUTS 2
#define N_OUTPUTS 1
#define TENSOR_ARENA_SIZE 10 * 1024
#define SCREEN_WIDTH 128 // OLED display width, in pixels
#define SCREEN_HEIGHT 32 // OLED display height, in pixels

#define DHTPIN 2
#define DHTTYPE DHT11

#define OLED_RESET -1       // Reset pin # (or -1 if sharing Arduino reset pin)
#define SCREEN_ADDRESS 0x3C // See datasheet for Address; 0x3D for 128x64, 0x3C for 128x32

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

DHT dht(DHTPIN, DHTTYPE);

Eloquent::TinyML::TensorFlow::TensorFlow<N_INPUTS, N_OUTPUTS, TENSOR_ARENA_SIZE> tf;

void setup()
{
  Serial.begin(115200);
  dht.begin();
  delay(4000);
  tf.begin(sensor_model);
  if (!tf.isOk())
  {
    Serial.print("ERROR: ");
    Serial.println(tf.getErrorMessage());
    while (true)
      delay(1000);
  }
  Serial.println("Prediksi Hujan ANN");
  delay(3000);
  if (!display.begin(SSD1306_SWITCHCAPVCC, SCREEN_ADDRESS))
  {
    Serial.println(F("SSD1306 allocation failed"));
    for (;;)
      ; // Don't proceed, loop forever
  }
  display.display();
  delay(2000); // Pause for 2 seconds

  // Clear the buffer
  display.clearDisplay();
}

void displayTriangleAnimation()
{
  for (int16_t i = max(display.width(), display.height()) / 2; i > 0; i -= 5)
  {
    // The INVERSE color is used so triangles alternate white/black
    display.fillTriangle(
        display.width() / 2, display.height() / 2 - i,
        display.width() / 2 - i, display.height() / 2 + i,
        display.width() / 2 + i, display.height() / 2 + i, SSD1306_INVERSE);
    display.display();
    delay(100);
  }

  delay(2000);
}

void loop()
{
  float hum = dht.readHumidity();
  float temp = dht.readTemperature();
  float input[2] = {hum, temp};

  if (isnan(temp) || isnan(hum))
  {
    Serial.println("Gagal membaca data dari sensor DHT11");
    return;
  }

  // Scale the input manually based on the range used during training
  float scaledInput[2];
  scaledInput[0] = (hum - 0) / 100.0;                            // assuming 0-100% humidity range
  scaledInput[1] = (temp - (-20)) / (50 - (-20)); // assuming -20 to 50°C temperature range

  // Prediction output
  float output;
  tf.predict(scaledInput, &output);

  Serial.print("Suhu: ");
  Serial.print(temp);
  Serial.print(" °C\t");
  Serial.print("Kelembapan: ");
  Serial.print(hum);
  Serial.println(" %");

  // Display on OLED
  display.clearDisplay();
  display.setTextSize(1);
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0, 0);
  display.print("Suhu: ");
  display.print(temp);
  display.print(" C");
  display.setCursor(0, 10);
  display.print("Kelembapan: ");
  display.print(hum);
  display.print(" %");
  display.setCursor(0, 20);
  display.print("Prediksi hujan: ");
  display.print(output);
  display.display();

  // Display triangle animation after 4 seconds
  if (millis() > 4000 && millis() < 6000)
  {
    displayTriangleAnimation();
  }

  // Tampilkan output
  Serial.print("Prediksi hujan: ");
  Serial.println(output);

  delay(1000); // Delay 1 second for smoother display
}
