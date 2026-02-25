/* * Projeto Luva Reabilitação - Código Base
 * Desenvolvido para NodeMCU-32S
 */

#include <BLEDevice.h>
#include <BLEUtils.h>
#include <BLEServer.h>

// Definição dos pinos conforme pinagem.md
const int fsrPins[] = {32, 33, 34};
const int flexPins[] = {35, 36};

void setup() {
  Serial.begin(115200);
  
  // Inicialização do Bluetooth BLE
  BLEDevice::init("Luva_Rehab_ESP32");
  BLEServer *pServer = BLEDevice::createServer();
  
  Serial.println("Servidor BLE pronto. Aguardando conexão...");
}

void loop() {
  // Exemplo de leitura de um sensor
  int valorFSR = analogRead(fsrPins[0]);
  
  Serial.print("Sensor FSR 1: ");
  Serial.println(valorFSR);
  
  delay(500); // Ajustar conforme necessidade de amostragem
}
