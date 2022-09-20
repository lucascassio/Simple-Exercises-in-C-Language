#include <stdio.h>
#include <stdlib.h>
#include <math.h>
    
    
int main() {

    float numa; 
    float numb; 
    float numc; 
    float numd;

    printf( " Resolução da Questão número 2\n\n ");
    printf("insira o valor de a:\n"); 
    scanf("%f", &numa); 
    printf("insira o valor de b:\n"); 
    scanf("%f", &numb); 
    printf("insira o valor de c:\n"); 
    scanf("%f", &numc); 
    printf("insira o valor de d:\n"); 
    scanf("%f", &numd); 
    printf("2)a= %f\n", numa+numb);
    printf("b= %f\n", numa/numc);
    printf("c= %f\n", pow(numa,2));
    printf("d= %f\n", numb * numc);
    printf("e= %f\n", numa * numb - numc);
    printf("f= %f\n", numa + numb * numc);
    printf("g= %f\n", (numa + numb) * numc);
    printf("h= %f\n", sin(numa));
    printf("i= %f\n", sqrt(numb));
    printf("j= %f\n", numa + numb + numc);
    printf("k= %f\n", numa * numb * numc);
    printf("l= %f\n", (numa + numb + numc) / numd);
    printf("m= %f\n", (numa + numb) * (numa - numd));
    printf("n= %f\n", (numb / numc) + (numa * numd));
    printf("o= %f\n", sin(numb) + cos(numc));
    printf("p= %f\n", log(numa) - log (numc));
    printf("q= %f\n", log(numa) + (log(numb) * log(numd) - cos(log(numc))));
    printf("r= %f\n", (numb + numa)/numc - (numd + numa));
    printf("s= %f\n\n", (cos(numd) + sin(numc)) * (cos(numb) - sin(numa)));   


    return 0; 
}
    