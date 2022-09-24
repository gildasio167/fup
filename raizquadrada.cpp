#include <iomanip>
#include <iostream>
#include <math.h>
using namespace std;

int raiz_quadrada(int valor){
    int resultado = sqrt(valor);
    return resultado;
}

int main(){
    int valor;
    cin >> valor;

    cout << raiz_quadrada(valor) << endl;
}