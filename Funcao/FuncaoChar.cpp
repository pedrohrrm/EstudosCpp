#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
char retornaLetra(){
    return 'x';
    //podemos ver a tabela asc e colocar o número de acordo com a letra 
    //e assim ela irá converter o código infomado na letra escolhida
}

int main(){
    char letra;
    //char recebendo o valor de uma função:
    letra = retornaLetra();

    cout << letra << endl;

    return 0;
}