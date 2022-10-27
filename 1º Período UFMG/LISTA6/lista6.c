#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int nprimo (int x){
    int i;
    for(i=2; i<x; i++){
        if (x%i==0){
            return (0);
        }
    }
    return (1);
}

float funcao(float z){
    return((z*z) - (5*z) + 1);
}

float funcao2(float a,float b,float c, float d, float y){
    return ((a*(y*y*y)) + (b*(y*y)) + (c*y)) + d;
}

int main (){
    
    //EXERCÍCIO 1
    
    int x;

    FILE* f1 = fopen("primo.txt", "w+t");


    if (f1==NULL){
        printf("ERRO DURANTE ABERTURA DO ARQUIVO 1!\n");
        return(1);
    }
    

    printf("\n Digite a quantidade de números primos desejada:");
    scanf("%d", &x);
    int np=0;
    for(int i = 2; np<x; i++){
        if(nprimo(i)){
            fprintf(f1, "%d\n", i);
            np++;
        }
    }

    fclose(f1);

    //EXERCÍCIO 2

    int n;
    FILE* f2 = fopen("ehprimoounao.txt", "w+t");
    FILE* naturais1 = fopen("naturais.txt", "r+t");

    if(f2==NULL){
        printf("ERRO DURANTE ABERTURA DO ARQUIVO 2!\n");
        return(1);
    }

    fscanf(naturais1, "%d", &n);
    while(!feof(naturais1)){
        fprintf(f2, "%d %d\n", n, nprimo(n));
        fscanf(naturais1, "%d", &n);
    }

    fclose(f2);
    
    //EXERCÍCIO 3

    int n2;
    
    FILE* f4 = fopen("primos.txt", "w+t");
    FILE* f5 = fopen("outros.txt", "w+t");
    FILE* naturais2 = fopen("naturais.txt", "r+t");
    
    if(f4==NULL){
        printf("ERRO DURANTE ABERTURA DO ARQUIVO 4!\n");
        return (1);
    }
    if(f5==NULL){
        printf("ERRO DURANTE A ABERTURA DO ARQUIVO 5!\n");
        return (1);
    }
    
    fscanf(naturais2,"%d",&n2);
    while(!feof(naturais2)){
        if(nprimo(n2)){
        fprintf(f4,"%d\n",n2);
        }
        else{
        fprintf(f5,"%d\n",n2);
        }
        fscanf(naturais2,"%d",&n2);
    }
    
    fclose(f4);
    fclose(f5);
    
    //EXERCÍCIO 4
    
    float z;
    
    FILE* reais = fopen("reais.txt", "r+t");
    FILE* f7 = fopen("f(x) parte 1", "w+t");
    
    if(reais==NULL){
        printf("ERRO DURANTE ABERTURA DO ARQUIVO 6!\n");
        return (1);
    }
    if(f7==NULL){
        printf("ERRO DURANTE A ABERTURA DO ARQUIVO 7!\n");
        return (1);
    }
    
    fscanf(reais,"%f", &z);
    while(!feof(reais)){
        fprintf(f7 ,"%f\n", funcao(z));
        fscanf(reais, "%f", &z);
    }
    
    //EXERCÍCIO 5
    
    float a,b,c,d,y;
    printf("Digite um valor pra a:");
    scanf("%f",&a);
    printf("Digite um valor pra b:");
    scanf("%f",&b);
    printf("Digite um valor pra c:");
    scanf("%f",&c);
    printf("Digite um valor pra d:");
    scanf("%f",&d);
    
    FILE* reais2 = fopen("reais.txt", "r+t");
    FILE* f9 = fopen("f(x) parte 2", "w+t");
    
    if(reais==NULL){
    printf("ERRO DURANTE ABERTURA DO ARQUIVO 8!\n");
    return (1);
    }
    if(f9==NULL){
    printf("ERRO DURANTE A ABERTURA DO ARQUIVO 9!\n");
    return (1);
    }
    
    fscanf(reais2,"%f",&y);
    while(!feof(reais2)){
        fprintf(f9,"%f\n",(funcao2(a,b,c,d,y)));
        fscanf(reais2,"%f",&y);
    }
    
    return 0;   
}