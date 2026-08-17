#include <stdio.h>

int main(){

    // o tipo de dado da variavel vem sempre antes do nome da variavel 

    int idade; // int é um tipo de dado para variavel armazenar numeros inteiros
    int quantidade; // int é um tipo de dado para variavel armazenar numeros inteiros
    float altura; // float é um tipo de dado para variavel armazenar numeros fracionados
    double peso; // double é um tipo de dado para variavel armazenar numeros fracionados em maiores quantidades 
    char letra; // char é um tipo de dado para variavel armazenar 1 unico caracterie
    char nome[20];  // char é um tipo de dado para variavel armazenar caracteries contudo com [] voce consegue numerar a qtd de caracteries


    idade = 25; // armazenando o valor a variavel idade
    quantidade = 1; // armazenando o valor a variavel quantidade
    altura = 1.70; // armazenando o valor a variavel altura
    peso = 90.3; // armazenando o valor a variavel peso
    letra = 'M'; // armazenando o uma letra a variavel letra

    sprintf(nome, "Miguel Lukas");    //sprintf() copia o texto para dentro da variavel nome, o texto precisa estar entre aspas duplas
    

    return 0;


}