
#define A1A 8
#define A1B 9
#define B1A 6
#define B1B 7


#define VELOCIDADE 255
void setup() {

pinMode(A1A, OUTPUT);
pinMode(A1B, OUTPUT);
pinMode(B1A, OUTPUT);
pinMode(B1B, OUTPUT);
}
void stop() {

    digitalWrite(A1A, LOW);
    digitalWrite(A1B, LOW); 
    digitalWrite(B1A, LOW); 
    digitalWrite(B1B, LOW);
}

void forward() {

    digitalWrite(A1A, LOW);
    digitalWrite(A1B, HIGH); 
    digitalWrite(B1A, LOW); 
    digitalWrite(B1B, HIGH); 
    analogWrite(A1A, VELOCIDADE); 
    analogWrite(B1A, VELOCIDADE); 
}

void backward() {

    digitalWrite(A1A, HIGH);
    digitalWrite(A1B, LOW); 
    digitalWrite(B1A, HIGH); 
    digitalWrite(B1B, LOW); 
    analogWrite(A1B, VELOCIDADE); 
    analogWrite(B1B, VELOCIDADE);  
}

void testMotors() {
   
    Serial.println("FORWARD");
    forward();
    delay(5000);
    stop();
    delay(1000);

    
    Serial.println("BACKWARD");
    backward();
    delay(5000);
    stop();
    delay(1000);
}

void loop() {testMotors();
}
