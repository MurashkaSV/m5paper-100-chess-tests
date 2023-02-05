#include <M5EPD.h>
uint8_t u_pozic = 1, u_menu = 0 ;
long Lbat1 = 0;
uint32_t Wbat1 = 0;
M5EPD_Canvas canvas(&M5.EPD);
M5EPD_Canvas canvas2(&M5.EPD);
void Out_Board() {
 canvas.fillCanvas(0);
 canvas.setTextSize(5);
 canvas.drawString("position",110,450);
 canvas.drawNumber(u_pozic,400, 450);
 canvas.pushCanvas(0,0,UPDATE_MODE_GC16);
}
void Out_Anime() {
 canvas.fillCanvas(0);
 canvas.setTextSize(5);
 canvas.drawString("animation",110,450);
 canvas.drawNumber(u_pozic,400, 450);
 canvas.pushCanvas(0,0,UPDATE_MODE_GC16);
}
void setup(){
  M5.begin();
  M5.update();
  M5.EPD.SetRotation(90);
  M5.EPD.Clear(true);
  canvas.createCanvas(540, 960);
  canvas2.createCanvas(440, 40);
  canvas2.fillCanvas(0);
  Wbat1 = M5.getBatteryVoltage();
  u_pozic = ((Wbat1>>1)&0x003f)+20;
  Out_Board();
  delay(500);
} 
void loop(){
 M5.update(); 
 if( M5.BtnL.wasPressed()) {
  if (u_menu == 0) {
   if (u_pozic != 0) {u_pozic--;}
   else {u_pozic=99;}
   Out_Board();
  } else {
   Out_Board();
   Wbat1 = M5.getBatteryVoltage();
   Lbat1 = Wbat1;
   canvas2.setTextSize(5);
   canvas2.drawNumber(Lbat1, 1, 1);
   canvas2.drawString("mV   sleep",130,1);
   canvas2.pushCanvas(50,780,UPDATE_MODE_GC16);
   delay(500);
   M5.shutdown(0);
  }
 }
 if( M5.BtnP.wasPressed()) {
  if (u_menu == 0) {
   u_menu = 1;
   Out_Anime();
  } else {
   u_menu = 0;
   Out_Board();
  }
 }
 if( M5.BtnR.wasPressed()) {
  u_menu = 0;
  if (u_pozic < 99) {u_pozic++;}
  else{u_pozic=0;}
  Out_Board();
 }
 delay(200);
}
