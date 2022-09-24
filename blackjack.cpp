#include <iomanip>
#include <iostream>
using namespace std;

int main(){
    int quantidade = 0;
    cin >> quantidade;

    int valor_carta = 0;
    int k = 10, q = 10, j = 10;
    int as = 11;
    int contador_as = 0;
    int soma = 0;

    for(int i=1; i<=quantidade; i++){
        cin >> valor_carta;
        //Carta Ás
        if(valor_carta == 1){
            soma = soma+as;
            contador_as++;
        }
        //Carta J
        else if(valor_carta == 11){
            soma = soma+j;
        }
        //Carta Q
        else if(valor_carta == 12){
            soma = soma+q;
        }
        //Carta K
        else if(valor_carta == 13){
            soma = soma+k;
        }
        else {
            soma = soma+valor_carta;
        }
    }
    if(soma > 21){
            for (int i = 0; i<=contador_as; i++)
            {
                soma= soma-10;
                contador_as--;
            }
            
            //soma = soma-10;
        }
    cout << soma << endl;
}
