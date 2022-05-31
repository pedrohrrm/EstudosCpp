#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>
#include <iostream>
#include <string>
using namespace std;
//função vazia sem retorno que faz um traço
void desenho (){
    cout << "-----------" << endl;
}

int main(){
    //chamando a função a função:
    desenho();
    cout << "Olá mundo!" << endl;
    return 0;
}