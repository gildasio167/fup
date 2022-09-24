#include <iomanip>
#include <iostream>
using namespace std;

int fatorial_de_5(){
    int fat5 = 1;
    for(int i=1; i<=5; i++){
        fat5= fat5 *i;
    }

    return fat5;
}
int fatorial_de_4(){
    int fat4 = 1;
    for(int i=1; i<=4; i++){
        fat4= fat4 *i;
    }

    return fat4;
}

int main(){
        int fat5 = fatorial_de_5();
        int fat4 = fatorial_de_4();

        int expressao = fat5 - fat4;
        cout << expressao << endl;
}