#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int conta_digitos(int valor){
    int contador=1;
    for(int i=1; i<=valor; i++){
        if(valor/10 > 0){
            valor = (valor/10) + valor%10;
            contador++;
        }
    }
    return contador;
}

int main(){
    int valor;
    cin >> valor;
    int resultado = conta_digitos(valor);
    cout << resultado << endl;
}