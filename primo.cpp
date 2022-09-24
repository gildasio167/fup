#include <iomanip>
#include <iostream>
#include <math.h>
using namespace std;


int primo(int valor){
    int divisores = 0;
    for(int i=1; i<=valor; i++){
        if(valor%i == 0){
            divisores++;
        }
    }
    if(divisores == 2){
        return 1;
    }
    else {
        return 0;
    }
}

int main(){

    int a, b;
    cin >> a >> b;

    int resultado = 0;
    //if(b>=a){
        for(int i=a; i<=b; i++){
            resultado = primo(i);
            if(resultado == 1){
                cout << i << endl;
            }
        }
   // }

}