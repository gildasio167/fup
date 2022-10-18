#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    cout.precision(1);
    cout << fixed;

    int valor_lido = 6;
    int valor;
    int contador_numero_lido = 0;

    float valores[valor_lido];

    float soma=0.0, media=0.0;

    for(int i = 0; i < valor_lido; i++){
        cin >> valores[i];
        soma = soma + valores[i];
    }
    media = soma/valor_lido;
    cout << media << endl;

    for(int i = 0; i < valor_lido; i++){
        if(valores[i] > media){
            contador_numero_lido++;
        }
    }

    cout << contador_numero_lido << endl;

}