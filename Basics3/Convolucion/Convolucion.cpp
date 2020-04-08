#include <CImg.h>
using namespace cimg_library;
#include <iostream>

using namespace std;
int convolucion(){
  int i,j,sumatoria=0;
  const int kernel[3][3] = {
  {0, 1, 0},
  {1, -4, 1},
  {0, 1, 0}
  };
  CImg<int> in("input.jpg");
  int ancho= in.width();
  int alto= in.height();
  int image[alto][ancho];
  for (int w = 0; w < ancho; w++)
  {
    for (int h = 0; h < alto; h++)
    {
      int r = (int)in(w,h,0,0);
      int g = (int)in(w,h,0,1);
      int b = (int)in(w,h,0,2);
      image[h][w] = (r + g + b) / 3;
      cout << image[h][w] << " ";
    }
    cout << endl;
  }
  int final_img[alto][ancho];

  for(i=0; i < ancho; i++)
  {
    for (j=0; j < alto; j++)
    {
      final_img[j][i] = kernel[1][1]* image[j][i];

     if(j-1 >= 0) {
       final_img[j][i] += kernel[0][1] * image[j-1][i];
     }
     if(j+1 <= alto) {
       final_img[j][i] += kernel[2][1] * image[j+1][i];
     }

     if(i-1 >= 0) {
       final_img[j][i] += kernel[1][0] * image[j][i-1];
     }
     if(i+1 <= ancho) {
       final_img[j][i] += kernel[1][2] * image[j][i+1];
     }

     if(j-1 >= 0 && i-1 >= 0) {
       final_img[j][i] += kernel[0][0] * image[j-1][i-1];
     }
     if(j+1 >= 0 && i-1 >= 0) {
       final_img[j][i] += kernel[2][0] * image[j+1][i-1];
     }
     if(j-1 >= 0 && i+1 >= 0) {
       final_img[j][i] += kernel[0][2] * image[j-1][i+1];
     }
     if(j+1 >= 0 && i+1 >= 0) {
      final_img[j][i] += kernel[2][2] * image[j+1][i+1] ;
     }
     if(1 == 0 || j == 0 || i == ancho-1 || j == alto-1) {
       final_img[j][i] = 0;
     }
   }
 }

   for (int w = 0; w < ancho; w++) {
     for (int h = 0; h < alto; h++) {
       if(final_img[h][w] > 255) {
         final_img[h][w] = 255;
       }else if(final_img[h][w] < 0){
         final_img[h][w] = 0;
       }
     }
   }

  CImg<int> grises(image[0], ancho, alto);
  grises.save("grises.jpg");
  CImg<int> out(final_img [0], ancho, alto);
  out.save("output.jpg");
  (in, grises, out).display();

  return 0;
}

int main(int argc, char** argv){

    convolucion();


    return 0;
}
