#include <iomanip>
#include <iostream>
using namespace std;

int fatorial(int valor){
    int fat = valor;
    for(int i=1; i<valor; i++){
        fat = fat * i;
    }

    return fat;
}

int main(){

    int valor;
    cin >> valor;
    int resultado = 0;
    resultado = fatorial(valor);

    cout << resultado << endl;

}