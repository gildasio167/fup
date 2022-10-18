#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int valor;
    cin >> valor;

    int vetor[valor];

    for(int i = 0; i < valor; i++){
        cin >> vetor[i];
    }

    for(int i = valor - 1; i >= 0; i--){
        cout << vetor[i] << " ";
    }
    cout << endl;
}