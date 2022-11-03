#include <stdio.h>
#include <math.h>
#include <stdlib.h>

float media(float* v){
    int n=0;
    float s=0;
    for(int i=0;i<15;i++){
        s=s+v[i];
        n++;
    }
    return (s/n);
}

float variancia(float* v, int n){
    float vr=0;
    for(int i=0;i<=n;i++){
        vr = vr + pow((v[i]-media(v)),2);
    }
    return (vr/n);
}

float maior(float* v, int n){
	int maior=0; 
	for (int i=0; i<=n; i++){
		if(v[i]>maior) {
            maior=v[i]; 
        }
	}
	return (maior);
}

float menor(float* v, int n){
    int menor=1000000;
    for (int i=0; i<=n; i++){
        if(v[i]<menor){
            menor=v[i];
        }
    }
    return (menor);
}

float produtoescalar(float* v, float* u, int n){
    int ps=0;
    for(int i=0; i<=n; i++){
        ps = ps + (v[i]*u[i]);
    }
    return (ps);
}

int main(){

    FILE* f1= fopen("naturais.txt", "r+t");

    if(f1==NULL){
        printf("ERRO! NÃO FOI POSSÍVEL ABRIR O ARQUIVO!\n");
        return (1);
    }

    int seq[1000]; 
    int i=0;
    fscanf(f1, "%d", &seq[i]);
    while(!feof(f1)){
        i++;
        fscanf(f1, "%d", &seq[i]);

    }
    fclose(f1);

	for(int j=0; j<=i; j++) {
    printf("%d", seq[j]);
	printf("\n");
    }

    FILE* f2= fopen("naturais.txt", "r+t");

    if(f2==NULL){
        printf("ERRO! NÃO FOI POSSÍVEL ABRIR O ARQUIVO!\n");
        return (1);
    }
     
    FILE* f3= fopen("naturais2.txt", "r+t");

    if(f3==NULL){
        printf("ERRO! NÃO FOI POSSÍVEL ABRIR O ARQUIVO!\n");
        return (1);
    }

    float seq2[1000];
    int i2=0;
    fscanf(f2, "%f" ,&seq2[i2]);
    while(!feof(f2)){
        i2++;
        fscanf(f2, "%f", &seq2[i2]);
    }

    float seq3[1000];
    int i3=0;
    fscanf(f3, "%f" ,&seq3[i3]);
    while(!feof(f3)){
        i3++;
        fscanf(f3, "%f", &seq3[i3]);
    }

    fclose(f2);
    fclose(f3);

    printf("a média entre todos os elementos do array é:%f\n", media(seq2));
    printf("a variância entre todos os elementos do array é:%f\n", variancia(seq2,i2));
    printf("o maior número armazenado no array é:%f\n", maior(seq2,i2));
    printf("o menor número armazenado no array é:%f\n", menor(seq2,i2));
    printf("o produto escalar dos dois array é:%f\n", produtoescalar(seq2, seq3, i3));
    
    return 0;
}