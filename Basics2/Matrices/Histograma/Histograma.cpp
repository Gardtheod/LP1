#include <CImg.h>
using namespace cimg_library;
#include <iostream>
using namespace std;

int main() {

CImg<int> in("input.jpg");
 int ancho = in.width();
 int alto = in.height();
 int HISTOGRAMA[256];
 //Limpiando array
 for(int i = 0; i < 256; i++) {
   HISTOGRAMA[i] = 0;
 }
 int color=0;
 for (int width=0;width<ancho;width++){
   for (int height=0;height<alto;height++){
     int RGB=(int)in(width,height,0,0)+(int)in(width,height,0,1)+(int)in(width,height,0,2);
    color=RGB/3;
    HISTOGRAMA[color]+=1;
   }
 }
 int HIGH=0;
 for(int i=0;i<256;i++){
   if(HISTOGRAMA[i]>HIGH){
     HIGH= HISTOGRAMA[i];
   }
 }
 return 0;
}
