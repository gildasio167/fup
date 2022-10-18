#include <iostream>
#include <iomanip>
using namespace std;

void espacos(int qtdespacos, int n, int qtdNs){
    for(int i=1; i<=qtdespacos; i++){
        cout << " ";
    }
    for (int i = 1; i <= qtdNs; i++){
      cout << n << " ";
    }
    cout << endl;
    
}

int main(){
    int n;
    cin >> n;
    int qtdespacos=n;
    for(int i=1; i<=n; i++){
        espacos(qtdespacos, n, i);
        qtdespacos--;
    }
   
}