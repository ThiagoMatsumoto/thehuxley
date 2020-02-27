#include <stdio.h>

int main(){
    int laranja,duzia;
    float preco = 8.35, total;
    scanf("%i", &laranja);

    duzia = laranja/12;
    total = (laranja*preco)/12;
    
    printf("%i\n", duzia);
    printf("%.2f\n", total);

    return 0;
}