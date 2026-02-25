# TCC-LUVA

## Descrição do Projeto
Desenvolvimento de Luva Inteligente de Baixo Custo com Feedback Háptico para Reabilitação da Pinça Trípode em Lesões Neurológicas, instrumentada com sensores de força e flexão para monitorar a preensão palmar. Os dados são enviados via Bluetooth (BLE) da ESP32 para um smartphone.

## Especificações de Hardware (Referência para IA)
- **Microcontrolador:** NodeMCU-32S (ESP32)
- **Sensores de Força:** 3x FSR402 (Pinos analógicos) 
- **Sensores de Flexão:** 2x Sensores de curvatura (Pinos analógicos) 
- **Gestão de Energia:** Módulo TP4056 para carregamento seguro 
- **Regulador de Tensão:** AMS1117-3.3V 
- **Comunicação:** Bluetooth Low Energy (BLE 5.0).
- **Alimentação:** Bateria Li-ion 3.7V (2200mAh) com módulo de carga TP4056.


## Pinagem Atual (Conforme Diagrama em /hardware)
- FSRs: GPIOs 32, 33, 34
- Flex: GPIOs 35, 36
- Motor Vibracall 1027: 27(pwm)
- Bluetooth: Integrado (BLE 5.0)

## Cronograma e Metodologia
- **Fevereiro:** Levantamento bibliográfico (feedback tátil, reabilitação, sensores) e compra dos componentes
- **Março:** Testes de circuito em protoboard e Integração física na luva e design da PCI (Plaquinha).
- **Abril:**  Programação e implementação do feedback tátil adaptativo
- **Maio:** Integração via Bluetooth/Wi-Fi e registro de dados
- **Junho:** Entrega do TG1 (Escrita teórica).
- **Julho:** Testes com voluntários saudáveis (coleta de dados)
- **Setembro:** Análise estatística dos dados e ajustes no protótipo
- **Dezembro:** Redação, revisão e entrega do TCC
- **Testes:** Simulação em voluntários saudáveis utilizando a mão esquerda para emular dificuldade motora.
