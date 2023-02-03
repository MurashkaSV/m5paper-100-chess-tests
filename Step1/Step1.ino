#include <M5EPD.h>
int smesh_d = 150 ;  
M5EPD_Canvas canvas(&M5.EPD);
void Out_Board() {
 canvas.fillCanvas(0);
 canvas.fillRect(  1, smesh_d  , 540,   5, 4);
 canvas.fillRect(  1, smesh_d+5,   2, 536, 4);
 canvas.fillRect(539, smesh_d+5,   2, 536, 4);
 for (int32_t j = 0; j < 4; j++){
  for (int32_t i = 0; i < 4; i++){
   canvas.fillRect( 3+i*134, smesh_d+5+j*134,    67, 67, 0);
   canvas.fillRect(70+i*134, smesh_d+5+j*134,    67, 67, 1);
   canvas.fillRect( 3+i*134, smesh_d+5+67+j*134, 67, 67, 1);
   canvas.fillRect(70+i*134, smesh_d+5+67+j*134, 67, 67, 0);
  }
 }
 canvas.fillRect(1, smesh_d+541, 540, 5, 4);
 canvas.pushCanvas(0,0,UPDATE_MODE_GC16);
}
void setup(){
  M5.begin();
  M5.update();
  M5.EPD.SetRotation(90);
  M5.EPD.Clear(true);
  canvas.createCanvas(540, 960);
  Out_Board();
} 
void loop(){
}
  
