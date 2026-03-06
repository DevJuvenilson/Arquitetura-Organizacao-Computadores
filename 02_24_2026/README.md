# ISW044 – Aula 01: LED Controller

## 📋 Descrição

Projeto introdutório da disciplina **ISW044 – Sistemas Embarcados**.  
O objetivo é piscar um LED externo usando um Arduino Uno, aprendendo os conceitos básicos de hardware e programação embarcada.

---

## 🎯 Objetivos de Aprendizagem

Ao concluir esta aula, o aluno será capaz de:

- Identificar e utilizar componentes eletrônicos básicos
- Montar um circuito simples em protoboard
- Configurar o Arduino IDE
- Escrever, verificar e carregar um programa para o Arduino
- Usar as funções `pinMode()`, `digitalWrite()` e `delay()`
- Utilizar o Monitor Serial para debug

---

## 🔧 Componentes Necessários

| Componente       | Quantidade | Observação                        |
|------------------|:----------:|-----------------------------------|
| Arduino Uno R3   | 1          |                                   |
| Cabo USB A-B     | 1          | Cabo de dados (não só carregamento)|
| LED              | 1          | Qualquer cor                      |
| Resistor 220Ω    | 1          | Código: vermelho-vermelho-marrom  |
| Jumper M-M       | 2          | Vermelho e preto (recomendado)    |
| Protoboard       | 1          | 400 ou 830 pontos                 |

---

## 🔌 Conexões do Circuito

```
Arduino Pino 13  →  Resistor 220Ω  →  LED (+)  →  LED (-)  →  Arduino GND
```

**Detalhe na protoboard:**
- LED perna longa (+): linha 10, coluna E
- LED perna curta  (-): linha 11, coluna E
- Resistor perna 1: linha 10, coluna A (mesma linha do LED+)
- Resistor perna 2: linha + (borda da protoboard)
- Jumper vermelho: pino 13 do Arduino → linha + da protoboard
- Jumper preto: GND do Arduino → linha 11, coluna A

> Veja o arquivo `diagrama_circuito.txt` para o diagrama detalhado.

---

## 💻 Código

**Arquivo:** `led_controller.ino`

```cpp
const int LED_PIN = 13;

void setup() {
  pinMode(LED_PIN, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(LED_PIN, HIGH);  // LED acende
  delay(1000);                  // Aguarda 1 segundo
  digitalWrite(LED_PIN, LOW);   // LED apaga
  delay(1000);                  // Aguarda 1 segundo
}
```

---

## 📂 Estrutura do Projeto

```
aula_01_led_controller/
├── led_controller.ino     ← Código principal Arduino
├── diagrama_circuito.txt  ← Diagrama e tabela de conexões
└── README.md              ← Este arquivo
```

---

## 🚀 Como Usar

1. Abra o Arduino IDE
2. Carregue o arquivo `led_controller.ino`
3. Selecione **Placa:** Arduino Uno
4. Selecione a **Porta COM** correta
5. Clique em **Carregar** (Ctrl+U)
6. Observe o LED piscando a cada 1 segundo!

---

## 🔍 Monitorando via Serial

Abra o **Monitor Serial** (Ctrl+Shift+M) com 9600 baud para ver:

```
=================================
ISW044 - Aula 01: LED Controller
Iniciando...
=================================
LED: LIGADO  💡
LED: APAGADO ⚫
LED: LIGADO  💡
...
```

---

## 🏆 Desafios Extras

- **Desafio 1:** Altere o delay para 500ms (LED pisca mais rápido)
- **Desafio 2:** LED ligado por 2 segundos e apagado por 0,5 segundo
- **Desafio 3:** Implemente o código Morse SOS (... --- ...)

---

## 📚 Conceitos Abordados

| Função                        | Descrição                              |
|-------------------------------|----------------------------------------|
| `pinMode(pino, OUTPUT)`       | Configura pino como saída              |
| `digitalWrite(pino, HIGH)`    | Coloca 5V no pino (liga LED)           |
| `digitalWrite(pino, LOW)`     | Coloca 0V no pino (apaga LED)          |
| `delay(ms)`                   | Pausa o programa pelo tempo em ms      |
| `Serial.begin(9600)`          | Inicia comunicação serial              |
| `Serial.println("texto")`     | Envia mensagem para o monitor serial   |

---

## ➡️ Próxima Aula

**Aula 02: Botão + LED**  
Leitura de entradas digitais com botão, estruturas condicionais `if/else`, resistor pull-up/pull-down.

---

*ISW044 – Sistemas Embarcados*
