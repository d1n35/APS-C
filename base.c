#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Método de ordenação (única parte que será alterada do código original vai ser alguns nomes de varáveis, aqui sendo o VET e SIZE)
void insert(int *vet, int size){
    register int a, b; 
    int t;
    for(a=1; a<size; a++){
        t = vet[a];
        for(b=a-1; b>=0 && t<vet[b]; b--) 
            vet[b+1] = vet[b];
        vet[b+1] = t;
    }
}

int main(void){

//Declarando as variáveis
    int vet[10000];
    int size = 0;
    int value = 0;

//Abrindo a base de dados
    FILE *ptrArq;
    ptrArq = fopen("dtaleat1kdup0.txt","rb");
    if (ptrArq == NULL){
        printf("Erro ao tentar abrir o arquivo!");
        exit(1);
    }

//Inserindo a base de dados no vetor    
    while(fscanf(ptrArq, "%i", &value) == 1){
        vet[size++] = value;
    }

//Mostrando o vetor desordenado
    printf("Valores desordenados:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", vet[i]);
    }

//Contagem de tempo e ordenação
    clock_t tempo = clock();
    insert(vet, size);
    clock_t tempo2 = clock();
    
//Mostrando o vetor ordenado
    for (int i = 0; i < size; i++) {
        printf("%d ", vet[i]);
    }

//Mostra o tempo gasto
    float r = tempo2 - tempo;
    printf("\n%d %d", tempo, tempo2);
    printf("\nclock: %f", r / CLOCKS_PER_SEC);
}