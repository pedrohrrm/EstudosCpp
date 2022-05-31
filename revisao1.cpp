[13:53, 29/05/2022] Pedro Henrique: #include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <iostream>
#include <string>

using namespace std;

int main(){

    //Definindo Variáveis
    int a;
    float b;
    char c;
    bool d;

    //Passando Valores
    a = 10;
    b = 2.8;
    c = 'w';
    d = true;

    //Escrevendo variáveis na tela
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout << d << endl;

    
    

    //Lendo valores com C++
    cin >> a;

    //Imprimindo novo valor
    cout << "Valor :" << a;

    return 0;
}