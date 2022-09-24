#include <iostream>
#include <iomanip>
using namespace std;

void triangulo(int qtdespacos, int n, int qtdNs){
    /*for(int i=1; i<=qtdespacos; i++){
        cout << " ";
    }*/
    
    for (int i = 1; i <= qtdNs; i++){
      cout << i << " ";
    }
    cout << endl;
    
}

int main(){
    int n;
    cin >> n;
    int qtdespacos=n;
    int somatorio=0;
    for(int i=1; i<=n; i++){
        triangulo(qtdespacos, n, i);
        qtdespacos--;
        somatorio +=i;
    }
   cout << somatorio << endl;
}