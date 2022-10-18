#include <iostream>
#include <iomanip>
using namespace std;

int resultado(int vetor[], int qtd, int valor){
    for(int i=0; i < qtd; i++){
        if(vetor[i] == valor || vetor[i] == -valor){
            return i;
        }
    }
    return -1;
}

int main(){
    int brincadeiras;
    cin >> brincadeiras;

    for(int i = 1; i <= brincadeiras; i++){
        int qtd;
        cin >> qtd;
        int grito;
        cin >> grito;

        int vetor[qtd];
        for(int i=0; i < qtd; i++){
            cin >> vetor[i];
        }

        int returno = resultado(vetor, qtd, grito);
        if(returno != -1){
            if(returno-1 >= 0){
                vetor[returno-1] *= -1;
            }
            if(returno+1 < qtd){
                vetor[returno+1] *= -1;
            }
        }

        for(int i=0; i < qtd; i++){
            cout << vetor[i] << "";
        }
        cout << endl;
    }
}