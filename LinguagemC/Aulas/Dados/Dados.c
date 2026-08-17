#include <stdio.h>
 
int main() {


    // definindo valores as variaveis 
    int idade;
    float altura;
    double saldoBancario;
    char inicial;
    char nome[20];
 
    printf("digite sua idade: "); // perguntando ao usuario a idade
    scanf("%d", &idade); // scanf vai receber o valor digitado pelo usuario e armazenar na variavel idade
    printf("Idade: %d anos\n", idade); // imprimindo o valor da variavel idade

    printf("digite sua altura: "); // perguntando ao usuario a altura
    scanf("%f", &altura); // scanf vai receber o valor digitado pelo usuario e armazenar na variavel altura
    printf("Altura: %.2f metros\n", altura); // imprimindo o valor da variavel altura

    printf("digite seu saldo bancario: "); // perguntando ao usuario o saldo bancario
    scanf("%lf", &saldoBancario); // scanf vai receber o valor digitado pelo usuario e armazenar na variavel saldoBancario
    printf("Saldo Bancario: %.2f reais\n", saldoBancario); // imprimindo o valor da variavel saldoBancario

    printf("digite a inicial do seu nome: "); // perguntando ao usuario a inicial do nome
    scanf(" %c", &inicial); // scanf vai receber o valor digitado pelo usuario e armazenar na variavel inicial
    printf("Inicial do Nome: %c\n", inicial); // imprimindo o valor da variavel inicial

    printf("digite seu nome: "); // perguntando ao usuario o nome
    scanf("%s", &nome); // scanf vai receber o valor digitado pelo usuario e armazenar na variavel nome
    printf("Nome: %s\n", &nome); // imprimindo o valor da variavel nome

 
    return 0; 
}