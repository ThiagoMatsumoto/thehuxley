/*
Algoritmo de Euclides - podemos usar o resto da divisão de num1/num2 como entrada para novas divisões
até que a divisão de resto igual a zero. Através de uma função recursiva (função chamando a própria função)
podemos executar as operações de resto e quando o segundo elemento (menor numero) chegar a 0, retornamos
o primeiro elemento que será o MDC.  
*/
#include <stdio.h>
/*Algoritmo*/
int mdc_algorithm(int x, int y){
    if (y == 0) {
        return x;
    } else if (x >= y && y > 0) {
        return mdc_algorithm(y, (x % y));
    }
}
/*Chamada principal*/
int main(){
    int num1, num2, resto, var_apoio;
    scanf("%i", &num1);
    scanf("%i", &num2);
    if (num1 < num2){
        var_apoio = num1;
        num1 = num2;
        num2 = var_apoio;
    }
    
    printf("%i\n",mdc_algorithm(num1,num2));
    
    return 0;
}