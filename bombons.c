#include <stdio.h>

int main(){
    int avela, caramelo, passas, preco_avela, preco_caramelo, preco_passas;
    float total;
    scanf("%i", &avela);
    scanf("%i", &caramelo);
    scanf("%i", &passas);
    scanf("%i", &preco_avela);
    scanf("%i", &preco_caramelo);
    scanf("%i", &preco_passas);

    total = (avela*preco_avela) + (caramelo*preco_caramelo) + (passas*preco_passas);

    printf("Valor: R$%.2f\n", total);

    return 0;
}