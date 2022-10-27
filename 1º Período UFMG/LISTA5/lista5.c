#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int fatorial(int n){
    int i;
    int fat=1;
    for(i=n;i>=1;i--){
    fat = fat * i;
    }
    return fat;
}

int mdc(int a, int b){
    int i = 1;
    int i2 = 1;
    while (( i<= a && i <=b)){
        if ((a%i==0)&&(b%i==0)){
            i2 = i;
        } i++;
    }
    return i2;
}

int mdc3(int a, int b, int c){
    return mdc(mdc(a, b), c);
}

int fibonacci(int n){
    int f1 = 0, soma = 1, fn;
    if(n<=1) return 1;

    for(int i = 0; i<n-1; i++){
        fn = f1 + soma;
        f1 = soma;
        soma = fn;
    }

    return soma;
}

int primo(int x){
    int i;
    
    if(x<=1){
        printf("Não é primo!\n");
    }else{
        for(i=2; i<x; i++){
            if(x%i==0){
                printf("Não é primo!\n");
                break;
            }
        }
    }
            if(i==x){
                printf("É primo!\n");
            }
}

int decrescente (int x){
    int i;
    for(i=x;i>=0;i--){
        printf("%d\n", i);
    }
}

int resto(int a, int b){
    if(a%b==0){
    return 0;
    }
    while(a-b>=1){
        a = a - b;
    }
    return a;
}

int form(int n){
    int i;
    int result;
    for(i=1;i<=n;i++){
        result = result + i*i;
    }
    return result;
}

int mmc(int a, int b){
    return((a*b)/mdc(a,b));
}

int divisao(int a, int b){
    return a/b;
}

float raiz(float s, float chute){
        while(chute*chute >= s+0.001 || chute*chute <= s-0.001){
        if (chute * chute > s) {
            chute = chute * 0.5;
        } else if(chute * chute < s){
            chute = chute * 1.5;
        }
    }
    return chute;
}
    

int dig(int n){
    int dig;
    int soma = 0;
    for (int num = n; num > 0; num = num/10){
        dig = num % 10;
        soma += dig;
    }
    return soma;
}



int potencia(int k, int n){
    int i;
    int exp = k;
    for(i=1;i<n;i++){
        exp = k * exp;
    }
    return exp;
}

int crescente(int x){
    int i;
    for(i=0;i<=x;i++){
        printf("%d\n", i);
    }
}



int main() {
    int n,a,b,c,x,k;
    float s;

    printf("Digite um número inteiro:");
    scanf("%d", &n);
    printf("Digite um valor para A:");
    scanf("%d", &a);
    printf("Digite um valor para B:");
    scanf("%d", &b);
    printf("Digite um valor para C:");
    scanf("%d", &c);
    
    
    printf("A) O fatorial de %d é:%d\n", n, fatorial(n));
    
    printf("B) O MDC de %d e %d é:%d\n",a,b,mdc(a,b));

    printf("C) O MDC de %d, %d e %d é %d\n",a,b,c,mdc3(a,b,c));
    
    printf("D) O termo %d da sequencia fibonacci é:%d\n",n,fibonacci(n));
    
    printf("E) Digite mais um número inteiro:");
    scanf("%d", &x);
    primo(x);
    
    printf("F) O decrescente de %d é:",x);
    decrescente(x);

    printf("G) O resto de %d por %d é:%d\n",a,b,resto(a,b));
    
    printf("H) O somatório de i*i até n é:%d\n",form(n));
    
    printf("I) O MMC de %d e %d é:%d\n",a,b,mmc(a,b));
    mmc(a,b);
    
    printf("J) A divisão inteira de %d por %d é:%d\n", a, b,divisao(a,b));
    
    printf("Insira um número no qual quer calcular a raiz quadrada:");
    scanf("%f", &s);
    printf("K) A raiz quadrada de %f é:%f\n",s, raiz(s, s/2));

    printf("L) A soma dos dígitos de %d é:%d\n",n, dig(n));
    
    printf("Insira os valores de base e expoente de um número:");
    scanf("%d %d", &k, &n);
    printf("M)potencia de %d por %d é:%d\n",k,n,potencia(k,n));

    printf("N) a crescente de %d é:",x);
    crescente(x);
    
    return 0;
    
}