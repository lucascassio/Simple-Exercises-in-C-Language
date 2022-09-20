#include <stdio.h>
#include <stdlib.h>
#include <math.h>

    int bissexto(int a){
        if(a%4 && a%100 != 0){
            printf("O ano é bissexto");
        }
        else if(a%400 == 0){
            printf("O ano é bissexto");
        }
        else {
            printf("O ano não é bissexto");
        }
}

int main(){
    int a;
    printf("Digite o ano:\n");
    scanf("%d", &a);
    
    return bissexto(a);
}