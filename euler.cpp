#include <iomanip>
#include <iostream>
#include <math.h>
using namespace std;


float fatorial(float valor){
        float fat = valor;
        for(int i = 1; i<valor; i++){
            fat = fat * i;
        }

        return fat;
}
float euler(float valor){
    float calcular = 1;
    float fat = valor;
    for(int i = 1; i<=valor; i++){
        calcular = calcular + (1/(fatorial(fat)));
        fat--;
    }
    return calcular;
}

int main(){
    cout.precision(6);
    cout << fixed;
    
    int valor;
    cin >> valor;

    float resultado=0;
    resultado = euler(valor);

    cout << resultado << endl;

}