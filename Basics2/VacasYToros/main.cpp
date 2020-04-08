#include <iostream>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
using namespace std;
void valor_RANDOM();
void Menu_JUEGO();
int Cifras[4];
int Prediccion[4];
void valor_RANDOM(){
    int counter;
    int RANDOM;
    srand(time(NULL));
    RANDOM=rand()%(11-1);
    Cifras[0]=RANDOM;
    for (int i=1;i<sizeof ( Cifras ) / sizeof ( Cifras[0]) ;i++){
        RANDOM=rand()%(11-1);
        Cifras[i]=RANDOM ;
        }
    for ( int i = 0; i < sizeof ( Cifras ) / sizeof ( Cifras[0] ); i++ ) {
            counter=i;
            RANDOM=rand()%(11-1);
            while(counter--){

                if ( Cifras[counter] == RANDOM ){
                    RANDOM=rand()%(11-1);
                    counter=i;
                }
            }
             Cifras[i] = RANDOM ;
    }
}
void Menu_JUEGO(){

    int predict,Toros=0,Vacas=0;
    char continuar;
    valor_RANDOM();
    cout<<Cifras[0]<<Cifras[1]<<Cifras[2]<<Cifras[3]<<endl;
    cout<<"!BIENVENIDO AL JUEGO DE VACAS Y TOROS!"<<endl;
    cout<<"######################################"<<endl;
    while(Toros<5){
        for( int i = 0; i < 4; i++ ){

            cout<<"Ingrese el digito de su prediccion "<<"( 4 Digitos en total ) -> ";
            cin>>predict;
            Prediccion[i]=predict;
            }
        for ( int h = 0; h < 4; h++ ){
           if (Prediccion[h]==Cifras[h]){
                Toros++;
            }
            for (int i = 0; i < 4; i++){
                if(h!=i && Prediccion[h]==Cifras[i]){
                    Vacas+=1;
                }
            }
        }
        if(Toros==4){
            cout<<"Usted obtiene "<<Toros<<" toro(s)"<<endl;
            cout<<"FELICITACIONES! Usted ha GANADO! "<<endl;
            cout<<"Desea jugar denuevo? (s/n) "<<endl;
            cin>>continuar;
            if (continuar=='s'){
                Menu_JUEGO();
            }else{
                break;
            }

        }else{
            cout<<"Usted obtiene "<<Toros<<" toro(s)"<<endl;
            cout<<"Usted obtiene "<<Vacas<<" vacas(s)"<<endl;
        }
        Toros=0;
        Vacas=0;
    }
    }
int main()
{
    Menu_JUEGO();
    return 0;
}
