#include <stdio.h>
#include <string.h>
#include <stdlib.h>

const int TABLE_SIZE=1024;
const int A=0.6180339887;//Constante para calculo de  hash
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
//função de hash metodo da divsão
int hashDivisao(int chave){
    return (chave & 0x7FFFFFFF) % TABLE_SIZE; //0x7FFFFFFF ELIMINA O BIT DE SINAL
}
//Função de hash matedo multipicação
int hashMulti(int chave){
 float val = chave * A;
 val = val - ((int) val);
 return (int) (TABLE_SIZE * val);// RETORNA SOMENTA A PARTE INTEIRA
}
//Função main
int main(){
    char str[] = "tESTEadfasdasfS";
    int valor=valorString(str);
    int chave = hashDivisao(valor);
    int chave2 = hashMulti(valor);
    printf("valor e %d %d %d",valor,chave, chave2);
}
