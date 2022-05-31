#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;
float retornaQuebrado ();
int retornaDez(); //definindo que a função existe.
int main(){
    int a;
    //passando o retorno de uma função para uma variável:

    a = retornaDez();
    //imprimindi o valor de a
    cout << a << endl;
    float b;
    b = retornaQuebrado();
    cout << b << endl;
    return 0;
}
int retornaDez(){
    return 10;
}
//retorna um número uqebrado
float retornaQuebrado(){
    return 5.3;
}