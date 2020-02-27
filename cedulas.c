/*
cédulas disponíveis 100, 50, 20, 10, 5, 2 e 1

max 1.000.000

Lógica: 
dinheiro = 576 reais
notas100 = 577/100 = 5,77 => 5  # ele não pega 5,76 só o inteiro!
    dinheiro = 576 - (5 * 100) => 76
dinheiro = 76 reais
notas50 = 76/50 = 1,52 => 1
    dinheiro = 76 - (1*50) => 26
...
*/

#include <stdio.h>

int main(){
    int dinheiro, nota100, nota50, nota20, nota10, nota5, nota2, nota1;
    scanf("%i", &dinheiro);
    printf("%i\n", dinheiro);

    nota100 = dinheiro/100;
    dinheiro = dinheiro - (nota100 * 100);
    nota50 = dinheiro/50;
    dinheiro = dinheiro - (nota50 * 50);
    nota20 = dinheiro/20;
    dinheiro = dinheiro - (nota20 * 20);
    nota10 = dinheiro/10;
    dinheiro = dinheiro - (nota10 * 10);
    nota5 = dinheiro/5;
    dinheiro = dinheiro - (nota5 * 5);
    nota2 = dinheiro/2;
    dinheiro = dinheiro - (nota2 * 2);
    nota1 = dinheiro;

    printf("%i nota(s) de R$ 100,00 \n", nota100);
    printf("%i nota(s) de R$ 50,00 \n", nota50);
    printf("%i nota(s) de R$ 20,00 \n", nota20);
    printf("%i nota(s) de R$ 10,00 \n", nota10);
    printf("%i nota(s) de R$ 5,00 \n", nota5);
    printf("%i nota(s) de R$ 2,00 \n", nota2);
    printf("%i nota(s) de R$ 1,00 \n", nota1);

    return 0;
}