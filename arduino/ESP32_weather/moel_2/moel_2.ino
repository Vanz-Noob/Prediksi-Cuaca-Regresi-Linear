#include <EloquentTinyML.h>
#include <eloquent_tinyml/tensorflow.h>
#include <DHT.h>
#include "sensor_model2.h"

#define NUMBER_OF_INPUTS 2
#define NUMBER_OF_OUTPUTS 1
#define TENSOR_ARENA_SIZE 10000  // Sesuaikan jika perlu

#define DHTPIN 2
#define DHTTYPE DHT11

DHT dht(DHTPIN, DHTTYPE);

Eloquent::TinyML::TensorFlow::TensorFlow<NUMBER_OF_INPUTS, NUMBER_OF_OUTPUTS, TENSOR_ARENA_SIZE> tf;

void setup() {
  Serial.begin(115200);
  dht.begin();
  tf.begin(sensor_model2);

  Serial.println("Prediksi Hujan ANN");
  delay(3000);
}

void loop() {
  float hum = dht.readHumidity();
  float temp = dht.readTemperature();
  delay(1000);
  if (isnan(temp) || isnan(hum)) {
    Serial.println("Gagal membaca data dari sensor DHT11");
    return;
  }

  Serial.print("Suhu: ");
  Serial.print(temp);
  Serial.print(" °C\t");
  Serial.print("Kelembapan: ");
  Serial.print(hum);
  Serial.println(" %");
  float input[2] = {temp, hum};
  float outputs = tf.predict(input);
//  tf.scaleInput(hum);  // Masukkan nilai kelembapan
//  tf.scaleInput(temp); // Masukkan nilai suhu
//
//  float outputs;
//  tf.predict({}, {&outputs});  // Prediksi dengan input yang sudah dimasukkan

  Serial.print("Prediksi hujan: ");
  Serial.println(outputs);

  delay(1000);
}
