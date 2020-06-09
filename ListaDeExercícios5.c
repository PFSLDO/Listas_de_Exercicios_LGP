/* Lista de Exercícios 5 - Lógica de Programação
Autora: Pamela Fialho
Data: 09/06/2020 */

// Definindo as bibliotecas

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

// Função questão 1

int positivo(int n1) //Confere se n1 é positivo e retorna int
{
    int resultado1;

    if (n1 >= 0) {
        resultado1 = 0;
    }
    else if (n1 < 0) {
        resultado1 = 1;
    }
    return(resultado1); //Retorna para main o resultado
}

// Função questão 2

float maior(float n20, float n21) //Confere qual número é maior e retorna int
{
    float resultado2;

    if (n20 > n21) {
        resultado2 = n20;
    }
    if (n21 > n20) {
        resultado2 = n21;
    }
    if (n21 == n20) {
        resultado2 = 0;
    }
    return(resultado2); //Retorna para main o resultado
}

// Funções questão 3

float maior33(float n31, float n32, float n33) //Confere qual número é maior e retorna float
{
    float maior3;
    float menor3;

    if (n31 > n32) {//Comparar os dois primeiros números
        maior3 = n31;
    }
    else {
        maior3 = n32;
    }
    if (n33 > maior3) { //Comparar o resultado dos dois primeiros com o terceiro
        maior3 = n33;
    }
    if (n31 < n32) { //Comparar os dois primeiros números
        menor3 = n31;
    }
    else {
        menor3 = n32;
    }
    if (n33 < menor3) { //Comparar o resuldado dos dois primeiros com o terceiro
        menor3 = n33;
    }
    return(maior3); //Retorna para main o resultado
}

float menor33(float n31, float n32, float n33) //Confere qual número é menor e retorna float
{
    float maior3;
    float menor3;

    if (n31 > n32) {//Comparar os dois primeiros números
        maior3 = n31;
    }
    else {
        maior3 = n32;
    }
    if (n33 > maior3) { //Comparar o resultado dos dois primeiros com o terceiro
        maior3 = n33;
    }
    if (n31 < n32) { //Comparar os dois primeiros números
        menor3 = n31;
    }
    else {
        menor3 = n32;
    }
    if (n33 < menor3) { //Comparar o resuldado dos dois primeiros com o terceiro
        menor3 = n33;
    }
    return(menor3); //Retorna para main o resultado
}

float mediade3(float n31, float n32, float n33) //Calcula a média com todas as notas e retorna float
{
    float media3;
    
    media3 = ((n31 + n32 + n33)/3);

    return(media3); //Retorna para main o resultado
}

float mediade2(float n31, float n32, float n33) //Confere qual número é maior e retorna int
{
    float maior3;
    float menor3;
    float media2;

    if (n31 > n32) {//Comparar os dois primeiros números
        maior3 = n31;
    }
    else {
        maior3 = n32;
    }
    if (n33 > maior3) { //Comparar o resultado dos dois primeiros com o terceiro
        maior3 = n33;
    }
    if (n31 < n32) { //Comparar os dois primeiros números
        menor3 = n31;
    }
    else {
        menor3 = n32;
    }
    if (n33 < menor3) { //Comparar o resuldado dos dois primeiros com o terceiro
        menor3 = n33;
    }

    if (n31 == menor3) {
        media2 = ((n32 + n33)/2); //Média excluindo n31
    }
    if (n32 == menor3) {
        media2 = ((n31 + n33)/2); //Média excluindo n32
    }
    if (n33 == menor3) {
        media2 = ((n31 + n32)/2); //Média excluindo n33
    }

    return(media2); //Retorna para main o resultado
}

// Função questão 4

float conta(float n401, float n402, float n403) //Calcula o quadrado do primeiro mais a soma dos últimos e retorna float
{
    float resultado4;

    resultado4 = ((n401 * n401) + n402 + n403);

    return(resultado4); //Retorna para main o resultado
}

// Função questão 5

int perfeitos(float n52) //Calcula os números perfeitos e retorna int
{
    int resultado5, i5, j5, soma5;

    printf("Números perfeitos no intervalo inserido:\n");

    for (i5 = 1; i5 < n52; i5++) //Laço percorre até o numero digitado
    { 
        soma5 = 0; //Zera a soma para cada repetição
        for (j5 = 1; j5 < i5; j5++) {
        if (i5 % j5 == 0)  
        soma5 = soma5 + j5;
        }
        if (soma5 == i5) {
            printf("%d\n", i5);
        }
    }

    return(resultado5);
}

// Função questão 6

int vogal(char c66) //Verifica se é vogal e retorna int
{
    int resultado6 = 0;
    char letra6 = c66;
    
    if (letra6 == 'a' || letra6 == 'e' || letra6 == 'i' || letra6 == 'o' || letra6 == 'u' || letra6 == 'A' || letra6 == 'E' || letra6 == 'I' || letra6 == 'O' || letra6 == 'U') {
        resultado6 = 1; //Atribui 1 ao valor do retorno caso o caractere seja vogal
    }

    return(resultado6); //Retorna para main o resultado
}

// Função principal do Programa

