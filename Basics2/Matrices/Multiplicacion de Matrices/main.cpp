#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
using namespace std;
int main() {
  cout << "Ingresa las dimensiones de la matriz A:" << endl;
  cout << "Filas: ";
  int FA;
  cin >> FA;
  cout << "Columnas: ";
  int CA;
  cin >> CA;
  cout << "\nIngresa las dimensiones de la matriz B:" << endl;
  cout << "Filas: ";
  int FB;
  cin >> FB;
  cout << "Columnas: ";
  int CB;
  cin >> CB;

  if(CA != FB) {
    cout << "No se puede multiplicar." << endl;
  }else{
    int A[FA][CA];
    int B[FB][CB];
    int Mult[CA][CB];
    int random;
    srand (time (NULL));
    cout << "LLenar Matriz A" << endl;
    for(int f = 0; f < FA; f++) {
      for(int c = 0; c < CA; c++) {
        random = rand() % 10;
        A[f][c] = random;
        cout<< random;
      }
      cout << endl;
    }
    cout << "Llenar Matriz B" << endl;
    for(int f = 0; f < FB; f++) {
      for(int c = 0; c < CB; c++) {
        random = rand() % 10;
        B[f][c] = random;
        cout<< random;
      }
      cout << endl;
    }
    cout << " A * B : " << endl;
    for (int i = 0; i < FA; i++) {
      for (int j = 0; j < CB; j++) {
        Mult    [i][j] = 0;
        for (int z = 0; z < FB; z++) {
         Mult[i][j] += A[i][z] * B[z][j];
        }
      }
    }
    for (int i = 0; i < FA; i++) {
      for (int j = 0; j < CB; j++) {
        cout << Mult[i][j] << " ";
      }
      cout << endl;
    }
  }
  return 0;
}

