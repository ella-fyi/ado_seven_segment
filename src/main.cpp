#include <Arduino.h>

const int buttonPin = 8;

int stavTlacitka = 0;
bool tlacitkoStlacene = false;
char tempValueDisplayWrite;

void setup() {
  // nastavenie spravania pinov
  pinMode(buttonPin, INPUT);

  pinMode(1,OUTPUT);
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,INPUT);
  pinMode(9,INPUT);
  
  //inicializacny test
  digitalWrite(1,HIGH);
  delay(500);
  digitalWrite(1,LOW);
  digitalWrite(2,HIGH);
  delay(500);
  digitalWrite(2,LOW);
  digitalWrite(3,HIGH);
  delay(500);
  digitalWrite(3,LOW);
  digitalWrite(4,HIGH);
  delay(500);
  digitalWrite(4,LOW);
  digitalWrite(5,HIGH);
  delay(500);
  digitalWrite(5,LOW);
  digitalWrite(6,HIGH);
  delay(500);
  digitalWrite(6,LOW);
  digitalWrite(7,HIGH);
  delay(500);
  digitalWrite(7,LOW);
}

// void vypisVelkeA(){
//   digitalWrite(1,HIGH);
//   digitalWrite(3,HIGH);
//   digitalWrite(4,HIGH);
//   digitalWrite(6,HIGH);
//   digitalWrite(7,HIGH);
// }

void vypisZnak(char znak) {
  switch (znak)
  {
    case 'A':
      digitalWrite(1,HIGH);
      digitalWrite(3,HIGH);
      digitalWrite(4,HIGH);
      digitalWrite(6,HIGH);
      digitalWrite(7,HIGH);
      break;
  
    case 'B':
      digitalWrite(1,HIGH);
      digitalWrite(3,HIGH);
      digitalWrite(4,HIGH);
      digitalWrite(6,HIGH);
      digitalWrite(7,HIGH);
      break;

  default:
    break;  
  }
}

void zhasni(){
  //digitalWrite(cislo_pinu, LOW);
  //digitalWrite(cislo_pinu, LOW);
  //digitalWrite(cislo_pinu, LOW);
  //digitalWrite(cislo_pinu, LOW);
}

// //táto opakujúca sa kombinácia by mala rozsvietiť daný segment na 0,5s, zhasnúť a vtedy rozsvietiť další.
//   // piny 1-7 budú na jednotlivé segmenty, 1-a, 2-b,3-c atď.
// /*aby som napísal jednotku, treba segment A a B., cislo 2-segment 
//  * ale najprv ,,test,, všetkých segmentov v poradí ako idú v abecede. takže a, b, c...
//  * a sa zapne, bude zapnutý 0,5 s, vypne sa, v tom momente sa zapne segment b. a tak dalej až po g. 
// */
// /*treba jednotlivé čísla nakonfigurovať tak, aby pri napísaní napr: A sa rozsvieti číslo 1.
//  * 
// */
void loop() {
  stavTlacitka = digitalRead(buttonPin);

  if (stavTlacitka == HIGH)
  {
    for (int i = 0; i < 10; i++)
    {
      switch (i)
      {
        case 1:
          tempValueDisplayWrite = 'A';
          break;

        case 2:
          tempValueDisplayWrite = 'B';
          break;
      
        default:
          break;
      }
      vypisZnak(tempValueDisplayWrite);
    }
    
    vypisZnak('A');
    delay(200);
  }
  
  
  

  // put your main code here, to run repeatedly:
  digitalWrite(1,HIGH);
  digitalWrite(2,HIGH);
  //tieto dva riadky by mali rozsvietiť číslo 1
  delay(1000);
  digitalWrite(1,LOW);
  digitalWrite(2,LOW);
  delay(1000);
  
  vypisZnak('A');
  delay(1000);
  zhasni();
}
//tlačítkom spustiť program: po stlačení sa začne samo pripočítavať od 1 do 9, každé číslo bude svietiť sekundu

//týchto 5 riadkov rozsvieti číslo 2
