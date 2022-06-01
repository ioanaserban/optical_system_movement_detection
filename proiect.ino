#define LaserPin1 12
#define LaserPin2 11
#define LedPin 3
#define BuzzerPin 7
#define ReceptorPin1 9
#define ReceptorPin2 8

void setup ()
{
   Serial.begin(9600);
   pinMode (LaserPin1, OUTPUT);
   pinMode (LaserPin2, OUTPUT);
   pinMode (LedPin, OUTPUT);
   pinMode (BuzzerPin, OUTPUT);
   pinMode (ReceptorPin1, INPUT);
   pinMode (ReceptorPin2, INPUT);
}
void loop () {
   digitalWrite (LaserPin1, HIGH); 
   digitalWrite (LaserPin2, HIGH); 
   bool value1 = digitalRead(ReceptorPin1);
   bool value2 = digitalRead(ReceptorPin2);
    
   if (value1 == 0 || value2 == 0) {
     digitalWrite(LedPin, HIGH);
     digitalWrite(BuzzerPin, LOW);
   } else {
     digitalWrite(LedPin, LOW);
     digitalWrite(BuzzerPin, HIGH);
   }
}
