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
    int dataSize;
    int duplicate;
    int dbForm;

//Abrindo a base de dados
    FILE *ptrArq;

    printf("\nEscolha o tamanho da base que deseja testar:\n1 - 10 dados\n2 - 50 dados\n3-100\n4 - 500 dados\n5 - 1k dados\n6 - 5k dados\n7 - 10k dados\n8 - 50k dados\n9 - 100k dados");
    scanf("%d", dataSize);
    switch (dataSize){
        case 1:
            printf("\nDeseja que a base tenha dados repetidos?\n1 - Sim\n2 - Não");
            scanf("%d", duplicate);
            switch (duplicate){
            case 1:
                printf("\nDeseja que a base de dados em sua forma bruta esteja de forma:\n1 - Aleatória\n2 - Concavoa\n3 - Convexa\n4 - Crescente\n5 - Decrescente");
                scanf("%d", dbForm);
                switch (dbForm){
                case 1/* constant-expression */:
                    /* code */
                    break;
                
                default:
                    break;
                }
                /* code */
                break;
            
            default:
                break;
            }
        break;

        case 2:
            printf("\nDeseja que a base tenha dados repetidos?\n1 - Sim\n2 - Não");
            scanf("%d", duplicate);
            switch (duplicate){
            case 1:
                printf("\nDeseja que a base de dados em sua forma bruta esteja de forma:\n1 - Aleatória\n2 - Concavoa\n3 - Convexa\n4 - Crescente\n5 - Decrescente");
                scanf("%d", dbForm);
                switch (dbForm){
                case 1/* constant-expression */:
                    /* code */
                    break;
                
                default:
                    break;
                }
                /* code */
                break;
    
            default:
                break;
        }

        case 3:
            printf("\nDeseja que a base tenha dados repetidos?\n1 - Sim\n2 - Não");
            scanf("%d", duplicate);
            switch (duplicate){
            case 1:
                printf("\nDeseja que a base de dados em sua forma bruta esteja de forma:\n1 - Aleatória\n2 - Concavoa\n3 - Convexa\n4 - Crescente\n5 - Decrescente");
                scanf("%d", dbForm);
                switch (dbForm){
                case 1/* constant-expression */:
                    /* code */
                    break;
                
                default:
                    break;
                }
                /* code */
                break;
    
            default:
                break;
        }

        case 4:
            printf("\nDeseja que a base tenha dados repetidos?\n1 - Sim\n2 - Não");
            scanf("%d", duplicate);
            switch (duplicate){
            case 1:
                printf("\nDeseja que a base de dados em sua forma bruta esteja de forma:\n1 - Aleatória\n2 - Concavoa\n3 - Convexa\n4 - Crescente\n5 - Decrescente");
                scanf("%d", dbForm);
                switch (dbForm){
                case 1/* constant-expression */:
                    /* code */
                    break;
                
                default:
                    break;
                }
                /* code */
                break;
    
            default:
                break;
        }

        case 5:
            printf("\nDeseja que a base tenha dados repetidos?\n1 - Sim\n2 - Não");
            scanf("%d", duplicate);
            switch (duplicate){
            case 1:
                printf("\nDeseja que a base de dados em sua forma bruta esteja de forma:\n1 - Aleatória\n2 - Concavoa\n3 - Convexa\n4 - Crescente\n5 - Decrescente");
                scanf("%d", dbForm);
                switch (dbForm){
                case 1/* constant-expression */:
                    /* code */
                    break;
                
                default:
                    break;
                }
                /* code */
                break;
    
            default:
                break;
        }

    
    default:
        break;
    }
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
    printf("\nclock: %2.10f", r / CLOCKS_PER_SEC);
}