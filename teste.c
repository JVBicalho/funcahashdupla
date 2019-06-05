#include <stdio.h>
#include <stdlib.h>
#include <uni.h>
//declarando estrutura
struct universidade
{
    /* data */
    char name[50];
    char State;
    char location;
    char Control;
    char n_of_students; //number-of-students;
    char r_mf ;//male:female (ratio);
    char r_sf ;//student:faculty (ratio);
    char sat_verbal;
    char sat_math;
    char expenses;
    char percent_financial_aid;
    char number_of_applicants;
    char percent_admittance;
    char percent_enrolled;
    char academics ;
    char social;
    char quality_of_life;
    char academic_emphasis;
};
typedef struct universidade Universidade;

//ler arquivo de dados
void read_txt(char arquivo)
{
    FILE *arq;
    arq = fopen(arquivo, "r");
    if (arq == NULL)
    {
        printf('Erro! Aquivo não pode ser encontrado');
    }
    else
    {
        //while((fscanf(arq,"(def-instance Adelphi state newyork control private no-of-students thous:5-10 male:female ratio:30:70 student:faculty ratio:15:1 sat verbal 500 sat math 475 expenses thous$:7-10 percent-financial-aid 60 no-applicants thous:4-7 percent-admittance 70 percent-enrolled 40 academics scale:1-5 2 social scale:1-5 2 quality-of-life scale:1-5 2 academic-emphasis business-administration academic-emphasis biology", &ch1, &ch2, &ch3))!=EOF )){
        /* code */
    }
};

//Transformando string em int
int valorString(char *str){
    int i,valor =7; // i(contador) / valor( valor qualquer para não iniciar de 0)
    int tam= strlen(str); // pega o tamanho da string
    for (i = 0; i < tam; i++){
        valor = 31 * valor + (int) str[i];// (int) str[i] pega o valor ASCII do caractere
    }
    return valor;

}
/*
    Função que faz o hashing
*/
/*
int hash(int x){
    return x % 10;
}
int hash_duplo(int x){
    return x % 10;
}
//Função para inserir
void insere(int a[], int x)
{
    a[hash(x)] = x;
}
int busca_hash(int a[], int x)
{
    int k;
    k = hash(x);
    if (a[k] == x)
        return k;
//    return –1;
}
int insere(item a[], item x, int N)
{
    int i = hash(x);
    int k = hash2(x);
    int cont = 0;
    /* procura a próxima posição livre
    while (a[i] != -1)
    {
        if (a[i] == x)
            return –1; /* valor já existente na tabela
        if (++cont == N)
            return –2;   /* tabela cheia
        i = (i + k) % N; /* tabela circular
    }
    /* achamos uma posição livre
    a[i] = x;
    return i;
}
int busca_hash(item a[], item x, int N)
{
    int i = hash(x);
    int k = hash2(x) int cont = 0;
    /* procura x a partir da posição i
    while (a[i] != x)
    {
        if (a[i] == -1)
            return –1; /* não achou x, pois há uma vazia *
        if (++cont == N)
            return –2;   /* a tabela está cheia *
        i = (i + k) % N; /* tabela circular *
    }
    /* encontrou *
    return i;
}*/
int main()
{
    printf("%d \n",valorString('TESTE'));
    return 0;
}
