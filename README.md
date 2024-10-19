# Migration_ESP_UNO
Nanti aku rapihin sir belum final hehe. 
ini pinnya sir : 
ARDUINO PIN : 

DIGITAL:
0 -> 
1 -> DATA (DHT)
2 -> DI(NPK RS485)
3 -> RO (NPK RS485)
4 -> AO (MH SERIES FOR RAINFALL)
5 -> DO (MH SERIES FOR RAINFALL)
6 -> DMS KABEL HIJAU FOR NPK
7 -> DE (NPK RS485)
8 -> RE (NPK RS485)
9 -> CE (kuning) NRF
10 -> CSN (orange) NRF
11 -> SCK ( MERAH) NRF
12 -> MO (COKLAT) NRF
13 -> MI (ABU) NRF

Analog in : 
A0 -> KUNING (SOIL MOISTURE)
A1 -> not yet use
a2 -> DMS  
A3 -> NOT YET USE
A4 -> SDA RTC 
A5 -> SCL RTC


MODULE/SENSOR PIN : 

nrf24l01 : CE -> 9, CSN -> 10 , SCK -> 11 , MO -> 12, MI -> 13
NPK : DI -> 2, RO -> 3 , RE -> 8, DE -> 7 (respect)
rainfall (mhseries):AO -> 4 , VCC -> BOARD 5V, GND -> BOARD , DO -> 5 

soil moisture :  AO -> , DO ->  , VCC -> 5V, GND - BOARD ///////

DMS (Ph sensor) : Hijau -> 6 , KUNING -> A2, ORANGE -> Hitam ph sensor, Merah -> 5V board, coklat -> board (-)
