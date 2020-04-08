#include <CImg.h>
using namespace cimg_library;
#include <iostream>
using namespace std;
int main()
{
	CImg<int> src("input.jpg");
	int filas = src.width();
	int columnas = src.height();
	cout<< filas<<" "<<columnas<<endl;
	int R[columnas][filas];

	for (int i=0; i<filas; i++)
	for (int j=0; j< columnas; j++)
	{
		R[j][i] = (src(i,j,0,0)  + src(i,j,0,1) + src(i,j,0,2)) /3;
	}


	CImg<int> newimg(R[0], src.width(), src.height(), 1, 1, 1);
	newimg.save("output.jpg");
	(src, newimg).display();
	return 0;
}
