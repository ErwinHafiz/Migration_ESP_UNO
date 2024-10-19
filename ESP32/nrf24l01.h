#include <SPI.h>
#include <nRF24L01.h>
#include <RF24.h>
// ESP32 -> receiver
// CE kabel orange , CSN kuning , CSK hijau  

const int CEpin = 22;
const int CSNpin = 21;
extern RF24 radio;  // CE, CSN 
const byte address[6] = "00001";


// Struct untuk mengirimkan beberapa data sensor
struct SensorData {
  //dht
  float temperature;
  float humidity;
  //rainfall
  float rainfall;
  //soilMoisture
  uint16_t adc;
  uint16_t tegangan;
  uint16_t soilMoisturePercent; 

  bool automation ; 
  uint16_t counter;
  uint16_t nitrogen ; 
  uint16_t phosporus ; 
  uint16_t potassium; 
    // PH sensor
  uint16_t phSensorValue; 
  float phTanah;

  // counter

} __attribute__((packed, aligned(1)));;
// #pragma pack() // Kembalikan pengaturan packing normal setelah struct

void setup_esp_nrf24l01();
void read_data_received();

