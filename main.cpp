#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

unsigned int  algoritmo(unsigned int menor,unsigned int mayor){
    unsigned int temporal,salida=0;
    unsigned int sumador;
    for (unsigned int i=menor;i<mayor+1;i++){
        sumador=1;
        temporal=i;
        while (temporal!=1){
            if (temporal%2==1){
                temporal=temporal*3+1;
                sumador+=1;
            }
            else{ 
                temporal/=2;
                sumador+=1;
            }
        }
        if (sumador>salida){
            
            salida=sumador;
        }
        
    }
    
    return salida;


    
}



int main(){
    unsigned int resultado=0;
    unsigned int n,m;
    while (scanf("%d %d",&n,&m)==2){
        cout<<n<<" "<<m<<" ";
        if (n>m){
            resultado=algoritmo(m,n);
            cout<<resultado<<endl;
    }else{
        resultado=algoritmo(n,m);
        cout<<resultado<<endl;
    }
        }
    
        
        
    }
    
    
    
