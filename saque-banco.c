#include <stdio.h>

int main(){
    int dinheiro, nota50, nota20, nota10, nota5, nota1;
    scanf("%i", &dinheiro);
    
    nota50 = dinheiro/50;
    dinheiro = dinheiro - (nota50 * 50);

    nota20 = dinheiro/20;
    dinheiro = dinheiro - (nota20 * 20);

    nota10 = dinheiro/10;
    dinheiro = dinheiro - (nota10 * 10);

    nota5 = dinheiro/5;
    dinheiro = dinheiro - (nota5 * 5);

    nota1 = dinheiro;

    printf("Notas de 50: %i\n", nota50);
    printf("Notas de 20: %i\n", nota20);
    printf("Notas de 10: %i\n", nota10);
    printf("Notas de 5: %i\n", nota5);
    printf("Notas de 1: %i\n", nota1);

    return 0;
}