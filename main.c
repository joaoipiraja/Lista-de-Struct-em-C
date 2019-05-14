//
//  main.c
//  Lista de Structs
//
//  Created by João Victor Ipirajá de Alencar on 13/05/19.
//  Copyright © 2019 Jipiraja. All rights reserved.

//Questão
//2. Implemente um programa que leia o nome, a idade e o enderec ̧o de uma pessoa e armazene os dados em uma estrutura.

#include <stdio.h>
#include<String.h>
#include <stdlib.h>

//Questão
//2. Implemente um programa que leia o nome, a idade e o enderec ̧o de uma pessoa e armazene os dados em uma estrutura.



void Q2(){
    
    printf("Resolução da questão 2\n");
    
    struct pessoa{
        
        char nome [30];
        int idade;
        char endereco[30];
        
    };
    
    struct pessoa usr1;
    
    printf("Insira seu nome: ");
    scanf("%[^\n]s",&usr1.nome);
    
    
    printf("Insira sua idade: ");
    scanf("%d",&usr1.idade);
    
    getchar();
    
    printf("Insira seu endereço: ");
    scanf("%[^\n]s ",&usr1.endereco);
    
    printf("\n%s | %d anos | %s\n",usr1.nome,usr1.idade,usr1.endereco);

    
    
    

}



struct aluno{
    char matricula[15];
    char nome[30];
    float n1;
    float n2;
    float n3;
};

float mediaGeral(struct aluno al[],int numVetor){
    int n = 0;
    float soma = 0;
    
    for (int i = 0; i< numVetor; i++ ){
        soma += al[i].n1;
        soma += al[i].n2;
        soma += al[i].n3;
        n += 3;
        
    }
    
    return (soma/n);
}

float mediaAluno(struct aluno al){
    float soma = al.n1+al.n2+al.n3;
    return (soma)/3.0;
}

struct aluno NotaMaior (struct aluno al[], int numVetor){
    
    
    struct aluno aux1;
    float Maiorn1 = 0;
    
    for( int i = 0; i< numVetor; i++){
        if(al[i].n1 > Maiorn1){
            Maiorn1 = al[i].n1;
            aux1 = al[i];
        }
    }
    
    return aux1;

}

struct aluno MenorMedia(struct aluno al[], int numVetor){
    struct aluno alunoMenorMedia;
    float media = mediaGeral(al, numVetor);
    for (int a = 0 ; a < numVetor; a++){
        float mAluno = mediaAluno(al[a]);
        if (mAluno < media){
            media = mAluno;
            alunoMenorMedia =  al[a];
        }
    }
    return alunoMenorMedia;
}

struct aluno MaiorMedia(struct aluno al[], int numVetor){
    struct aluno alunoMaiorMedia;
    float media = mediaGeral(al, numVetor);

    
    for (int a = 0 ; a < numVetor; a++){
        float mAluno = mediaAluno(al[a]);
        if (mAluno > media){
            media = mAluno;
            alunoMaiorMedia = al[a];
        }
    }
    return alunoMaiorMedia;
}

void AprovadoOuReprovado(struct aluno al[] ,int numVetor){
    printf("\n");
    for (int i = 0; i< numVetor; i++){
        printf(" %s com média %.1f foi %s\n", al[i].nome, mediaAluno(al[i]),mediaAluno(al[i]) >= 6 ? "Aprovado(a)" : "Reprovado(a)");
    }
}

void Q4(){
    
    /* Crie uma estrutura representando os alunos de um determinado curso. A estrutura deve conter a matr ́ıcula do aluno, nome, nota da primeira prova, nota da segunda prova e nota da terceira prova.
     (a) Permita ao usua ́rio entrar com os dados de 5 alunos. Deu Certo
     (b) Encontre o aluno com maior nota da primeira prova.
     (c) Encontre o aluno com maior me ́dia geral.
     (d) Encontre o aluno com menor me ́dia geral
     (e) Para cada aluno diga se ele foi aprovado ou reprovado, considerando o valor 6 para aprovação*/
    
   
    struct aluno al[5];
    
    strcpy(al[0].matricula,"20152011060199");
    strcpy(al[0].nome,"Joao Victor");
    al[0].n1 = 9.5;
    al[0].n2 = 10;
    al[0].n3 = 6;
    
    strcpy(al[1].matricula,"20152011070199");
    strcpy(al[1].nome,"Nara");
    al[1].n1 = 5;
    al[1].n2 = 10;
    al[1].n3 = 3;
    
    strcpy(al[2].matricula,"20152011090199");
    strcpy(al[2].nome,"Roberto");
    al[2].n1 = 5;
    al[2].n2 = 10;
    al[2].n3 = 5;
    
    strcpy(al[3].matricula,"20153011060199");
    strcpy(al[3].nome,"Marta");
    al[3].n1 = 4;
    al[3].n2 = 10;
    al[3].n3 = 10;
    
    strcpy(al[4].matricula,"20152011160199");
    strcpy(al[4].nome,"Andre");
    al[4].n1 = 3;
    al[4].n2 = 2;
    al[4].n3 = 6;
    
    printf("Aluno com maior nota na N1 -> %s\n",NotaMaior(al, 5).nome);
    printf("Acima da média da turma -> %s\n",MaiorMedia(al, 5).nome);
    printf("Abaixo da média da turma -> %s\n",MenorMedia(al, 5).nome);
    AprovadoOuReprovado(al,5);
    
}


#define QTND 2

void Q10(){
   /* 10. Utilizando uma estrutura, fac ̧a um programa que permita a entrada de nome, enderec ̧o e telefone de pessoas e os imprima em ordem alfabética.*/
    
    struct pessoa{
        char nome [20];
        char endereco[30];
        char telefone[30];
    };
    
    struct pessoa p[QTND];
    char aux[20];
    int i,j;
    
    for (i = 0; i < QTND; i++) {
        printf("Nome: ");
        scanf("%[^\n]s", p[i].nome);
        getchar();
        printf("Endereço: ");
        scanf("%[^\n]s", p[i].endereco);
        getchar();
        printf("Telefone: ");
        scanf("%[^\n]s", p[i].telefone);
        getchar();
        printf("---------\n");
        
    }
    
    
    for (i = 1; i < QTND; i++) {
        for (j = 1; j < QTND ;j++) {
            if (strcmp(p[j - 1].nome, p[j].nome) > 0) {
                strcpy(aux, p[j - 1].nome);
                strcpy(p[j - 1].nome, p[j].nome);
                strcpy(p[j].nome, aux);
            }
        }
    }
    
 
    for (i = 0; i < QTND; i++){
        printf("%d| Nome: %s | Endereço: %s | Telefone: %s\n", i,p[i].nome,p[i].endereco,p[i].telefone);
    }
    
    
    
}


int main(int argc, const char * argv[]) {
    
    //Q2();
    //Q4();
    //Q10();

}
