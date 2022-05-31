#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>
#include <iostream>
#include <string>
using namespace std;

int main(){
    //variável
    int a = 20; 

    //imprimindo o valor de uma variável
    cout << a << endl;

    //imprimindo o endereço de uma variável
    cout << &a << endl;

    //o ponteiro é o endereço da variável, com isso o endereço da memória

    //lendo o valor de uma variável
    cin >> a;

    cout << a << endl;
 //imprimindo o endereço de uma variável
    cout << &a << endl;
    //Variáveis armazenam valores, ponteiros armazenam posições da memória.
    //ponteiros armazenam posições da memória
    int b = 14;
    //declarando um ponteiro
    int *ponteiro;

//ponteiro recebendo a posição na memória da variável b.
    ponteiro = &b;
        cout << b << endl;

// o * pode ser lido como conteúdo apontado por
*ponteiro = 40;




    return 0;
}