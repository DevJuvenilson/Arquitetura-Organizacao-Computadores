// ===================================================
// ISW044 - Sistemas Embarcados
// Aula 01: LED Controller
// 
// Descrição: Pisca um LED externo conectado ao pino 13
//            com intervalo de 1 segundo.
//
// Componentes:
//   - Arduino Uno R3
//   - LED (qualquer cor)
//   - Resistor 220Ω
//   - Protoboard
//   - 2x Jumpers macho-macho
//
// Conexões:
//   Pino 13 → Resistor 220Ω → LED (+) → LED (-) → GND
//
// Autor: ISW044 - Aula 01
// ===================================================

// --- Constantes ---
const int LED_PIN = 13;      // Pino digital onde o LED está conectado
const int TEMPO_LIGADO = 1000;   // Tempo em ms que o LED fica aceso
const int TEMPO_APAGADO = 1000;  // Tempo em ms que o LED fica apagado

// ===================================================
// SETUP: Executado uma única vez ao ligar o Arduino
// ===================================================
void setup() {
  // Configura o pino do LED como saída
  pinMode(LED_PIN, OUTPUT);

  // Inicia comunicação serial para debug (9600 baud)
  Serial.begin(9600);
  Serial.println("=================================");
  Serial.println("ISW044 - Aula 01: LED Controller");
  Serial.println("Iniciando...                     ");
  Serial.println("=================================");
}

// ===================================================
// LOOP: Executado repetidamente enquanto o Arduino
//       estiver ligado
// ===================================================
void loop() {
  // --- LIGAR o LED ---
  digitalWrite(LED_PIN, HIGH);  // HIGH = 5V → LED acende
  Serial.println("LED: LIGADO  💡");
  delay(TEMPO_LIGADO);          // Aguarda 1 segundo

  // --- DESLIGAR o LED ---
  digitalWrite(LED_PIN, LOW);   // LOW = 0V → LED apaga
  Serial.println("LED: APAGADO ⚫");
  delay(TEMPO_APAGADO);         // Aguarda 1 segundo
}
