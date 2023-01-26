#include <Ultrasonic.h>
#include <Arduino.h>

// Define os pinos dos motores
#define motorA1A 8
#define motorA1B 9
#define motorB1A 6
#define motorB1B 7

// Define os pinos do sensor ultrassônico
#define trigPin A1
#define echoPin A0

#define velocity 150

Ultrasonic ultrasonic(trigPin, echoPin);

void setup() {
  // Inicializa os pinos dos motores como saída
  pinMode(motorA1A, OUTPUT);
  pinMode(motorA1B, OUTPUT);
  pinMode(motorB1A, OUTPUT);
  pinMode(motorB1B, OUTPUT);
}

void loop() {
  // Lê a distância do obstáculo
  long distance = ultrasonic.read();

  // ver uma maneira de zerar a velocidade quando chegar perto do obstaculo na volta do loop

  // Se a distância for menor ou igual a 5cm, o carrinho vira para a esquerda
  if (distance <= 5) {
    digitalWrite(motorA1A, LOW);
    digitalWrite(motorA1B, HIGH);
    digitalWrite(motorB1A, LOW);
    digitalWrite(motorB1B, HIGH);
    analogWrite(A1B, velocity); 
    analogWrite(B1B, velocity);
    delay(500);
    
    digitalWrite(motorA1A, LOW);
    digitalWrite(motorA1B, LOW);
    digitalWrite(motorB1A, LOW);
    digitalWrite(motorB1B, LOW);
    delay(500);
    
    // Lê a distância à esquerda
    long leftDistance = ultrasonic.read();
    
    //virando 2x para a direita 
    digitalWrite(motorA1A, HIGH);
    digitalWrite(motorA1B, LOW);
    digitalWrite(motorB1A, HIGH);
    digitalWrite(motorB1B, LOW);
    analogWrite(A1A, velocity); 
    analogWrite(B1A, velocity);
    delay(500);
    
    digitalWrite(motorA1A, HIGH);
    digitalWrite(motorA1B, LOW);
    digitalWrite(motorB1A, HIGH);
    digitalWrite(motorB1B, LOW);
    analogWrite(A1A, velocity); 
    analogWrite(B1A, velocity);
    delay(500);
    
    digitalWrite(motorA1A, LOW);
    digitalWrite(motorA1B, LOW);
    digitalWrite(motorB1A, LOW);
    digitalWrite(motorB1B, LOW);
    delay(500);

      // Lê a distância à direita
    long rightDistance = ultrasonic.read();

    if(leftDistance<rightDistance){
        digitalWrite(A1A, LOW);
        digitalWrite(A1B, HIGH); 
        digitalWrite(B1A, LOW); 
        digitalWrite(B1B, HIGH); 
        analogWrite(A1A, velocity); 
        analogWrite(B1A, velocity); 
        delay(500);
    }
    else if (leftDistance>rightDistance){
        
        //vira 2x pra esquerda
        digitalWrite(motorA1A, LOW);
        digitalWrite(motorA1B, HIGH);
        digitalWrite(motorB1A, LOW);
        digitalWrite(motorB1B, HIGH);
        delay(500);
        digitalWrite(motorA1A, LOW);
        digitalWrite(motorA1B, HIGH);
        digitalWrite(motorB1A, LOW);
        digitalWrite(motorB1B, HIGH);
        delay(500);
        
        digitalWrite(motorA1A, LOW);
        digitalWrite(motorA1B, HIGH);
        digitalWrite(motorB1A, HIGH);
        digitalWrite(motorB1B, LOW);
        analogWrite(A1B, velocity); 
        analogWrite(B1A, velocity); 
        delay(500); 
    }
    // Se a distância à esquerda e a distância à direita forem menores ou iguais a 5cm,
    //180 Graus feito virando 2x ele pra um lado
    // o carrinho faz um giro de 180 graus e refaz o cálculo de distância
    //ja como ja esta do lado direito ele vira mais 1x para a direita 
    else if(leftDistance <= 5 && rightDistance <= 5){
        digitalWrite(motorA1A, HIGH);
        digitalWrite(motorA1B, LOW);
        digitalWrite(motorB1A, HIGH);
        digitalWrite(motorB1B, LOW);
        analogWrite(A1A, velocity); 
        analogWrite(B1A, velocity);
        delay(500);
    }
}
