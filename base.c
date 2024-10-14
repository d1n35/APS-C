#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // criando a variável ponteiro para o arquivo
    FILE *pont_arq;
  
    //abrindo o arquivo
    pont_arq = fopen("arquivo.txt", "a");
  
    // fechando arquivo
    fclose(pont_arq);
  
    //mensagem para o usuário
    if (pont_arq == NULL){
        printf("ERRO! O arquivo não foi aberto!\n");
    }else{
        printf("O arquivo foi aberto com sucesso!");
    }
  
    system("pause");
    return(0);
}