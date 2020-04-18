#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
int ca,na,nd,mini,maxi=0,sm=0;
float prom;
cin>>ca;
if (ca>0){
    na=0;
    int n[ca];
    for (int i=0;i<ca;i++){
        cin>>n[i];
        if(n[i]>=0){
            if(n[i]>=12){
            na++;
            }
            if(maxi<n[i]){
            maxi=n[i];
            }

            if (mini>n[i]){
            mini=n[i];
            }
        }else{cout<<"Nota invalida"; abort();}

    }
    mini=maxi;
    for (int j=0;j<ca;j++){
         if (mini>n[j]){
            mini=n[j];
        }
        sm+=n[j];
    }
    nd=ca-na;
    prom= sm / ca;
    cout<<na<<" "<<nd<<"\n"<<mini<<" "<<maxi<<" "<<prom<<endl;
}else{cout<<"Cantidad no valida";}


return 0;
}
