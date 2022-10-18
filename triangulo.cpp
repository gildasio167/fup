#include <iostream>
#include <iomanip>
using namespace std;

int triangulo(int valor){
    /*for(int i=1; i<=qtdespacos; i++){
        cout << " ";
    }*/
    int soma =0;
    for (int i = 1; i <= valor; i++){
      cout << i << " ";
      soma = soma+i;
    }
    cout << endl;
    return soma;
}

int main(){
    int n;
    cin >> n;

    int soma = 0;
    for(int i=1; i<=n; i++){
        soma = soma + triangulo(i);
    }
   cout << soma << endl;
}