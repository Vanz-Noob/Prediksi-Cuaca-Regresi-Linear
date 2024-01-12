#include <DHT.h>

#define DHTPIN 2     // Pin data sensor DHT11 terhubung ke pin 2
#define DHTTYPE DHT11 // DHT 11

DHT dht(DHTPIN, DHTTYPE);

#define DRY_THRESHOLD 30
#define HUMID_THRESHOLD 60

// Faktor penyesuaian kelembapan
float humidityAdjustment = 0.9;

void setup() {
  Serial.begin(115200);
  dht.begin();
}

void loop() {
  delay(2000);

  // Baca data dari sensor DHT11
  float humidity = dht.readHumidity();

  // Kalibrasi kelembapan
  humidity *= humidityAdjustment;

  // Logika Fuzzy
  int rainIntensity = fuzzyLogic(humidity);

  Serial.print("Kelembapan: ");
  Serial.print(humidity);
  Serial.print(" %, Kondisi Hujan: ");

  switch (rainIntensity) {
    case 0:
      Serial.println("Tidak Hujan");
      break;
    case 1:
      Serial.println("Hujan Ringan");
      break;
    case 2:
      Serial.println("Hujan Lebat");
      break;
    default:
      Serial.println("Data Tidak Valid");
      break;
  }
}

int fuzzyLogic(float hum) {
  // Inisialisasi variabel fuzzy
  int rainIntensity = 0;

  // Fuzzifikasi
  if (hum <= DRY_THRESHOLD) {
    rainIntensity = 0; // Tidak Hujan
  } else if (hum <= HUMID_THRESHOLD) {
    rainIntensity = 1; // Hujan Ringan
  } else {
    rainIntensity = 2; // Hujan Lebat
  }

  return rainIntensity;
}
