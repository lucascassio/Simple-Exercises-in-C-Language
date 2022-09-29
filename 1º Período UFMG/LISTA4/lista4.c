#include <stdio.h>
#include <stdlib.h>
#include <math.h>
    
int fatorial(int n){
    if(n==0){
        return 1;
    }
    else{
        return n*fatorial(n-1);
    }
}
int mdc(int a, int b){
    if(a%b==0){
        return b;
    }
    else{
        return mdc(b, a%b);
    }
}

int mdc3(int a, int b, int c){
    return mdc(mdc(a,b), c);
}

fibonacci(int n){
    if(n==1 || n==2){
        return 1;
    }
    else{
        return fibonacci(n-1) + fibonacci(n-2);
    }
}

int primo(int x, int n){
    if(n ==  1){
        printf("E) O numero %d é primo\n", x);
    } else if(x == 1){
        printf("E) O numero %d não é primo\n", x);
    } else if(x % n == 0){
        printf("E) O numero %d não é primo\n", x);
    } else{
        return primo(x, n-1);
    }
}
int decrescente (int x){
    if (x == 0) {
        printf("%d\n", x);
    } else {
        printf("%d ", x); 
        return decrescente(x-1);
    }
}

int resto(int a, int b){
    printf("G) O resto da divisão entre %d e %d é: %d\n", a, b, a%b);
}

int form(int n){
    if (n <= 1) return n;
    else return (n*n) + form(n-1);
}

int mmc(int a, int b){
    if (a%b==0){
    printf("I) O MMC é:%d\n", a);
    } else if (b%a==0){
        printf("I) O MMC é:%d\n", b);
    } else if (a>b){
        return mmc(a*2, b);
    } else {
        return mmc(a, b*2);
    }
}

int division(int a, int b){
    return(a/b);
}

float raiz(float s, float chute){
    if (chute * chute >= s-0.001 && chute*chute <= s+0.001){
        return chute;
    } else if(chute* chute > s){
        return raiz(s, chute*0.5);
    } else if(chute * chute < s){
        return raiz(s, chute*1.5);
    }
}

int dig(int n, int soma){
    int digito;
    if (n <= 0) {
        return soma;
    } else{
        digito = n % 10;
        soma = soma + digito;
        return dig(n/10, soma);
    } 
}

int potencia(int k, int n){
    if (n==0) return 1;
    return (k * potencia(k, n-1));
}

int crescente(int x, int n){
    if (n == x) {
        printf("%d\n", x);
    } else {
        printf("%d ", n); 
        return crescente(x, n+1);
    }
}


int main (){
    int n,a,b,c,x,k;
    float s;
    
    printf("Digite um número inteiro:");
    scanf("%d",&n);
    printf("A) O fatorial de %d é:%d\n\n",n ,fatorial(n));
    
    printf("Insira um número:");
    scanf("%d", &a);
    printf("Insira um número:");
    scanf("%d", &b);
    printf("Insira um número:");
    scanf("%d", &c);
    printf("B) O MDC entre %d e %d é:%d\n", a, b, mdc(a,b));
    printf("C) O MDC de %d, %d e %d é: %d\n", a, b, c, mdc3(a,b,c));
    printf("D) O número %d na sequencia fibonacci é:%d\n\n", n, fibonacci(n));
    
    printf("Digite um número:");
    scanf("%d", &x);
    primo(x, x-1);
 
    printf("F) a sequencia descrescente de %d é:", x);
    decrescente(x); 
    
    resto(a,b);
    
    printf("H) O somatório de i*i até %d é:%d\n", n, form(n));
    
    mmc(a, b);

    printf("J) A divisão entre %d e %d é: %d\n\n", a, b, division(a,b));

    printf("Digite um número:");
    scanf("%f", &s);
    
    printf("K) A raiz de %f é: %f\n", s, raiz(s, s*0.5));
    
    printf("L) A Soma dos dígitos de %d:%d\n\n", n, dig(n, 0));
    
    printf("Digite um número:");
    scanf("%d", &k);
    
    printf("M) %d elevado por %d é: %d\n", k, n, potencia(k, n));
    
    printf("N) O crescente de 0 até %d é: ", x);
    crescente(x, 0);

    return 0;
}