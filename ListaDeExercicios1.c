/* Lista de Exercícios 1 - Lógica de Programação
Autora: Pamela Fialho
Data: 07/03/2020 */

// Definindo as bibliotecas

#include <stdio.h> 
#include <stdlib.h>
#include <math.h>

// Função principal do Programa

int main ()
{

// Definindo as variáveis

    int opção;

// Confere a valida a opção escolhida

    while (opção < 3 || opção > 13)
    {

// Interface de menu

    printf ("Escolha a questão da lista\n");
    printf ("Opção 3 - Grau Fahrenheit em Grau Celsius\n");
    printf ("Opção 4 - Receber raio e mostra perímetro e área\n");
    printf ("Opção 5 - Grau Celsius em Grau Fahrenheit\n");
    printf ("Opção 6 - Calcular a ditância do trovão\n");
    printf ("Opção 7 - Calcular a distância euclidiana entre dois pontos\n");
    printf ("Opção 8 - Calcular a idade de uma pessoa em dias\n");
    printf ("Opção 9 - Mostre as coordenadas dos quatro vértices do retângulo\n");
    printf ("Opção 10 - Calcular o IMC (Índice de Massa Corporal)\n");
    printf ("Opção 11 - Converter o valor de tensão lido para volts\n");
    printf ("Opção 12 - Calcular a velocidade em Km/h\n");
    printf ("Opção 13 - mostrar as coordenadas do ponto final\n");

    // Lendo a opção

    scanf ("%d", &opção);

    switch (opção) {

        case 3:
            printf ("Opção 3 foi escolhida\n");

                float Fahrenheit3, Celsius3;

                printf ("FORA BOZO\n");
                printf ("Insira a temperatura em Grau Fahrenheit\n");
                scanf ("%f", &Fahrenheit3);

                Celsius3 = (Fahrenheit3 - 32) * 5/9;

                printf ("O valor inserido em Grau Fahrenheit foi: %f\n", Fahrenheit3);
                printf ("O valor equivalente em Grau Celsius é: %f", Celsius3);
        break;

        case 4:
            printf ("Opção 4 foi escolhida\n");

                float raio4, perímetro4, área4;

                printf ("FORA BOZO\n");
                printf ("Insira um valor de raio\n");
                scanf ("%f", &raio4);

                perímetro4 = 2 * 3.14159265359 * raio4;
                área4 = 3.14159265359 * raio4 * raio4;

                printf ("O valor de raio inserido foi: %f\n", raio4);
                printf ("O valor do perímetro é: %f\n", perímetro4);
                printf ("O valor da área é: %f\n", área4);
                printf ("Obs.: a unidade da resposta é a mesma do raio inserido\n");
        break;

        case 5:
            printf ("Opção 5 foi escolhida\n");

                float Celsius5, Fahrenheit5;

                printf ("FORA BOZO\n");
                printf ("Insira a temperatura em Grau Celsius\n");
                scanf ("%f", &Celsius5);

                Fahrenheit5 = (Celsius5 * 9/5) + 32;

                printf ("O valor inserido de temperatura em Grau Celsius é: %f\n", Celsius5);
                printf ("O valor equivalente em Grau Fahrenheit é: %f", Fahrenheit5);
        break;

        case 6:
            printf ("Opção 6 foi escolhida\n");

                float tempo6, dm6, dkm6;

                printf ("FORA BOZO\n");
                printf ("Insira o valor do tempo transcorrido entre ver o relâmpago até ouvir o trovão, em segundos\n");
                scanf ("%f", &tempo6);

                dm6 = 340 * tempo6;
                dkm6 = dm6 * 0.001;

                printf ("O valor de tempo inserido foi: %f\n", tempo6);
                printf ("A distência entre você e o raio em metros é: %f\n", dm6);
                printf ("A distância entre você e o raio em quilômetros é: %f\n", dkm6);
        break;

        case 7:
            printf ("Opção 7 foi escolhida\n");

                float xa7, ya7, xb7, yb7, d7;

                printf ("FORA BOZO\n");
                printf ("Insira o valor de x da primeira coordenada\n");
                scanf ("%f", &xa7);
                printf ("Insira o valor de y da primeira coordenada\n");
                scanf ("%f", &ya7);
                printf ("Insira o valor de x da segunda coordenada\n");
                scanf ("%f", &xb7);
                printf ("Insira o valor de y da segunda coordenada\n");
                scanf("%f", &yb7);

                d7 = ((xa7 - xb7) * (xa7 - xb7)) + ((ya7 - yb7) * (ya7 - yb7));

                printf ("A distância entre os dois pontos é: %f (mesma unidade das coordenada inseridas\n", d7);
        break;

        case 8:
            printf ("Opção 8 foi escolhida\n");

                int a8, m8, d8, i8;

                printf ("FORA BOZO\n"); //Assinatura
                printf ("Insira quantos anos completos você tem\n");
                scanf ("%d", &a8);
                printf ("Insira quantos meses completos você tem, excluindo os anos completos\n");
                scanf ("%d", &m8);
                printf ("Insira quantos dias completos você tem, excluindo os anos e meses completos\n");
                scanf ("%d", &d8);

                i8 = (a8 * 365) + (m8 * 30) + d8;

                printf ("Sua idade em dias é: %d\n", i8);
        break;

        case 9:
            printf ("Opção 9 foi escolhida\n");

                float xa9, ya9, xb9, yb9, xc9, yc9, xd9, yd9, h9, l9;

                printf ("FORA BOZO\n");
                printf ("Insira o valor da coordenada x do ponto A (ponto superior do cano esquerdo)\n");
                scanf ("%f", &xa9);
                printf ("Insita o valor da coordenada y do ponto A (ponto superior do cano esquerdo)\n");
                scanf ("%f", &ya9);
                printf ("Insira o valor da altura do retângulo\n");
                scanf ("%f", &h9);
                printf ("Insira o valor da largura do retângulo\n");
                scanf ("%f", &l9);

                xa9 = xa9;
                ya9 = ya9;
                yb9 = ya9;
                xb9 = xa9 + l9;
                xc9 = xb9;
                yc9 = yb9 - h9;
                xd9 = xa9;
                yd9 = yc9;

                printf ("As coordenadas dos 4 pontos que coompõe o retângulo são:\nXa = %f\n", xa9);
                printf ("Ya = %f\n", ya9);
                printf ("Xb = %f\n", xb9);
                printf ("Yb = %f\n", yb9);
                printf ("Xc = %f\n", xc9);
                printf ("Yc = %f\n", yc9);
                printf ("Xc = %f\n", xc9);
                printf ("Yc = %f\n", yc9);
                printf ("Xd = %f\n", xd9);
                printf ("Yd = %f\n", yd9);
        break;

        case 10:
            printf ("Opção 10 foi escolhida\n");

                float h10, m10, IMC10;

                printf ("FORA BOZO\n");
                printf ("Insira sua altura em metros\n");
                scanf ("%f", &h10);
                printf ("Insira sua massa em kg\n");
                scanf ("%f", &m10);

                IMC10 = m10 / (h10 * h10);

                printf ("Seu IMC (Índice de Massa Coporal) é: %f\n", IMC10);
        break;

        case 11:
            printf ("Opção 11 foi escolhida\n");
                float m11, v11;

                printf ("FORA BOZO\n");
                printf ("Insira o valor de tensão lido pelo microcontrolador\n");
                scanf ("%f", &m11);

                while (m11 > 255 || m11 < 0)
                {
                    printf ("Valor inválido, insira um valor entre 0 e 255\n");
                    printf ("Insira o valor de tensão lido pelo microcontrolador\n");
                    scanf ("%f", &m11);
                }
                
                v11 = 5 * m11 / 255;

                printf ("O valor de tensão lido pelo microcontrolador em volts é: %f\n", v11);
        break;

        case 12:
            printf ("Opção 12 foi escolhida\n");
                float d12, t12, v12;

                printf ("FORA BOZO\n");
                printf ("Insira o valor da distância em metros\n");
                scanf ("%f", &d12);
                printf ("Insira o valor do tempo em segundos\n");
                scanf ("%f", &t12);

                v12 = d12 * 3.6 / t12;

                printf ("O valor da velocidade em km/h é: %f\n", d12);
        break;

        case 13:
            printf ("Opção 13 foi escolhida\n");
        
                float a13, d13, xb13, yb13;

                printf ("FORA BOZO\n");
                printf ("Insira o valor do ângulo em graus\n");
                scanf ("%f", &a13);
                printf ("Insira o valor do tamanho do segmento\n");
                scanf ("%f", &d13);

                xb13 = (cos (a13 * 3.14159265359 / 180)) * d13;
                yb13 = (sin (a13 * 3.14159265359 / 180)) * d13;

                printf ("Xb = %f\n", xb13);
                printf ("Yb = %f\n", yb13);
        break;

        default:
            printf ("Opção inválida\n");
        }

    }

    return 0;
}