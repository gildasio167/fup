#include <iostream>
using namespace std;

int buscar(int vetor[], int valor, int vetor2[], int valor2){
    int resultado = 0;
    for(int i = 0; i < valor; i++){
        if(returno(vetor[i], vetor2, valor2)){
            resultado = 0;
            return resultado;
        }
    }
    return resultado =1;
}

int returno(int valor, int vetor[], int n){
    int a = 0;
    for(int i = 0; i < n; i++){
        if(vetor[i] == valor){
            a = 1;
            return a;
        }
    }
    return a;
}

int main(){
    int valor;
    cin >> valor;
    int vetor[valor];
    
    for(int i = 0; i < valor; i++){
        cin  >> vetor[i];
    }

    int valor2;
    cin >> valor2;
    int vetor2[valor2];

    for(int i = 0; i < valor2; i++){
        cin >> vetor2[i];
    }

    int resultado = 0;
    resultado = buscar(vetor, valor, vetor2, valor2);

    if(resultado == 1){
        cout << "sim";
    }
    else {
        cout << "nao";
    }

}