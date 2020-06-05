/* Lista de Exercícios 4 - Lógica de Programação
Autora: Pamela Fialho
Data: 02/06/2020 */

// Definindo as bibliotecas

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

// Função principal do Programa

int main()
{

    // Definindo as variáveis

    int opção;

    // Confere e valida a opção escolhida

    while (opção < 1 || opção > 10)
    {

        // Interface de menu

        printf("Escolha a questão da lista\n");
        printf("Opção 1 - Maiores de idade\n");
        printf("Opção 2 - Cubo instantâneo dos números\n");
        printf("Opção 3 - Cubo dos números\n");
        printf("Opção 4 - Incremento de 10\n");
        printf("Opção 5 - Letras no nome\n");
        printf("Opção 6 - Palavra de trás para frente\n");
        printf("Opção 7 - Letras As\n");

        // Lendo a opção

        scanf("%d", &opção);

        switch (opção)
        {

        default:
            printf("Opção inválida\n");

        case 1:
            printf("Opção 1 foi escolhida\n");

            int Entradaidades[10]; //Definindo as variáveis
            int i1 = 1;
            int maioresdeidade1 = 0;

            printf ("FORA BOZO\n");

            for (i1 = 1; i1 <= 10; i1++)
            {
                do //Recebe os valores das idades até atingir a quantidade programada (10)
                {
                    printf("Digite uma idade\n");
                    scanf("%d", &Entradaidades[i1]);
                } while (Entradaidades[i1] < 0); //Aceita apenas valores positivos

                if (Entradaidades[i1] >= 18) //Caso o valor inserido seja maior que 18, acrescenta-se 1 em uma outra variável
                {
                    maioresdeidade1++;
                }
            }

            printf("Das idades inseridas, %d são maiores ou iguais a 18\n", maioresdeidade1); //Mostra a quantidade de valores inseridos maiores ou iguais a 18
        break;
        case 2:
            printf("Opção 2 foi escolhida\n");

            float Números2[5]; //Definindo as variáveis
            int i2 = 1;
            float Cubo2[5];

            printf("FORA BOZO\n");

            for (i2 = 1; i2 <= 5; i2++)
            {
                printf("Digite um número\n");
                scanf("%f", &Números2[i2]); //Lê os valores inseridos

                Cubo2[i2] = Números2[i2] * Números2[i2] * Números2[i2]; //Calcula o cubo do número inserido

                printf("O número inserido foi %f\n", Números2[i2]); //Mostra os valores inseridos
                printf("O cubo do número é %f\n", Cubo2[i2]); //Mostra o resultado do cálculo do cubo do número inserido
            }
        break;
        case 3:
            printf("Opção 3 foi escolhida\n");

            float Números3[5]; //Definindo as variáveis
            int i3 = 1;
            float Cubo3[5];

            printf("FORA BOZO\n");

            for (i3 = 1; i3 <= 5; i3++)
            {
                printf("Digite um número\n");
                scanf("%f", &Números3[i3]); //Lê os valores inseridos
            }

            i3 = 1;

            for (i3 = 1; i3 <= 5; i3++) {
                Cubo3[i3] = Números3[i3] * Números3[i3] * Números3[i3]; //Calcula o cubo do número inserido
                printf("O número inserido foi %f\n", Números3[i3]); //Mostra os valores inseridos
                printf("Seu cubos é %f\n", Cubo3[i3]); //Mostra o resultado do cálculo do cubo do número inserido
            } 
        break;
        case 4:
            printf("Opção 4 foi escolhida\n");

            int Vetor4[100]; //Definindo as variáveis
            int i4 = 1;
            int num4 = 0;

            printf("FORA BOZO\n");

            for (i4 = 1; i4 <= 100; i4++) {
                Vetor4[i4] = num4;
                printf("%d\n", Vetor4[i4]);
                num4 += 10;
            }
        break;
        case 5:
            printf("Opção 5 foi escolhida\n");

            char palavra5[1]; //Definindo as variáveis
            int letras5 = 0;

            printf ("FORA BOZO\n");
            printf("Digite uma palavra\n");
            scanf("%s", palavra5);
            letras5 = strlen(palavra5);
            printf("A palavra possui %d letras\n", letras5);
        break;
        case 6:
            printf("A opção 6 foi escolhida\n");

            char palavra6[1]; //Definindo as variáveis
            int t6;

            printf ("FORA BOZO\n");
            printf("Digite uma palavra\n");
            scanf("%s", palavra6);
            printf("A palavra inserida escrita ao contrário fica: ");
            for (t6 = strlen(palavra6) - 1; t6 > -1; t6--) {
                printf("%c", palavra6[t6]);
            }
            printf("\n");
        break;
        case 7:
            printf("A opção 7 foi escolhida\n");

            char palavra7[1]; //Definindo as variáveis
            char letras7 = 0;
            int i7 = 0;

            printf ("FORA BOZO\n");
            printf("Digite uma palavra\n");
            scanf("%s", palavra7);
            
            for (i7 = 0; i7 < strlen(palavra7); i7++){
                if (palavra7[i7] == 'a' || palavra7[i7] == 'A') {
                    letras7++;
                }
            }

            printf("A palavra inserida possui %d letras as\n", letras7);
        break;
        }
    }
return 0;
}