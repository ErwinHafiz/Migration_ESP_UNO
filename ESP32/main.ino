#include "nrf24l01.h"

void setup() {
  // put your setup code here, to run once:
  setup_esp_nrf24l01();
}

void loop() {
  // put your main code here, to run repeatedly:
  read_data_received();

}
