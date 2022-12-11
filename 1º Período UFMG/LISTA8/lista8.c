#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

float media_matriz(int n, float mat[][100]){
    float s=0;
    int numeros = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
        s = s + mat[i][j];      
        numeros++;
        }
    }
    return (s/numeros);
}
void identidade(int n, float A[][100]){
    float a = 1;
    float b = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i==j){
                printf("%f ", a);
            }
            else{
                printf("%f ", b);
            }
    }
    printf("\n");
}
    printf("\n");
}
void transposta (int n, float A[][100], float T[][100]){
    	for(int i=0; i<n; i++)
	{
		for (int j=0; j<n; j++)
		{
				T[i][j] = A[j][i];
		}
	}
}

bool simetrica(int n, float A[][100]){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(A[i][j]==A[j][i]){
                return (true);
            }
    }
    return (false);
}
}
void soma_matriz(int n, float A[][100], float B[][100], float S[][100]){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            S[i][j] = A[i][j] + B[i][j];
        }
    }
}
void mult_matriz(int n, float A[][100], float B[][100], float P[][100]){
    int soma=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            for(int k=0;k<n;k++){
                soma = soma + A[j][i]*B[i][j];
            }
            P[i][j] = soma;
        }
        printf("\n");
    }
}


int main(){
    
    //EXERCÍCIO 1
    FILE* f1 = fopen("matriz.txt", "r+t");
    if(f1==NULL){
        printf("ERRO! NÃO FOI POSSÍVEL ABRIR O ARQUIVO!");
        return (1);
    }
    
    float mat[100][100];
    int linhas, colunas;
    
    fscanf(f1,"%d %d", &linhas, &colunas);
    for(int i=0;i<linhas;i++){
        for(int j=0;j<colunas;j++){
        fscanf(f1, "%f", &mat[i][j]);
        }
    }
    
    fclose(f1);
    
    printf("A matriz é:\n");
	for(int i=0; i<linhas; i++) {
		for(int j=0; j<colunas; j++){
			printf("%f ", mat[i][j]);
		}
			printf("\n");
	}
    printf("\n");
    
    //EXERCÍCIO 2
    printf("a média da matriz é:%f\n\n", media_matriz(linhas, mat));
    
    //EXERCÍCIO 3
    printf("A matriz identidade é:\n");
    identidade(linhas,mat);
    
    //EXERCÍCIO 4
	FILE* f2 = fopen("matriz.txt", "r+t");
    if(f2==NULL){
        printf("ERRO! NÃO FOI POSSÍVEL ABRIR O ARQUIVO!");
        return (1);
    }
    
    fscanf(f2,"%d %d", &linhas, &colunas);
	float transp [100][100];
    for(int i=0;i<linhas;i++){
        for(int j=0;j<colunas;j++){
        fscanf(f2, "%f", &transp[i][j]);
        }
    }
    transposta (linhas, mat, transp);
    printf("A matriz transposta é:\n");
	for(int i=0; i<linhas; i++) {
		for(int j=0; j<colunas; j++){
		    printf("%f ", transp[i][j]);
			}
			printf("\n");
	}
	printf("\n");
    
    //EXERCÍCIO 5
    printf("a matriz é ou não é simétrica?(true=simétrica false=não é simétrica):%d\n\n", simetrica(linhas, mat));


    //EXERCÍCIO 6
    FILE* f3 = fopen("matriz2.txt", "r+t");
    if(f3==NULL){
        printf("ERRO! NÃO FOI POSSÍVEL ABRIR O ARQUIVO!");
        return (1);
    }
    
    fscanf(f3,"%d %d", &linhas, &colunas);
	float mat2 [100][100];
    for(int i=0;i<linhas;i++){
        for(int j=0;j<colunas;j++){
        fscanf(f3, "%f", &mat2[i][j]);
        }
    }   
    float matS[100][100];
    soma_matriz(linhas,mat,mat2,matS);
    printf("A soma das matrizes é:\n");
    for(int i=0; i<linhas; i++) {
		for(int j=0; j<colunas; j++){
		    printf("%f ", matS[i][j]);
			}
			printf("\n");
	}
	printf("\n");

    //EXERCÍCIO 7
    float matP[100][100];
    mult_matriz(linhas,mat,mat2,matP);
    printf("A multiplicação das matrizes é:\n");
    for(int i=0; i<linhas; i++) {
	for(int j=0; j<colunas; j++){
	    printf("%f ", matP[i][j]);
        }
	printf("\n");
	}


}