int main()
{

    // Definindo as variáveis

    int opção;

    // Confere e valida a opção escolhida

    while (opção < 1 || opção > 6)
    {

        // Interface de menu

        printf("Escolha a questão da lista\n");
        printf("Opção 1 - Número positivo\n");
        printf("Opção 2 - Maior valor dentre dois\n");
        printf("Opção 3 - Média semestral legal\n");
        printf("Opção 4 - Quadrado do primeiro + soma dos dois últimos\n");
        printf("Opção 5 - Números perfeitos\n");
        printf("Opção 6 - Vogal ou não\n");

        // Lendo a opção

        scanf("%d", &opção);

        switch (opção)
        {

        default:
            printf("Opção inválida\n");

        case 1:
            printf("Opção 1 foi escolhida\n");

            float n11; //Definindo as variáveis
            int resultado1;

            printf("FORA BOZO\n");
            printf("Digite um número\n");
            scanf("%f", &n11); //Recebe o valor inserido

            resultado1 = positivo(n11); //Chama a função e recebe o retorno
            
            if (resultado1 == 0) {
                printf("O número inserido é positivo\n"); //Se o número inserido for maior ou igual a zero, mostra que é postivo
            }

            if (resultado1 == 1) {
                printf("O número inserido não é positivo\n"); //Se o número for menor que zero, mostra que não é positivo
            }
        break;
        case 2:
            printf("Opção 2 foi escolhida\n");

            float n22, n23; //Definindo as variáveis
            float resultado2;

            printf("FORA BOZO\n");
            printf("Digite o primeiro número\n");
            scanf("%f", &n22); //Recebe o primeiro número
            printf("Digite o segundo número\n");
            scanf("%f", &n23); //Recebe o segundo número

            resultado2 = maior(n22, n23); //Chama a função e recebe o retorno

            if (resultado2 != 0) {
                printf("O maior valor inserido foi: %f\n", resultado2); //Mostra o retorno da função, caso os números inseridos sejam diferenes
            }
            else {
                printf("Os números inseridos são iguais\n"); //Mostra que os números inseridos são iguais
            }
        break;
        case 3:
            printf("Opção 3 foi escolhida\n");

            float nota1, nota2, nota3, menor3, maior3, media2, media3; //Definindo as variáveis

            printf("FORA BOZO\n");
            printf("Insira a primeira nota\n");
            scanf("%f", &nota1); //Recebe a primeira nota
            printf("Insira a segunda nota\n");
            scanf("%f", &nota2); //Recebe a segunda nota
            printf("Insira a terceira nota\n");
            scanf("%f", &nota3); //Recebe a terceira nota

            menor3 = menor33(nota1, nota2, nota3); //Chama a função responsável por calcular o menor número dentre os inseridos
            printf("A nota mais baixa foi: %f\n", menor3); //Mostra o menos número inserido
            maior3 = maior33(nota1, nota2, nota3); //Chama a função responsável por calcular o maior número dentre os inseridos
            printf("A nota mais alta foi: %f\n", maior3); //Mostra o maior número inserido
            media3 = mediade3(nota1, nota2, nota3); //Chama a função responsável por calcular a média com as 3 notas
            printf("A media semestral usando as 3 notas é: %f\n", media3); //Mostra a média semestral calculada com as 3 notas
            media2 = mediade2(nota1, nota2, nota3); //Chama a função respon'savel por calcular a média com as 2 maiores notas
            printf("A media semestral usando apenas as 2 maiores notas é: %f\n", media2); //Mostra a média semestral calculada com as 2 maiores notas
        break;
        case 4:
            printf("Opção 4 foi escolhida\n");

            float n41, n42, n43, resultado4; //Definindo as variáveis

            printf("FORA BOZO\n");
            printf("Insira o primeiro valor\n");
            scanf("%f", &n41); //Recebe o primeiro valor
            printf("Insira o segundo valor\n");
            scanf("%f", &n42); //Recebe o segundo valor
            printf("Insira o terceiro valor\n");
            scanf("%f", &n43); //Recebe o terceiro valor
            
            resultado4 = conta(n41, n42, n43); //Chama a função e recebe o retorno

            printf("O quadrado do primeiro número inserido somado com os dois últimos inseridos resulta em: %f\n", resultado4); //Mostra o resultado da conta
        break;
        case 5:
            printf("Opção 5 foi escolhida\n");

            int n5, resultado5; //Definindo as variáveis

            printf("FORA BOZO\n");
            printf("Digite o limite para os números perfeitos serem calculados\n");
            scanf("%d",&n5); //Recebe o limite para calcular os números perfeitos

            resultado5 = perfeitos(n5); //Chama a função
        break;
        case 6:
            printf("A opção 6 foi escolhida\n");

            char c6; //Definindo as variáveis
            int resultado6;

            printf("FORA BOZO\n");
            printf("Insira um caractere\n");
            scanf("%s", &c6); //Recebe o caractere

            resultado6 = vogal(c6); //Chama a função e recebe o retorno

            if (resultado6 == 0) {
                printf("O caractere inserido não é uma vogal\n"); //Mostra que o caractere não é uma vogal
            }
            if (resultado6 == 1) {
                printf("O caractere inserido é uma vogal\n"); //Mostra que o caractere é uma vogal
            }
        break;
        }
    }
return 0;
}