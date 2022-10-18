#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int quantidade;
    cin >> quantidade;
    float chute_primeiro[quantidade];
    char chute_segundo[quantidade];

    float produtos[quantidade];
    for(int i = 0; i < quantidade; i++){
        cin >> produtos[i];
    }
    for(int i = 0; i < quantidade; i++){
        cin >> chute_primeiro[i];
    }
    for(int i = 0; i < quantidade; i++){
        cin >> chute_segundo[i];
    }
    int jog1 = 0;
    int jog2 = 0;
    for(int i = 0; i < quantidade; i++){
        //jog1 ganhar por ser m
        if(chute_primeiro[i] == produtos[i]){
            jog1++;
        }
        else if(chute_primeiro[i] > produtos[i] && chute_segundo[i] == 'm'){
            jog2++;
        }
        else if(chute_primeiro[i] < produtos[i] && chute_segundo[i] == 'M'){
            jog2++;
        }
        else if(chute_primeiro[i] > produtos[i] && chute_segundo[i] == 'M'){
            jog1++;
        }
    }
    //cout << jog1 << endl;
    //cout << jog2 << endl;
    if(jog1 > jog2){
        cout << "primeiro" << endl;
    }
    else if(jog2 > jog1){
        cout << "segundo" << endl;
    }
    else {
        cout << "empate" << endl;
    }
}