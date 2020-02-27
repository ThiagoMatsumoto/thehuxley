/*
A nota final da escola em um dado quesito é a soma das
três notas centrais recebidas pela escola, excluindo a maior e a menor das cinco notas.
Bubble Sort Algorithm
*/

#include <stdio.h>

int main(){
    float nota1, nota2, nota3, nota4, nota5, tmp, soma;
    scanf("%f %f %f %f %f", &nota1, &nota2, &nota3, &nota4, &nota5);
    float arrayNotas[5] = {nota1, nota2, nota3, nota4, nota5};

    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5 - i - 1; j++ ){
            if(arrayNotas[j] > arrayNotas[j+1]){
                tmp = arrayNotas[j];
                arrayNotas[j] = arrayNotas[j+1];
                arrayNotas[j+1] = tmp; 
            }
        }
    }
    for (int i = 0; i < 5; i++){
        printf("%.1f\n", arrayNotas[i]);
    }
    soma = arrayNotas[1] + arrayNotas[2] + arrayNotas[3];

    printf("%.1f\n", soma); 
}