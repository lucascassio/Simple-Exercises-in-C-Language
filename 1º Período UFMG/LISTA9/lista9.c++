#include <stdio.h>
#include <stdbool.h>
#include <math.h>

//Parte Número 1 - PONTOS - INÍCIO
    struct ponto {
        float x;
        float y;
        float distancia(ponto& p);
        void atribuir(float a, float b);
};
    void ponto::atribuir(float a, float b){
        this->x = a;
        this->y = b;
}
    float ponto::distancia(ponto& p){
        return(sqrt(((this->x - p.x, 2)*(this->x - p.x, 2)) + ((this->y - p.y)*(this->y - p.y))));
}
//Parte Número 1 - PONTOS - FIM

//Parte Número 2 - TRIÂNGULOS - INÍCIO
    struct Triangulo {
        ponto p1,p2,p3;
        float perimetro();
        float area();
        bool equilatero();
        bool semelhante(Triangulo& t);
        float altura, base;
};
    float Triangulo::perimetro(){
        return(this->p1.distancia(this->p2) + this->p2.distancia(this->p3) + this->p3.distancia(this->p1));
}
    float Triangulo::area(){
        return((this->altura * this->base)/2);
}
    bool Triangulo::equilatero(){
        if(this->p1.distancia(this->p2)==this->p2.distancia(this->p3) == this->p3.distancia(this->p1)){
            return(true);
        }
        else{
            return(false);
        }
}
    bool Triangulo::semelhante(Triangulo& t){
}
//Parte Número 2 - TRIÂNGULOS - FIM

//Parte Número 3 - RETÂNGULOS - INÍCIO
    struct Retangulo{
        ponto p1,p2,p3,p4;
        
        float perimetro();
        float area();
        bool quadrado();
};

    float Retangulo::perimetro(){
        return(this->p1.distancia(this->p2) + this->p2.distancia(this->p3) + this->p3.distancia(this->p4) + this->p4.distancia(this->p1));
}

    float Retangulo::area(){
        return(this->p1.distancia(this->p2) * this->p2.distancia(this->p3));
}

    bool Retangulo::quadrado(){
    if((this->p1.distancia(this->p2) == this->p2.distancia(this->p3))){
        return (true);
    }
    else{
        return (false);
    }
}
//Parte Número 3 - RETÂNGULOS - FIM


//Parte Número 4 CIRCUNFÊRENCIA - INÍCIO
    struct Circunferencia{
        ponto centro;
        float raio;
        float perimetro();
        float area();
        bool contem(ponto& p);
        bool contem(Triangulo& t);
        bool contem(Retangulo& r);
        bool pertence(ponto& plo);
        bool circunscrita(Triangulo& t);
        bool circunscrita(Retangulo& r);
};

    float Circunferencia::perimetro(){
        return(2*3.14*this->raio);
}

    float Circunferencia::area(){
        return(pow((3.14*this->raio),2)); 
}

    bool Circunferencia::contem(ponto& p){
        if((this->centro.distancia(p))<=raio){
            return(true);    
    }
        else{
            return(false);
    }
}

    bool Circunferencia::contem(Triangulo& t){
        if((this->contem(t.p1)) && (this->contem(t.p2)) && (this->contem(t.p3))){
            return(true);
    }
        else{
            return(false);
    }
}

    bool Circunferencia::contem(Retangulo& r){
        if((this->contem(r.p1)) && (this->contem(r.p2)) && (this->contem(r.p3)) && (this->contem(r.p4))){
            return(true);
    }
        else{
            return(false);
    }
}

    bool Circunferencia::pertence(ponto& p){
        if(this->centro.distancia(p) == raio){
            return(true);
    }
        else{
            return(false);
    }
}

    bool Circunferencia::circunscrita(Triangulo& t){
        if((this->pertence(t.p1)) && (this->pertence(t.p2)) && (this->pertence(t.p3))){
            return(true);
    }
        else{
            return(false);
    }
}

    bool Circunferencia::circunscrita(Retangulo& r){
        if((this->pertence(r.p1)) && (this->pertence(r.p2)) && (this->pertence(r.p3)) && (this->pertence(r.p4))){
            return(true);
    }
        else{
            return(false);
    }
}
//Parte Número 4 CIRCUNFÊRENCIA - FIM

//AVISOS!
//COMO SÓ FOI PEDIDO A IMPLEMENTAÇÃO DAS ESTRUTURAS NA LISTA 10, NÃO FOI REALIZADO POR MIM O "INT MAIN()", PARA ATRIBUIR VALORES AS ESTRUTURAS E IMPRIMI-LAS, POR CONSEQUÊNCIA, NA TELA!
//O CÓDIGO FOI ENVIADO EM C++, POIS EM C ESTAVA DANDO MUITOS BUGS!