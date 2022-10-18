#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    int valor;
    cin >> valor;

    int impar,par;
    int vetor[valor];

    for(int i = 0; i < valor; i++){
        cin >> vetor[i];
    }
    for(int i = 0; i < valor; i++){
        if(vetor[i]%2 != 0){
            impar = vetor[i];
            cout << impar << " ";
        }
    }
    cout << endl;
    for(int i = 0; i < valor; i++){
        if(vetor[i]%2 == 0){
            par = vetor[i]; 
            cout << par << " ";
        }
    }

}