#include <stdio.h>
#include <stdlib.h>
#include <math.h>
float max (float a, float b, float c){
        if(a>b && b>a){
            printf("O maior número é %f\n", a);
        }
        else if(b>a && b>c){
            printf("O maior número é %f\n", b);
        }
        else if(c>a && c>b){
            printf("O maior número é %f\n", c);
        }
        else {
            printf("Todos os números são iguais");
        }
}
float min (float a, float b, float c){
        if(a<b && b<a){
            printf("O menor número é %f\n", a);
        }
        else if(b<a && b<c){
            printf("O menor número é %f\n", b);
        }
        else if(c<a && c<b){
            printf("O menor número é %f\n", c);
        }
}
int main() {
    float a,b,c;

    printf("Insira o valor de a:");
    scanf("%f",&a);
    printf("Insira o valor de b:");
    scanf("%f",&b);
    printf("Insira o valor de c:");
    scanf("%f",&c);
    
    return max(a,b,c),min(a,b,c);
}