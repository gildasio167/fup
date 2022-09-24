#include <iomanip>
#include <iostream>
using namespace std;

float converte_para_celsius(float graus){
    float temperatura;
    temperatura = (graus - 32)*(5.0/9.0);

    return temperatura;
}

int main(){
    cout.precision(5);
    cout << fixed;

    float graus;
    cin >> graus;
    float fahrenheit = converte_para_celsius(graus);
    
    cout << fahrenheit << endl;
   
}