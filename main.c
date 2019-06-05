#include <stdio.h>
#include <stdlib.h>
/*
Autor : Jv Bicalho.2019.
Email: contatojvbicalho@gmail.com
*/

//Função que retorna valor da chave

int valorString(char *str){
     int i,valor =7; // i(contador) / valor( valor qualquer para não iniciar de 0)
    int tam= strlen(str); // pega o tamanho da string
    for (i = 0; i < tam; i++){
        valor = 31 * valor + (int) str[i];// (int) str[i] pega o valor ASCII do caractere
    }
    return valor;
}

//Função main
int main(){
    char str[] = "t";
    int valor = valorString(str);
    printf("valor e %d", valor);
}
