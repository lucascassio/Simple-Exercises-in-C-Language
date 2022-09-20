#include <stdio.h>
#include <stdlib.h>
#include <math.h>
    float media(float a, float b, float c){
        return (a+b+c)/3.0;
    }
    float mediaponderada(float a, float b, float c){
        return (a*3)+(b*4)+(c*5)/12;
    }
    float perimetrodocirculo(float a){
        return a*2*3.14;
    }
    float areadocirculo(float a){
        return pow(a,2)*3.14;
    }
    float areadotriangulo(float b, float c){
        return (b*c)/ 2;
    }
    float areadacaixa(float a,float b,float c){
    return (2*a*b)+(2*a*c)+(2*b*c);
   }

    float volumedacaixa(float a,float b,float c){
    return a*b*c;
   }

    float areadocilindro(float r, float h){
    return 2*3.14*(r*(r+h));
   }

    float volumedocilindro(float r, float h){
    return 3.14*pow(r,2)*h;
   }

    float  hipotenusa(float a,float b,float c){
    return sqrt(pow(b,2)+pow(c,2));
   }

    float  raiz1(float a,float b,float c){
     float delta = pow(b,2)-(4*a*c);
    return (-b-sqrt(delta))/(2*a);
   }

    float  raiz2(float a,float b,float c){
     float delta = pow(b,2)-(4*a*c);
    return (-b+sqrt(delta))/(2*a);
   }

int main() {
    float a,b,c,r,h,delta;

    printf("digite o valor de a:\n");
    scanf("%f", &a);
    printf("digite o valor de b:\n");
    scanf("%f", &b);
    printf("digite o valor de c:\n");
    scanf("%f", &c);
    printf("digite o valor do raio:\n");
    scanf("%f", &r);
    printf("digite o valor da altura:\n");
    scanf("%f", &h);

    printf("Media:%f\n", media(a,b,c));
    printf("Média Ponderada:%f\n", mediaponderada(a,b,c));
    printf("Perimetro Do Círculo:%f\n", perimetrodocirculo(a));
    printf("Área do triângulo:%f\n", areadotriangulo(b,c));
    printf("Área da caixa:%f\n", areadacaixa(a,b,c));
    printf("Volume da caixa:%f\n", volumedacaixa(a,b,c));
    printf("Área do cilindro:%f\n", areadocilindro(r,h));
    printf("Volume do cilindro:%f\n", volumedocilindro(r,h) );
    printf("Hipotenusa:%f\n", hipotenusa(a,b,c));
    printf("Raiz 1:%f\n raiz 2:%f\n", raiz1(a,b,c), raiz2(a,b,c)); 
}