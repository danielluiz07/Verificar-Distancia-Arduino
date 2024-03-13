#include <Ultrasonic.h>
Ultrasonic ultrassom(8,7);

long distancia;

void setup() {
  Serial.begin(9600);

}

void loop() {
  distancia = ultrassom.Ranging(CM);

  Serial.print(distancia);
  Serial.println("cm");
}
