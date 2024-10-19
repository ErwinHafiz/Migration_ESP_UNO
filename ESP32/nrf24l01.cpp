#include "nrf24l01.h"

RF24 radio(CEpin, CSNpin); //ce, csn

SensorData receivedData;

/* ESP32 Pin 
CE 22
CSN 21
SCK: 18
MOSI: 23
MISO: 19
*/ 


void setup_esp_nrf24l01() {
  Serial.begin(115200);
  radio.begin();
  if (!radio.begin()) {
    Serial.println("NRF24L01 esp failed to initialize!");
    while (1);
  } else { 
    Serial.println("NRF24L01 esp succes to initialize!");
  }
  radio.setChannel(108);
  radio.openReadingPipe(1, address); // can read up to 6 pipe , 0 for writing 
  radio.setPALevel(RF24_PA_HIGH);
    radio.setDataRate(RF24_250KBPS); // Set a lower data rate for more reliable communication
  Serial.println("NRF24L01 esp initialized successfully.");
  radio.printDetails();
  radio.startListening();
}

void read_data_received() {
  if (radio.available()) {

    radio.read(&receivedData, sizeof(receivedData));  // Baca data yang diterima
    Serial.print("Counter = ");
    Serial.println(receivedData.counter);
    Serial.print("Temperature: ");
    Serial.println(receivedData.temperature);
    Serial.print("Humidity: ");
    Serial.println(receivedData.humidity);
    Serial.print("Rainfall: ");
    Serial.println(receivedData.rainfall);
    Serial.print("Adc: ");
    Serial.println(receivedData.adc);
    Serial.print("Tegangan: ");
    Serial.println(receivedData.tegangan);
    Serial.print("Soil Moisture Percentage: ");
    Serial.println(receivedData.soilMoisturePercent);
    Serial.print("Waterpump status : ");
    Serial.println(receivedData.automation);
    Serial.print("Nitrogen: ");
    Serial.println(receivedData.nitrogen);
    Serial.print("Phosporus: ");
    Serial.println(receivedData.phosporus);
    Serial.print("Potassium: ");
    Serial.println(receivedData.potassium);
    Serial.print("PH snesor value: ");
    Serial.println(receivedData.phSensorValue);
    Serial.print("PHtanah: ");
    Serial.println(receivedData.phTanah);
    Serial.print("Size of received data: ");
    Serial.println(sizeof(receivedData));
    
    // Serial.print(receivedMessage);

  } 
  
}

