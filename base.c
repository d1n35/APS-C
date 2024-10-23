#include <stdio.h>
#include <stdlib.h>
int main(void){
    FILE *ptrArq;
    ptrArq = fopen("dtaleat1kdup0.txt","rb");
    int vet[10000];
    int size = 0;
    int value = 0;
    while(fscanf(ptrArq, "%i", &value) == 1)
        vet[size++] = value;
    for(int i = 0; 1 < size; i++)
        printf("%i \n", vet[i]);
    puts("");
}

void insert(char *item, int count){
   register int a, b; 
   char t;
   for(a=1; a<count; a++){
      t = item[a];
      for(b=a-1; b>=0 && t<item[b]; b--) 
         item[b+1] = item[b];
      item[b+1] = t;
      }
}