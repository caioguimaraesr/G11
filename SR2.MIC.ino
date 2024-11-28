#include <Adafruit_NeoPixel.h>

#define LED_PIN 6      // Pino digital conectado à fita LED
#define LED_PIN_2 7 
#define NUM_LEDS 33    // Número de LEDs na fita
#define MIC_PIN A0     // Pino analógico conectado ao microfone

Adafruit_NeoPixel strip = Adafruit_NeoPixel(NUM_LEDS, LED_PIN, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel strip_2 = Adafruit_NeoPixel(NUM_LEDS, LED_PIN_2, NEO_GRB + NEO_KHZ800);

void setup() {
  strip.begin();    // Inicializa a fita LED
  strip.show();     // Apaga todos os LEDs inicialmente
  strip_2.begin();    // Inicializa a fita LED
  strip_2.show();
  Serial.begin(9600);
}

void loop() {
  int soundLevel = analogRead(MIC_PIN);  // Lê o nível de som do microfone
  Serial.println(soundLevel);

  // Define as cores RGB para as 3 faixas de som
  uint32_t color;


  if (soundLevel <= 341) {
    // Baixo nível de som - Verde
    color = strip.Color(0, 255, 0);  // Somente verde
    color = strip_2.Color(0, 255, 0);  // Somente verde
  } else if (soundLevel <= 682) {
    // Nível médio de som - Laranja
    color = strip.Color(255, 100, 0); 
    color = strip_2.Color(255, 100, 0);  // Vermelho predominante com menos verde
  } else {
    // Alto nível de som - Vermelho
    color = strip.Color(255, 0, 0);  // Somente vermelho
    color = strip_2.Color(255, 0, 0);
  }

  // Define a cor para todos os LEDs na fita
  for (int i = 0; i < NUM_LEDS; i++) {
    strip.setPixelColor(i, color);
    strip_2.setPixelColor(i, color);
  }

  strip.show();  // Atualiza a fita LED com a nova cor
  strip_2.show();

  delay(250);  // Pequeno atraso para suavizar a resposta
}
