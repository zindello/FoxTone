
#include <Tone.h>

int frequency = 100;

Tone FoxTone;

void setup() {
  FoxTone.begin(3);
  pinMode(4, OUTPUT);
  digitalWrite(4, HIGH);
}

void loop() {
  while ( frequency < 2500 ) {
    FoxTone.play(frequency);
    delay(1);
    frequency = frequency + 1;
  }

  while ( frequency > 100 ) {
    FoxTone.play(frequency);
    delay(1);
    frequency = frequency - 1;
  } 
 
}
