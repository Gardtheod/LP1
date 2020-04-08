#include <iostream>
using namespace std;

int Matriz[50][50];
int main()
{
    int n,a=0,s=1;
    cout << "Ingrese las dimensiones de la matriz: " << endl;
    cin>>n;
    int Matriz[n][n];
    int b=n-1;
    //Limpiar Matriz
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            Matriz[i][j]=0;
        }
    }
    //Resolucion
    s=n*n;

    for (int j=0;j<n;j++){
        for(int i=a;i<=b;i++){
            Matriz[a][i]=s;
            s--;
        }
        for(int i=a+1;i<=b;i++){
            Matriz[i][b]=s;
            s--;
        }
         for(int i=b-1;i>=a;i--){
            Matriz[b][i]=s;
            s--;
        }
         for(int i=b-1;i>=a+1;i--){
            Matriz[i][a]=s;
            s--;
        }
        a++;
        b--;
    }
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            cout<<"\133"<<Matriz[i][j]<<"\135 \t";

        }
        cout<<"\n"<<endl;
    }
    int k=0;
    int sumatoria=0;
    while (k<n){
        sumatoria+=Matriz[k][k];
        k++;
    }
    cout<<"La suma de la diagonal es: "<<sumatoria<<endl;
    return 0;
}
