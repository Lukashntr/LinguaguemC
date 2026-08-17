#include <stdio.h>
 
int main() { // calculo de media de notas de um aluno


    // definindo valores as variaveis 
    double matricula;
    char nome[20];
    int idade;
    float NotaCiencias;
    float Notamatematica;
    float NotaPortugues;


    printf("digite sua matricula: "); // perguntando ao usuario a matricula
    scanf("%lf", &matricula); // scanf vai receber o valor digitado pelo usuario e armazenar na variavel matricula
    printf("Matricula: %.2f\n", matricula); // imprimindo o valor da variavel matricula

    printf("digite seu nome: "); // perguntando ao usuario o nome
    scanf("%s", &nome); // scanf vai receber o valor digitado pelo usuario e armazenar na variavel nome
    printf("Nome: %s\n", &nome); // imprimindo o valor da variavel nome
 
    printf("digite sua idade: "); // perguntando ao usuario a idade
    scanf("%d", &idade); // scanf vai receber o valor digitado pelo usuario e armazenar na variavel idade
    printf("Idade: %d anos\n", idade); // imprimindo o valor da variavel idade

    printf("digite sua nota em ciencias: "); // perguntando ao usuario a nota em ciencias
    scanf("%f", &NotaCiencias); // scanf vai receber o valor digitado pelo usuario e armazenar na variavel NotaCiencias
    printf("Nota em Ciencias: %.2f\n", NotaCiencias); // imprimindo o valor da variavel NotaCiencias

    printf("digite sua nota em matematica: "); // perguntando ao usuario a nota em matematica
    scanf("%f", &Notamatematica); // scanf vai receber o valor digitado pelo usuario e armazenar na variavel Notamatematica
    printf("Nota em Matematica: %.2f\n", Notamatematica); // imprimindo o valor da variavel Notamatematica

    printf("digite sua nota em portugues: "); // perguntando ao usuario a nota em portugues
    scanf("%f", &NotaPortugues); // scanf vai receber o valor digitado pelo usuario e armazenar na variavel NotaPortugues
    printf("Nota em Portugues: %.2f\n", NotaPortugues); // imprimindo o valor da variavel NotaPortugues

    float media = (NotaCiencias + Notamatematica + NotaPortugues) / 3; // calculando a media das notas
    printf("Media: %.2f\n", media); // imprimindo o valor da variavel media

    
    return 0; 
}