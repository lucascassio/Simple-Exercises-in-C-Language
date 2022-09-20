#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() {
    
    float numa; 
    float numb; 
    float numc; 
    float delta;

    printf( " Resolução da Questão número 3 \n ");

    printf("insira o valor de a: \n");
    scanf("%f", &numa);
    printf("insira o valor de b: \n");
    scanf("%f", &numb);
    printf("insira o valor de c: \n");
    scanf("%f", &numc);
    
    delta = pow(numb,2) -(4*numa*numc);

    printf("Média dos valores = %f\n", (numa + numb + numc) / 3.0);
    printf("Média ponderada = %f\n", ((numa*3) + (numb*4) + (numc*5)) / 12);
    printf("Perimetro Do Círculo = %f\n", numa*2*3.14 );
    printf("Área do Circulo = %f\n", pow(numa,2)*3.14);
    printf("Área do Triângulo = %f\n", numb*numc/ 2);
    printf("Hipotenusa = %f\n", sqrt(pow(numb,2)+pow(numc,2)));
    printf("Primeira Raiz da Equação :%f       Segunda Raiz da Equação:%f ", (-numb+sqrt(delta))/(2*numa), (-numb-sqrt(delta))/(2*numa));


    return 0;
}