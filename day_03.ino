#include <EasyNextionLibrary.h>
#include <SoftwareSerial.h>
EasyNex n = EasyNex(Serial);
SoftwareSerial s = SoftwareSerial(8, 7);
void setup() {
  // put your setup code here, to run once:
  n.begin(9600);
  s.begin(9600); 


}

void loop() {
  // put your main code here, to run repeatedly:
  n.NextionListen();

}
void trigger0() {
  s.println("AT");
  delay(1500);
  s.println("ATD+ +94771939497;");
  delay(1500);
}

void trigger1() {
  s.println("AT");
  delay(500);
  s.println("AT+CMGF=1");
  delay(500);
  s.println("AT+CMGS=\"+94771939497\"");
  delay(500);
  s.print("HI");
   delay(500);
   s.write(26);



         
        }
