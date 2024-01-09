#include <EloquentTinyML.h>
#include <eloquent_tinyml/tensorflow.h>
#include <DHT.h>
#include "sensor_model.h"

#define NUMBER_OF_INPUTS 2
#define NUMBER_OF_OUTPUTS 1
#define TENSOR_ARENA_SIZE 2*1024

#define DHTPIN 2
#define DHTTYPE DHT11

DHT dht(DHTPIN, DHTTYPE);

Eloquent::TinyML::TensorFlow::TensorFlow<NUMBER_OF_INPUTS, NUMBER_OF_OUTPUTS, TENSOR_ARENA_SIZE> tf;

void setup() {
  Serial.begin(115200);
  dht.begin();
  tf.begin(sensor_model);
  delay(3000);
  Serial.println("Prediksi Hujan ANN");
}

void loop() {
  float hum = dht.readHumidity();
  float temp = dht.readTemperature();

  if (isnan(temp) || isnan(hum)) {
    Serial.println("Gagal membaca data dari sensor DHT11");
    return;
  }
  
 tf.scaleInput(hum); // Input ke-0 akan diisi dengan nilai hum
 tf.scaleInput(temp); // Input ke-1 akan diisi dengan nilai temp


  Serial.print("Suhu: ");
  Serial.print(temp);
  Serial.print(" °C\t");
  Serial.print("Kelembapan: ");
  Serial.print(hum);
  Serial.println(" %");

 // Prediksi output
 float outputs;
 tf.predict({0}, {&outputs});

  // float input1 = {hum};
  // float input2 = {temp};
  // float outputs = tf.predict(input1,input2);

  // Tampilkan output
  Serial.print("Prediksi hujan: ");
  Serial.println(outputs);

  delay(1000);
}
