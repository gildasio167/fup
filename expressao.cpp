#include <iomanip>
#include <iostream>
using namespace std;

float fatorial(int valor){
    float fat = valor;
    for(int i = 1; i < valor; i++){
        fat = fat * i;
    }
    return fat;
}
float potencia(int valor, int potencia){
    int pot = valor;
    int elevado = potencia;
    float resultado = valor;
    for(int i = 1; i < potencia; i++){
        resultado = resultado*pot;
    }
    return resultado;
}

int main(){
    cout.precision(2);
    cout << fixed;

    float e1, e2, e3, e4, e5;
    e1 = fatorial(5) - fatorial(4);
    e2 = (1/(fatorial(3))) + fatorial(4);
    e3 = fatorial(fatorial(4) - 21);
    e4 = potencia(8, 3) + (potencia(5, 4) / potencia(3, 5));
    e5 = potencia(fatorial(3), (fatorial(2) + 1)) + fatorial(potencia(2, 2));

    cout << int(e1) << endl;
    cout << e2 << endl;
    cout << int(e3) << endl;
    cout << e4 << endl;
    cout << int(e5) << endl;
}