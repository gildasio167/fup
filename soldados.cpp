#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main(){
    cout.precision(2);
    cout << fixed;

    int valor;
    cin >> valor;

    float vetor[valor];
    float soma = 0.0, media = 0.0;


    for(int i = 0; i < valor; i++){
        cin >> vetor[i];
    }
    for(int i = 0; i < valor; i++){
        soma = soma + vetor[i];
    }
    media = soma / valor;
    cout << media << endl;

    for(int i = 0; i < valor; i++){
        if(fabs(vetor[i] - media) < 0.01){
            cout << "M ";
        }
        else if(vetor[i] > media){
            cout << "G ";
        }
        else {
            cout << "P";
        }
    }


}