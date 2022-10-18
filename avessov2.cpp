#include <iostream>
#include <iomanip>
using namespace std;

int buscador(int vetor[], int qtd, int valor){
    for(int i=0; i < qtd; i++){
        if(vetor[i]  == valor || vetor[i] == -valor){
            return i;
        }
    }
    return -1;
}

void imprime(int vetor[], int valor){
    for(int i=0; i < valor; i++){
        cout << vetor[i] << " ";
    }
    cout << endl;
}

int main(){
    int criancas;
    cin >> criancas;
    int grito;
    cin >> grito;

    int vetor[criancas];
    for(int i=0; i < criancas; i++){
        cin >> vetor[i];
    }

    int vetor_gritos[grito];
    for(int i=0; i < grito; i++){
        cin >> vetor_gritos[i];
    }

    for(int i=0; i < grito; i++){
        int resultado = buscador(vetor, criancas, vetor_gritos[i]);
        if(resultado != -1){
            if(resultado -1 >= 0){
                vetor[resultado - 1] *= -1;
            }
            if(resultado + 1 < criancas){ 
                vetor[resultado +1] *= -1;
            } 
        }
    }
    imprime(vetor, criancas);
}