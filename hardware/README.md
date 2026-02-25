# Mapeamento de Pinos - NodeMCU-32S

Abaixo está a configuração de pinagem conforme o diagrama eletrônico atual:

| Componente | Pino ESP32 | Tipo de Sinal | Observação |
| :--- | :--- | :--- | :--- |
| **Bateria (VCC)** | Vin | Alimentação | Via regulador AMS1117-3.3V |
| **Sensor FSR 01** | GPIO 32 | Analógico | Resistência pull-down 10kΩ |
| **Sensor FSR 02** | GPIO 33 | Analógico | Resistência pull-down 10kΩ |
| **Sensor FSR 03** | GPIO 34 | Analógico | Resistência pull-down 10kΩ |
| **Sensor Flexão 01**| GPIO 35 | Analógico | Resistência pull-down 10kΩ |
| **Sensor Flexão 02**| GPIO 36 | Analógico | Resistência pull-down 10kΩ |
| **Bluetooth** | Interno | Digital | Protocolo BLE 5.0 |

*Nota: Não utilizar a porta USB enquanto a bateria estiver conectada ao circuito.*
