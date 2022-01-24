#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SH1106.h>
 

#define OLED_RESET -1
Adafruit_SH1106 display(OLED_RESET);

void setup() {
  Serial.begin(115200);
  display.begin(SH1106_SWITCHCAPVCC, 0x3C);
  display.clearDisplay();
  display.fillRect(54, 2, 7, 3, WHITE);
  display.fillRect(54, 5, 3, 4, WHITE);
  display.fillCircle(55, 13, 1, WHITE);
  display.fillRect(54, 18, 3, 4, WHITE);
  display.fillRect(54, 25, 3, 4, WHITE);
  display.fillRect(54, 29, 7, 3, WHITE);
  display.fillRect(67, 2, 7, 3, WHITE);
  display.fillRect(71, 5, 3, 4, WHITE);
  display.fillRect(71, 12, 3, 4, WHITE);
  display.fillRect(71, 25, 3, 4, WHITE);
  display.fillRect(67, 29, 7, 3, WHITE);
  display.fillCircle(72, 20, 1, WHITE);
  display.display();
  delay(2000);
  display.setTextSize(1);
  display.setTextColor(WHITE);
  display.setCursor(28,36);
  display.print("RENAISSANCE");
  display.display();
  delay(2000);
  display.setTextSize(1);
  display.setTextColor(WHITE);
  display.setCursor(16,47);
  display.print("INNOVATION LABS");
  display.display();
  delay(4000);
}
void Renaissancelogo(){
   display.fillRect(0, 2, 7, 3, WHITE);
  display.fillRect(0, 5, 3, 4, WHITE);
  display.fillCircle(1, 13, 1, WHITE);
  display.fillRect(0, 18, 3, 4, WHITE);
  display.fillRect(0, 25, 3, 4, WHITE);
  display.fillRect(0, 29, 7, 3, WHITE);
  display.fillRect(13, 2, 7, 3, WHITE);
  display.fillRect(17, 5, 3, 4, WHITE);
  display.fillRect(17, 12, 3, 4, WHITE);
  display.fillRect(17, 25, 3, 4, WHITE);
  display.fillRect(13, 29, 7, 3, WHITE);
  display.fillCircle(18, 20, 1, WHITE);
   }

void loop() {
  display.clearDisplay();
  //display.drawLine(0, 49, 127, 49, WHITE);
  for (int x=0, y=6, f=22, r=5, e=10, w=10, u=16, q=16, g=21; x<=127, y<=127, f<=127, r<=127, e<=127, w<=127, u<=127, q<=127, g<=127; x++,y++, f++, r++, e++,w++,u++,q++,g++){
   Renaissancelogo();
    display.setTextSize(1);
  display.setTextColor(WHITE);
  display.setCursor(22,10);
  display.print("DRIVING");
  display.setTextSize(1);
  display.setTextColor(WHITE);
  display.setCursor(22,21);
  display.print("INNOVATION");
    display.fillCircle(y, 48, 2,  WHITE);
    display.drawRect(x, 42, 28, 7, WHITE);
    display.fillCircle(f, 47, 2, WHITE);
    display.drawLine(0, 51, 127, 51, WHITE);
    display.drawLine(r, 42, e, 37, WHITE);
    display.drawLine(w, 37, u, 37, WHITE);
    display.drawLine(q, 37, g, 42, WHITE);
    //display.fillCircle(54, k, 3, WHITE);
    display.display();
    delay(10);
    display.clearDisplay();
    
   
  }
   /*for (int y=6; y<=127; y++){
    display.fillCircle(y, 46, 2,  WHITE);
    display.display();
    delay(100);
    display.clearDisplay();
   }*/
   
   

  /*display.drawLine(7, 40, 12, 35, WHITE);
  display.drawLine(12, 35, 18, 35, WHITE);
  display.drawLine(18, 35, 23, 40, WHITE);
  display.fillCircle(8,46, 2, WHITE);
  display.fillCircle(24, 46, 2, WHITE);
  display.drawLine(0, 49, 127, 49, WHITE);*/
  //display.display();


}
