#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int parouimpar(int x){
    if(x%2 == 0){
        printf("O número é par\n");
}
    else{
        printf("O número é ímpar\n");   
}

}
float dentrooufora(float x, float y, float z){
    if(x>y && x<z){
        printf("O valor está dentro de y e z");
}
    else if(x<y || x>z){
        printf("O valor está fora de y e z");
}
}

int main(){
    int x,y,z;
    printf("Insira o valor de x:\n");
    scanf("%d", &x);
    printf("Insira o valor de y:\n");
    scanf("%d", &x);
    printf("Insira o valor de z:\n");
    scanf("%d", &x);
    
    return parouimpar(x),dentrooufora(x,y,z);
}