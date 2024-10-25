#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Método de ordenação (única parte que será alterada do código original vai ser alguns nomes de varáveis, aqui sendo o VET e SIZE)
void insert(int *vet, int size)
{
    register int a, b;
    int t;
    for (a = 1; a < size; a++)
    {
        t = vet[a];
        for (b = a - 1; b >= 0 && t < vet[b]; b--)
            vet[b + 1] = vet[b];
        vet[b + 1] = t;
    }
}

int main(void)
{

    // Declarando as variáveis
    int vet[10000];
    int size = 0;
    int value = 0;
    int dataSize;
    int duplicate;
    int dbForm;

    // Abrindo a base de dados
    FILE *ptrArq;

    printf("\nEscolha o tamanho da base que deseja testar:\n1 - 10 dados\n2 - 50 dados\n3-100\n4 - 500 dados\n5 - 1k dados\n6 - 5k dados\n7 - 10k dados\n8 - 50k dados\n9 - 100k dados");
    scanf("%d", dataSize);
    switch (dataSize)
    {
    case 1:
        printf("\nDeseja que a base tenha dados repetidos?\n1 - Sim\n2 - Não");
        scanf("%d", duplicate);
        switch (duplicate)
        {
        case 1:
            printf("\nDeseja que a base de dados em sua forma bruta esteja de forma:\n1 - Aleatória\n2 - Concava\n3 - Convexa\n4 - Crescente\n5 - Decrescente");
            scanf("%d", dbForm);
            switch (dbForm)
            {
            case 1:
                ptrArq = fopen("/BASE DE DADOS/10/Com Duplicidade/Aleatório/dtaleat10dup0.txt", "rb");
                break;

            case 2:
                ptrArq = fopen("/BASE DE DADOS/10/Com Duplicidade/Concavo-DecresceCresce/dtconcv10dup0.txt", "rb");
                break;

            case 3:
                ptrArq = fopen("/BASE DE DADOS/10/Com Duplicidade/Convexo-CresceDescresce/dtconvx10dup0.txt", "rb");
                break;

            case 4:
                ptrArq = fopen("/BASE DE DADOS/10/Com Duplicidade/Crescente/dtcresc10dup0.txt", "rb");
                break;

            case 5:
                ptrArq = fopen("/BASE DE DADOS/10/Com Duplicidade/Decrescente/dtdecre10dup0.txt", "rb");
                break;

            default:
                break;
            }

        case 2:
            printf("\nDeseja que a base de dados em sua forma bruta esteja de forma:\n1 - Aleatória\n2 - Concava\n3 - Convexa\n4 - Crescente\n5 - Decrescente");
            scanf("%d", dbForm);
            switch (dbForm)
            {
            case 1:
                ptrArq = fopen("/BASE DE DADOS/10/Sem Duplicidade/Aleatório/dtaleat10uni0.txt", "rb");
                break;

            case 2:
                ptrArq = fopen("/BASE DE DADOS/10/Sem Duplicidade/Concavo-DecresceCresce/dtconcv10uni0.txt", "rb");
                break;

            case 3:
                ptrArq = fopen("/BASE DE DADOS/10/Sem Duplicidade/Convexo-CresceDescresce/dtconvx10uni0.txt", "rb");
                break;

            case 4:
                ptrArq = fopen("/BASE DE DADOS/10/Sem Duplicidade/Crescente/dtcresc10uni0.txt", "rb");
                break;

            case 5:
                ptrArq = fopen("/BASE DE DADOS/10/Sem Duplicidade/Decrescente/dtdecre10uni0.txt", "rb");
                break;

            default:
                break;
            }

        default:
            break;
        }
    case 2:
        printf("\nDeseja que a base tenha dados repetidos?\n1 - Sim\n2 - Não");
        scanf("%d", duplicate);
        switch (duplicate)
        {
        case 1:
            printf("\nDeseja que a base de dados em sua forma bruta esteja de forma:\n1 - Aleatória\n2 - Concava\n3 - Convexa\n4 - Crescente\n5 - Decrescente");
            scanf("%d", dbForm);
            switch (dbForm)
            {
            case 1:
                ptrArq = fopen("/BASE DE DADOS/50/Com Duplicidade/Aleatório/dtaleat50dup0.txt", "rb");
                break;

            case 2:
                ptrArq = fopen("/BASE DE DADOS/50/Com Duplicidade/Concavo-DecresceCresce/dtconcv50dup0.txt", "rb");
                break;

            case 3:
                ptrArq = fopen("/BASE DE DADOS/50/Com Duplicidade/Convexo-CresceDescresce/dtconvx50dup0.txt", "rb");
                break;

            case 4:
                ptrArq = fopen("/BASE DE DADOS/50/Com Duplicidade/Crescente/dtcresc50dup0.txt", "rb");
                break;

            case 5:
                ptrArq = fopen("/BASE DE DADOS/50/Com Duplicidade/Decrescente/dtdecre50dup0.txt", "rb");
                break;

            default:
                break;
            }

        case 2:
            printf("\nDeseja que a base de dados em sua forma bruta esteja de forma:\n1 - Aleatória\n2 - Concava\n3 - Convexa\n4 - Crescente\n5 - Decrescente");
            scanf("%d", dbForm);
            switch (dbForm)
            {
            case 1:
                ptrArq = fopen("/BASE DE DADOS/50/Sem Duplicidade/Aleatório/dtaleat50uni0.txt", "rb");
                break;

            case 2:
                ptrArq = fopen("/BASE DE DADOS/50/Sem Duplicidade/Concavo-DecresceCresce/dtconcv50uni0.txt", "rb");
                break;

            case 3:
                ptrArq = fopen("/BASE DE DADOS/50/Sem Duplicidade/Convexo-CresceDescresce/dtconvx50uni0.txt", "rb");
                break;

            case 4:
                ptrArq = fopen("/BASE DE DADOS/50/Sem Duplicidade/Crescente/dtcresc50uni0.txt", "rb");
                break;

            case 5:
                ptrArq = fopen("/BASE DE DADOS/50/Sem Duplicidade/Decrescente/dtdecre50uni0.txt", "rb");
                break;

            default:
                break;
            }

        default:
            break;
        }

    case 3:
        printf("\nDeseja que a base tenha dados repetidos?\n1 - Sim\n2 - Não");
        scanf("%d", duplicate);
        switch (duplicate)
        {
        case 1:
            printf("\nDeseja que a base de dados em sua forma bruta esteja de forma:\n1 - Aleatória\n2 - Concava\n3 - Convexa\n4 - Crescente\n5 - Decrescente");
            scanf("%d", dbForm);
            switch (dbForm)
            {
            case 1:
                ptrArq = fopen("/BASE DE DADOS/100/Com Duplicidade/Aleatório/dtaleat100dup0.txt", "rb");
                break;

            case 2:
                ptrArq = fopen("/BASE DE DADOS/100/Com Duplicidade/Concavo-DecresceCresce/dtconcv100dup0.txt", "rb");
                break;

            case 3:
                ptrArq = fopen("/BASE DE DADOS/100/Com Duplicidade/Convexo-CresceDescresce/dtconvx100dup0.txt", "rb");
                break;

            case 4:
                ptrArq = fopen("/BASE DE DADOS/100/Com Duplicidade/Crescente/dtcresc100dup0.txt", "rb");
                break;

            case 5:
                ptrArq = fopen("/BASE DE DADOS/100/Com Duplicidade/Decrescente/dtdecre100dup0.txt", "rb");
                break;

            default:
                break;
            }

        case 2:
            printf("\nDeseja que a base de dados em sua forma bruta esteja de forma:\n1 - Aleatória\n2 - Concava\n3 - Convexa\n4 - Crescente\n5 - Decrescente");
            scanf("%d", dbForm);
            switch (dbForm)
            {
            case 1:
                ptrArq = fopen("/BASE DE DADOS/100/Sem Duplicidade/Aleatório/dtaleat100uni0.txt", "rb");
                break;

            case 2:
                ptrArq = fopen("/BASE DE DADOS/100/Sem Duplicidade/Concavo-DecresceCresce/dtconcv100uni0.txt", "rb");
                break;

            case 3:
                ptrArq = fopen("/BASE DE DADOS/100/Sem Duplicidade/Convexo-CresceDescresce/dtconvx100uni0.txt", "rb");
                break;

            case 4:
                ptrArq = fopen("/BASE DE DADOS/100/Sem Duplicidade/Crescente/dtcresc100uni0.txt", "rb");
                break;

            case 5:
                ptrArq = fopen("/BASE DE DADOS/100/Sem Duplicidade/Decrescente/dtdecre1000uni0.txt", "rb");
                break;

            default:
                break;
            }

        default:
            break;
        }

    case 4:
        printf("\nDeseja que a base tenha dados repetidos?\n1 - Sim\n2 - Não");
        scanf("%d", duplicate);
        switch (duplicate)
        {
        case 1:
            printf("\nDeseja que a base de dados em sua forma bruta esteja de forma:\n1 - Aleatória\n2 - Concava\n3 - Convexa\n4 - Crescente\n5 - Decrescente");
            scanf("%d", dbForm);
            switch (dbForm)
            {
            case 1:
                ptrArq = fopen("/BASE DE DADOS/500/Com Duplicidade/Aleatório/dtaleat500dup0.txt", "rb");
                break;

            case 2:
                ptrArq = fopen("/BASE DE DADOS/500/Com Duplicidade/Concavo-DecresceCresce/dtconcv500dup0.txt", "rb");
                break;

            case 3:
                ptrArq = fopen("/BASE DE DADOS/500/Com Duplicidade/Convexo-CresceDescresce/dtconvx500dup0.txt", "rb");
                break;

            case 4:
                ptrArq = fopen("/BASE DE DADOS/500/Com Duplicidade/Crescente/dtcresc500dup0.txt", "rb");
                break;

            case 5:
                ptrArq = fopen("/BASE DE DADOS/500/Com Duplicidade/Decrescente/dtdecre500dup0.txt", "rb");
                break;

            default:
                break;
            }

        case 2:
            printf("\nDeseja que a base de dados em sua forma bruta esteja de forma:\n1 - Aleatória\n2 - Concava\n3 - Convexa\n4 - Crescente\n5 - Decrescente");
            scanf("%d", dbForm);
            switch (dbForm)
            {
            case 1:
                ptrArq = fopen("/BASE DE DADOS/500/Sem Duplicidade/Aleatório/dtaleat500uni0.txt", "rb");
                break;

            case 2:
                ptrArq = fopen("/BASE DE DADOS/500/Sem Duplicidade/Concavo-DecresceCresce/dtconcv500uni0.txt", "rb");
                break;

            case 3:
                ptrArq = fopen("/BASE DE DADOS/500/Sem Duplicidade/Convexo-CresceDescresce/dtconvx500uni0.txt", "rb");
                break;

            case 4:
                ptrArq = fopen("/BASE DE DADOS/500/Sem Duplicidade/Crescente/dtcresc500uni0.txt", "rb");
                break;

            case 5:
                ptrArq = fopen("/BASE DE DADOS/500/Sem Duplicidade/Decrescente/dtdecre500uni0.txt", "rb");
                break;

            default:
                break;
            }

        default:
            break;
        }

    case 5:
        printf("\nDeseja que a base tenha dados repetidos?\n1 - Sim\n2 - Não");
        scanf("%d", duplicate);
        switch (duplicate)
        {
        case 1:
            printf("\nDeseja que a base de dados em sua forma bruta esteja de forma:\n1 - Aleatória\n2 - Concava\n3 - Convexa\n4 - Crescente\n5 - Decrescente");
            scanf("%d", dbForm);
            switch (dbForm)
            {
            case 1:
                ptrArq = fopen("/BASE DE DADOS/1k/Com Duplicidade/Aleatório/dtaleat1kdup0.txt", "rb");
                break;

            case 2:
                ptrArq = fopen("/BASE DE DADOS/1k/Com Duplicidade/Concavo-DecresceCresce/dtconcv1kdup0.txt", "rb");
                break;

            case 3:
                ptrArq = fopen("/BASE DE DADOS/1k/Com Duplicidade/Convexo-CresceDescresce/dtconvx1kdup0.txt", "rb");
                break;

            case 4:
                ptrArq = fopen("/BASE DE DADOS/1k/Com Duplicidade/Crescente/dtcresc1kdup0.txt", "rb");
                break;

            case 5:
                ptrArq = fopen("/BASE DE DADOS/1k/Com Duplicidade/Decrescente/dtdecre1kdup0.txt", "rb");
                break;

            default:
                break;
            }

        case 2:
            printf("\nDeseja que a base de dados em sua forma bruta esteja de forma:\n1 - Aleatória\n2 - Concava\n3 - Convexa\n4 - Crescente\n5 - Decrescente");
            scanf("%d", dbForm);
            switch (dbForm)
            {
            case 1:
                ptrArq = fopen("/BASE DE DADOS/1k/Sem Duplicidade/Aleatório/dtaleat1kuni0.txt", "rb");
                break;

            case 2:
                ptrArq = fopen("/BASE DE DADOS/1k/Sem Duplicidade/Concavo-DecresceCresce/dtconcv1kuni0.txt", "rb");
                break;

            case 3:
                ptrArq = fopen("/BASE DE DADOS/1k/Sem Duplicidade/Convexo-CresceDescresce/dtconvx1kuni0.txt", "rb");
                break;

            case 4:
                ptrArq = fopen("/BASE DE DADOS/1k/Sem Duplicidade/Crescente/dtcresc1kuni0.txt", "rb");
                break;

            case 5:
                ptrArq = fopen("/BASE DE DADOS/1k/Sem Duplicidade/Decrescente/dtdecre1kuni0.txt", "rb");
                break;

            default:
                break;
            }

        default:
            break;
        }
    case 6:
        printf("\nDeseja que a base tenha dados repetidos?\n1 - Sim\n2 - Não");
        scanf("%d", duplicate);
        switch (duplicate)
        {
        case 1:
            printf("\nDeseja que a base de dados em sua forma bruta esteja de forma:\n1 - Aleatória\n2 - Concava\n3 - Convexa\n4 - Crescente\n5 - Decrescente");
            scanf("%d", dbForm);
            switch (dbForm)
            {
            case 1:
                ptrArq = fopen("/BASE DE DADOS/5k/Com Duplicidade/Aleatório/dtaleat5kdup0.txt", "rb");
                break;

            case 2:
                ptrArq = fopen("/BASE DE DADOS/5k/Com Duplicidade/Concavo-DecresceCresce/dtconcv5kdup0.txt", "rb");
                break;

            case 3:
                ptrArq = fopen("/BASE DE DADOS/5k/Com Duplicidade/Convexo-CresceDescresce/dtconvx5kdup0.txt", "rb");
                break;

            case 4:
                ptrArq = fopen("/BASE DE DADOS/5k/Com Duplicidade/Crescente/dtcresc5kdup0.txt", "rb");
                break;

            case 5:
                ptrArq = fopen("/BASE DE DADOS/5k/Com Duplicidade/Decrescente/dtdecre5kdup0.txt", "rb");
                break;

            default:
                break;
            }
        
        case 2:
            printf("\nDeseja que a base de dados em sua forma bruta esteja de forma:\n1 - Aleatória\n2 - Concava\n3 - Convexa\n4 - Crescente\n5 - Decrescente");
            scanf("%d", dbForm);
            switch (dbForm)
            {
            case 1:
                ptrArq = fopen("/BASE DE DADOS/5k/Sem Duplicidade/Aleatório/dtaleat5kuni0.txt", "rb");
                break;

            case 2:
                ptrArq = fopen("/BASE DE DADOS/5k/Sem Duplicidade/Concavo-DecresceCresce/dtconcv5kuni0.txt", "rb");
                break;

            case 3:
                ptrArq = fopen("/BASE DE DADOS/5k/Sem Duplicidade/Convexo-CresceDescresce/dtconvx5kuni0.txt", "rb");
                break;

            case 4:
                ptrArq = fopen("/BASE DE DADOS/5k/Sem Duplicidade/Crescente/dtcresc5kuni0.txt", "rb");
                break;

            case 5:
                ptrArq = fopen("/BASE DE DADOS/5k/Sem Duplicidade/Decrescente/dtdecre5kuni0.txt", "rb");
                break;

            default:
                break;
            }
            
        default:
            break;
        }
    case 7:
        printf("\nDeseja que a base tenha dados repetidos?\n1 - Sim\n2 - Não");
        scanf("%d", duplicate);
        switch (duplicate)
        {
        case 1:
            printf("\nDeseja que a base de dados em sua forma bruta esteja de forma:\n1 - Aleatória\n2 - Concava\n3 - Convexa\n4 - Crescente\n5 - Decrescente");
            scanf("%d", dbForm);
            switch (dbForm)
            {
            case 1:
                ptrArq = fopen("/BASE DE DADOS/10k/Com Duplicidade/Aleatório/dtaleat10kdup0.txt", "rb");
                break;

            case 2:
                ptrArq = fopen("/BASE DE DADOS/10k/Com Duplicidade/Concavo-DecresceCresce/dtconcv10kdup0.txt", "rb");
                break;

            case 3:
                ptrArq = fopen("/BASE DE DADOS/10k/Com Duplicidade/Convexo-CresceDescresce/dtconvx10kdup0.txt", "rb");
                break;

            case 4:
                ptrArq = fopen("/BASE DE DADOS/10k/Com Duplicidade/Crescente/dtcresc10kdup0.txt", "rb");
                break;

            case 5:
                ptrArq = fopen("/BASE DE DADOS/10k/Com Duplicidade/Decrescente/dtdecre10kdup0.txt", "rb");
                break;

            default:
                break;
            }
        
        case 2:
            printf("\nDeseja que a base de dados em sua forma bruta esteja de forma:\n1 - Aleatória\n2 - Concava\n3 - Convexa\n4 - Crescente\n5 - Decrescente");
            scanf("%d", dbForm);
            switch (dbForm)
            {
            case 1:
                ptrArq = fopen("/BASE DE DADOS/10k/Sem Duplicidade/Aleatório/dtaleat10kuni0.txt", "rb");
                break;

            case 2:
                ptrArq = fopen("/BASE DE DADOS/10k/Sem Duplicidade/Concavo-DecresceCresce/dtconcv10kuni0.txt", "rb");
                break;

            case 3:
                ptrArq = fopen("/BASE DE DADOS/10k/Sem Duplicidade/Convexo-CresceDescresce/dtconvx10kuni0.txt", "rb");
                break;

            case 4:
                ptrArq = fopen("/BASE DE DADOS/10k/Sem Duplicidade/Crescente/dtcresc10kuni0.txt", "rb");
                break;

            case 5:
                ptrArq = fopen("/BASE DE DADOS/10k/Sem Duplicidade/Decrescente/dtdecre10kuni0.txt", "rb");
                break;

            default:
                break;
            }
            
        default:
            break;
        }
    case 8:
        printf("\nDeseja que a base tenha dados repetidos?\n1 - Sim\n2 - Não");
        scanf("%d", duplicate);
        switch (duplicate)
        {
        case 1:
            printf("\nDeseja que a base de dados em sua forma bruta esteja de forma:\n1 - Aleatória\n2 - Concava\n3 - Convexa\n4 - Crescente\n5 - Decrescente");
            scanf("%d", dbForm);
            switch (dbForm)
            {
            case 1:
                ptrArq = fopen("/BASE DE DADOS/50k/Com Duplicidade/Aleatório/dtaleat50kdup0.txt", "rb");
                break;

            case 2:
                ptrArq = fopen("/BASE DE DADOS/50k/Com Duplicidade/Concavo-DecresceCresce/dtconcv50kdup0.txt", "rb");
                break;

            case 3:
                ptrArq = fopen("/BASE DE DADOS/50k/Com Duplicidade/Convexo-CresceDescresce/dtconvx50kdup0.txt", "rb");
                break;

            case 4:
                ptrArq = fopen("/BASE DE DADOS/50k/Com Duplicidade/Crescente/dtcresc50kdup0.txt", "rb");
                break;

            case 5:
                ptrArq = fopen("/BASE DE DADOS/50k/Com Duplicidade/Decrescente/dtdecre50kdup0.txt", "rb");
                break;

            default:
                break;
            }
        
        case 2:
            printf("\nDeseja que a base de dados em sua forma bruta esteja de forma:\n1 - Aleatória\n2 - Concava\n3 - Convexa\n4 - Crescente\n5 - Decrescente");
            scanf("%d", dbForm);
            switch (dbForm)
            {
            case 1:
                ptrArq = fopen("/BASE DE DADOS/50k/Sem Duplicidade/Aleatório/dtaleat50kuni0.txt", "rb");
                break;

            case 2:
                ptrArq = fopen("/BASE DE DADOS/50k/Sem Duplicidade/Concavo-DecresceCresce/dtconcv50kuni0.txt", "rb");
                break;

            case 3:
                ptrArq = fopen("/BASE DE DADOS/50k/Sem Duplicidade/Convexo-CresceDescresce/dtconvx50kuni0.txt", "rb");
                break;

            case 4:
                ptrArq = fopen("/BASE DE DADOS/50k/Sem Duplicidade/Crescente/dtcresc50kuni0.txt", "rb");
                break;

            case 5:
                ptrArq = fopen("/BASE DE DADOS/50k/Sem Duplicidade/Decrescente/dtdecre50kuni0.txt", "rb");
                break;

            default:
                break;
            }
            
        default:
            break;
        }
    case 9:
        printf("\nDeseja que a base tenha dados repetidos?\n1 - Sim\n2 - Não");
        scanf("%d", duplicate);
        switch (duplicate)
        {
        case 1:
            printf("\nDeseja que a base de dados em sua forma bruta esteja de forma:\n1 - Aleatória\n2 - Concava\n3 - Convexa\n4 - Crescente\n5 - Decrescente");
            scanf("%d", dbForm);
            switch (dbForm)
            {
            case 1:
                ptrArq = fopen("/BASE DE DADOS/100k/Com Duplicidade/Aleatório/dtaleat100kdup0.txt", "rb");
                break;

            case 2:
                ptrArq = fopen("/BASE DE DADOS/100k/Com Duplicidade/Concavo-DecresceCresce/dtconcv100kdup0.txt", "rb");
                break;

            case 3:
                ptrArq = fopen("/BASE DE DADOS/100k/Com Duplicidade/Convexo-CresceDescresce/dtconvx100kdup0.txt", "rb");
                break;

            case 4:
                ptrArq = fopen("/BASE DE DADOS/100k/Com Duplicidade/Crescente/dtcresc100kdup0.txt", "rb");
                break;

            case 5:
                ptrArq = fopen("/BASE DE DADOS/100k/Com Duplicidade/Decrescente/dtdecre100kdup0.txt", "rb");
                break;

            default:
                break;
            }
        
        case 2:
            printf("\nDeseja que a base de dados em sua forma bruta esteja de forma:\n1 - Aleatória\n2 - Concava\n3 - Convexa\n4 - Crescente\n5 - Decrescente");
            scanf("%d", dbForm);
            switch (dbForm)
            {
            case 1:
                ptrArq = fopen("/BASE DE DADOS/100k/Sem Duplicidade/Aleatório/dtaleat100kuni0.txt", "rb");
                break;

            case 2:
                ptrArq = fopen("/BASE DE DADOS/100k/Sem Duplicidade/Concavo-DecresceCresce/dtconcv100kuni0.txt", "rb");
                break;

            case 3:
                ptrArq = fopen("/BASE DE DADOS/100k/Sem Duplicidade/Convexo-CresceDescresce/dtconvx100kuni0.txt", "rb");
                break;

            case 4:
                ptrArq = fopen("/BASE DE DADOS/100k/Sem Duplicidade/Crescente/dtcresc100kuni0.txt", "rb");
                break;

            case 5:
                ptrArq = fopen("/BASE DE DADOS/100k/Sem Duplicidade/Decrescente/dtdecre100kuni0.txt", "rb");
                break;

            default:
                break;
            }
            
        default:
            break;
        }
    }

    if (ptrArq == NULL)
    {
        printf("Erro ao tentar abrir o arquivo!");
        exit(1);
    }

    // Inserindo a base de dados no vetor
    while (fscanf(ptrArq, "%i", &value) == 1)
    {
        vet[size++] = value;
    }

    // Mostrando o vetor desordenado
    printf("Valores desordenados:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", vet[i]);
    }

    // Contagem de tempo e ordenação
    clock_t tempo = clock();
    insert(vet, size);
    clock_t tempo2 = clock();

    // Mostrando o vetor ordenado
    for (int i = 0; i < size; i++)
    {
        printf("%d ", vet[i]);
    }

    // Mostra o tempo gasto
    float r = tempo2 - tempo;
    printf("\n%d %d", tempo, tempo2);
    printf("\nclock: %2.10f", r / CLOCKS_PER_SEC);
}