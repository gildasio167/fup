#include <iostream>
using namespace std;

int main(){
    int valor;
    cin >> valor;

    int vetor[valor];
    int jedi =0, sith =0;

    for(int i = 0; i < valor; i++){
        cin >> vetor[i];
    }
    for(int i = 0; i < valor/2 ; i++){
        jedi = jedi + vetor[i];
    }
    for(int i = valor -1; i >= valor/2; i--){
        sith = sith + vetor[i];
    }
    if(jedi > sith){
        cout << "Jedi" << endl;
    }
    else if(sith > jedi){
        cout << "Sith" << endl;
    }
    else {
        cout << "Empate" << endl;
    }
}