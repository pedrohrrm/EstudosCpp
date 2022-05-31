#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>
#include <iostream>

using namespace std;
bool retornaBooleano(){
    return true;
    //se for T retorna 1 e se for F retorna 0
}
int main(){

bool variavelBooleana;
variavelBooleana = retornaBooleano();
cout << variavelBooleana << endl;
if(variavelBooleana){//se for verdadeiro vai executar o primeiro bloco.
    cout << "É verdadeiro" << endl;
    }else{//se for falso, vai executar o segundo bloco..
        cout << "É falso" << endl;
    }
    return 0;
}
