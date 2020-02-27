#include <stdio.h>

int main(){
    float num1, num2, num3;
    scanf("%f%f%f", &num1,&num2,&num3);

    
    float triangulo = (num1*num3)/2;
    float circulo = 3.14159*num3*num3;
    float trapezio = ((num1 + num2)*num3)/2;
    float quadrado = num2*num2;
    float retangulo = num1*num2;

    printf("TRIANGULO: %.3f\n", triangulo);
    printf("CIRCULO: %.3f\n", circulo);
    printf("TRAPEZIO: %.3f\n", trapezio);
    printf("QUADRADO: %.3f\n", quadrado);
    printf("RETANGULO: %.3f\n", retangulo);
    return 0;
}