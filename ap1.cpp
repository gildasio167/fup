#include <iostream>
#include <iomanip>
using namespace std;

    //Questão da idade ap1
/*  int main(){
        
        int ano=0, meses=0, semanas=0, dias;
        cin >> dias;

        if(dias>30){
            if(dias>=365){
                ano=dias/365;
                dias=dias%365;
            }
            if(dias>=30){
                meses=dias/30;
                dias=dias%30;
            }
            if(dias>=7){
                semanas=dias/7;
                dias=dias%7;
            }
        }
        cout << ano << " :" << meses << " :" << semanas << " :" << dias << endl;
    } 
*/
    /*
    int main(){
        cout.precision(2);
        cout << fixed;

        float nota1, nota2, nota3, nota4, nota5;
        cin >> nota1 >> nota2 >> nota3 >> nota4 >> nota5;

        //float nota1=8.0, nota2 = 7.0, nota3= 6.0, nota4=6.0, nota5=5.0;

        float max=nota1, min=nota1;//Definindo a maior e a menor nota com a nota1
        float media = nota1+nota2+nota3+nota4+nota5;
        //cout << max << endl;
        for(int i=1; i<=5;i++){
            // Abaixo é verificado a maior nota entre as 5
            if(max<nota2){
                max=nota2;
                //cout << "teste : " << max << endl;
            }
            if(max<nota3){
                max=nota3;
                    //cout << "teste : " << max << endl;
            }
            if(max<nota4){
                max=nota4;
                      //  cout << "teste : " << max << endl;
            }
            if(max<nota5){
                max=nota5;
                        //    cout << "teste : " << max << endl;
            }
            // Abaixo é verificado a menor nota entre as 5
            if(min>nota2){
                min=nota2;
            }
            if(min>nota3){
                min=nota3;
            }
            if(min>nota4){
                min=nota4;
            }
            if(min>nota5){
                min=nota5;
            }
            
        }
            //Abaixo resolvi remover a nota maior e menor para depois realizar a divisão
            media= (media-max)-min;
            //cout << media << endl;
            media= media/3;

            cout << media << endl;
    }   */
/*
int main(){
    int quantidade;
    cin >> quantidade;
    int soma=0;
    int contador=0;
    int media=0;
    int valor=0;

    for(int i=1;i<=quantidade;i++){
        cin >> valor;
        //cout << i << endl;
        if(valor%2 !=0){
            if(valor>5){
                soma=soma+valor;
                contador++;
            }
        }
    }
    media=soma/contador;
    cout << media << endl;
}   */

int main(){
    
}
    
