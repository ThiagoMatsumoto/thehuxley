/*
Em C não conseguimos comparar strings usando somente == ou !=, precisamos utilizar a função strcmp().
Para usar essa função, precisamos da biblioteca string.h
*/

#include <stdio.h>
#include <string.h>

int main(){
    char string1[50], string2[50];

    scanf("%s", string1);
    scanf("%s", string2);

    if(strcmp(string1,string2) == 0){
        printf("IGUAIS\n");
    } else{
        printf("DIFERENTES\n");
    }

    return 0;
}