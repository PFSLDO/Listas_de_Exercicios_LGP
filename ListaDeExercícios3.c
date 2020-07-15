/* Lista de Exercícios 3 - Lógica de Programação
Autora: Pamela Fialho
Data: 13/04/2020 */

// Definindo as bibliotecas

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

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
        printf("Opção 1 - Tabela do código ASCII\n");
        printf("Opção 2 - Número primo\n");
        printf("Opção 3 - Resto igual a 5\n");
        printf("Opção 4 - Soma\n");
        printf("Opção 5 - Maiores de idade\n");
        printf("Opção 6 - Idade, altura e massa\n");
        printf("Opção 7 - Compra de carro\n");
        printf("Opção 8 - Menu de operações\n");
        printf("Opção 9 - Taxa de natalidade\n");
        printf("Opção 10 - Quadrado\n");

        // Lendo a opção

        scanf("%d", &opção);

        switch (opção)
        {

        default:
            printf("Opção inválida\n");

        case 1:
            printf("Opção 1 foi escolhida\n");

            int i1; //Definindo as variáveis

            printf("FORA BOZO\n");
            printf("Observação: o código completo possui 255 caracteres, mas apenas 95 são sinais\ngráficos, por isso apenas esses podem ser impressos.\nO número 33 representa o espaço e o número 127 representa o deletar por isso não\naparecem.\n");
            printf("\nTabela do Código ASCII\n"); //Mostra o título da tabela
            printf("----------------------\n");
            printf("|  Decimal | Código  |\n");       // Mostra o cabeçalho da Tabela
            printf("----------------------\n");
            for (i1 = 32; i1 < 128; i1++) //Mostra o conteúdo da tabela
            {
                printf("|   %3d    |", i1);
                printf("    %c    |\n", i1);
            }
        break;
        case 2:
            printf("Opção 2 foi escolhida\n");

            int n2, i2; //Definindo as variáveis
            int saída2 = 0;

            printf("FORA BOZO\n");
            printf("Digite um número inteiro\n");
            scanf("%d", &n2);

            for (i2 = 1; i2 <= n2; i2++)
            {
                if (n2 % i2 == 0) //Acrescenta 1 no valor de saída sempre que o número pode ser dividido
                {
                    saída2 = saída2 + 1; //Um número primo passa por essa condição apenas duas vezes (divisão por 1 e por ele mesmo)
                }
            }

            if (saída2 == 2) //Mostra que o número é primo caso a saída seja 2
            {
                printf("O número %d é primo\n", n2);
            }
            else //Mostra que o númeor não é primo caso a saída seja difernte de 2
            {
                printf("O número %d não é primo\n", n2);
            }
        break;
        case 3:
            printf("Opção 3 foi escolhida\n");

            int i3; //Definindo as variáveis

            printf("FORA BOZO\n");
            printf("Os números entre 1000 e 2000 que produzem resto 5 quando divididos por 11 são:\n");

            for (i3 = 1000; i3 <= 2000; i3++) //Verifica todos os números entre 1000 e 2000 (inclusive)
            {
                if ((i3 % 11) == 5) //Mostra a lista de números que produzem resto 5, caso haja
                {
                    printf("%d\n", i3);
                }
            }
        break;
        case 4:
            printf("Opção 4 foi escolhida\n");

            float n4, i4, S4; //Definindo as variáveis

            printf("FORA BOZO\n");

            do
            {
                printf("Insira um número inteiro e positivo\n");
                scanf("%f", &n4);
            } while (n4 < 0); //Repete enquanto o número não for positivo

            for (i4 = 1; i4 <= n4; i4++) //Divide 1 por todos os números de 1 até o número digitado, somando tudo
            {
                S4 += 1 / i4;
            }

            printf("O resultado da soma é %f\n", S4); //Mostra o resultado da soma
        break;
        case 5:
            printf("Opção 5 foi escolhida\n");

            int i5, entradaidade5; //Definindo as variáveis
            int maioresdeidade5 = 0;

            printf ("FORA BOZO\n");

            for (i5 = 1; i5 <= 10; i5++)
            {
                do //Recebe os valores das idades até atingir a quantidade programada (10)
                {
                    printf("Digite a %dª idade\n", i5);
                    scanf("%d", &entradaidade5);
                } while (entradaidade5 < 0); //Aceita apenas valores positivos

                if (entradaidade5 >= 18) //Caso o valor inserido seja maior que 18, acrescenta-se 1 em uma outra variável
                {
                    maioresdeidade5++;
                }
            }

            printf("Das idades inseridas, %d são maiores ou iguais a 18\n", maioresdeidade5); //Mostra a quantidade de valores inseridos maiores ou iguais a 18
        break;
        case 6:
            printf("A opção 6 foi escolhida\n");

            int pessoas = 25; //Definindo as variáveis
            float altura6 = 0, massa6 = 0, mediaalturas6 = 0, somaalturas6 = 0;
            int maioresde50 = 0, menosde40kg = 0, idadeentre6 = 0, i6 = 0, idade6 = 0;

            printf ("FORA BOZO\n");

            for (i6 = 1; i6 <= pessoas; i6++)
            {
                printf("Digite a idade da %dª pessoa\n", i6); //Recebe as idades até atingir o valor programado (pessoas)
                scanf("%d", &idade6);

                while (idade6 < 0) //Não aceita valores negativos
                {
                    printf("Digite um número positivo para a idade da %dª pessoa\n", i6);
                    scanf("%d", &idade6);
                }

                printf("Digite a altura da %dª pessoa\n", i6); //Recebe as alturas até atingir o valor programado (pessoas)
                scanf("%f", &altura6);

                while (altura6 < 0) //Não aceita valores negativos
                {
                    printf("Digite um número positivo para a altura da %dª pessoa\n", i6);
                    scanf("%f", &altura6);
                }

                printf("Digite a massa da %dª pessoa\n", i6); //Recebe as massas até atingir o valor programado (pessoas)
                scanf("%f", &massa6);

                while (massa6 < 0) //Não aceita valor negativo
                {
                    printf("Digite um número positivo para a massa da %dª pessoa\n", i6);
                    scanf("%f", &massa6);
                }
          
                if (idade6 > 50) //Acrescenta 1 à variável suporte quando uma idade maior que 50 for inserida
                {
                    maioresde50++;
                }
                if (idade6 >= 10 && idade6 <= 20) //Acresenta 1 à variável suporte quando uma idade está entre 10 e 20 e soma o valor da altura dessa pessoa à outra variável suporte
                {
                    somaalturas6 += altura6;
                    idadeentre6++;
                }

                if (massa6 < 40) //Acrescenta 1 à variável suporte quando uma massa menor que 40kg é inserida
                {
                    menosde40kg++;
                }
            }

            if (idadeentre6 > 0) //Calcula e mostra a média das alturas das pessoas entre 10 e 20 anos
            {
                mediaalturas6 = somaalturas6 / idadeentre6;
                printf("A média de altura entre as pessoas que tem entre 10 e 20 anos é %f\n", mediaalturas6);
            }
            else //Mostra que não foram inseridos valores de idade entre 10 e 20
            {
                printf("Não foram inseridos dados de pessoas entre 10 e 20 anos\n");
            }

            printf("Existem %d pessoas com idade superior a 50 anos\n", maioresde50); //Mostra a quantidade de pessoas com idade maior que 50
            printf("A porcentagem de pessoas com massa inferior a 40kg é %d porcento\n", 100 * menosde40kg / pessoas); //Mostra a porcentagem de pessoas com massa inferior a 40kg
        break;
        case 7:
            printf("A opção 7 foi escolhida\n");

                float valor7; //Definindo as variáveis
                int i7 = 0;

                printf ("FORA BOZO\n");
                printf ("Insira o valor do carro\n");
                scanf ("%f", &valor7); //Recebendo o valor do carro

                printf ("-------------------------------------------------\n");
                printf ("|                Opções de compra                |\n"); //Mostra o título da tabela
                printf ("-------------------------------------------------\n");
                printf ("|O valor do carro à vista será R$%.2f.          |\n", valor7 * 0.8); //Mostra a opção de pagar à vista
                printf ("-------------------------------------------------\n");
                printf ("| Parcelas | Valor de cada parcela | Preço final |\n"); //Cabeçalho da tabela
                printf ("-------------------------------------------------\n");

                for (i7 = 1; i7 <= 10; i7 ++) //Mostra o conteúdo da tabela
                {
                printf ("|    %2d    |        R$%.2f        |  R$%.2f  |\n", i7 * 6, ((valor7 * 0.03 * i7) + valor7) / (i7 * 6),(valor7 * 0.03 * i7) + valor7);
                printf ("-------------------------------------------------\n");
                }
        break;
        case 8:
            printf ("A opção 8 foi escolhida\n");

                float valor18, valor28; //Determinando as variáveis
                int número8 = 0;
                
                printf ("FORA BOZO\n");

                while (número8 < 1 || número8 > 4) //Mostra o menu até um número válido ser inserido
                {
                    printf ("Escolha a operação que você deseja realizar, escrevendo o número correspondente\n"); //Mostra as opções de operações
                    printf ("1 - Adição\n");
                    printf ("2 - Subtração\n");
                    printf ("3 - Multiplicação\n");
                    printf ("4 - Divisão\n");
        
                    scanf ("%d", &número8); //Recebe o tipo de operação que será feita
                    printf ("Insira o primeiro número\n");
                    scanf ("%f", &valor18); //Recebe o primeiro número
                    printf ("Insira o segundo número\n");
                    scanf ("%f", &valor28); //Recebe o segundo número

                    switch (número8)
                    {
                        case 0: //Opção que faz voltar para o último while (menu)
                        continue;
                        break;

                        case 1: //Opção que faz operação de adição
                        printf ("A operação escolhida foi adição\n");
                        printf ("%f + %f = %f\n", valor18, valor28, (valor18 + valor28));
                        printf ("Para retornar ao menu principal, digite 0\n"); //Mostra e lê a opção de voltar ou parar o programa
                        printf ("Para sair do programa, digite 100\n");
                        scanf ("%d", &número8);
                        if (número8 == 100) //Opção que faz sair do programa
                        {
                            exit (0);
                        }
                        break;

                        case 2:
                        printf ("A operação escolhida foi subtração\n");
                        printf ("%f - %f = %f\n", valor18, valor28, valor18 - valor28);
                        printf ("Para retornar ao menu principal, digite 0\n"); //Mostra e lê a opção de voltar ou parar o programa
                        printf ("Para sair do programa, digite 100\n");
                        scanf ("%d", &número8);
                        if (número8 == 100) //Opção que faz sair do programa
                        {
                            exit (0);
                        }
                        break;

                        case 3:
                        printf ("A operação escolhida foi multiplicação\n");
                        printf ("%f * %f = %f\n", valor18, valor28, valor18 * valor28);
                        printf ("Para retornar ao menu principal, digite 0\n"); //Mostra e lê a opção de voltar ou parar o programa
                        printf ("Para sair do programa, digite 100\n");
                        scanf ("%d", &número8);
                        if (número8 == 100) //Opção que faz sair do programa
                        {
                            exit (0);
                        }
                        break;

                        case 4:
                        printf ("A operação escolhida foi divisão\n");
                        printf ("%f / %f = %f\n", valor18, valor28, valor18 / valor28);
                        printf ("Para retornar ao menu principal, digite 0\n"); //Mostra e lê a opção de voltar ou parar o programa
                        printf ("Para sair do programa, digite 100\n");
                        scanf ("%d", &número8);
                        if (número8 == 100) //Opção que faz sair do programa
                        {
                            exit (0);
                        }
                        break;
                    }
                }
        break;
        case 9:
            printf ("A opção 9 foi escolhida\n");

                int anos = 0; //Determinando as variáveis
                float taxadecrescimentoA = 1.03, taxadecrescimentoB = 1.02, populaçãoA = 5000000, populaçãoB = 7000000;

                printf ("FORA BOZO\n");
                printf ("O país A possuí 5 milhões de habitantes, e tem uma taxa de natalidade de 3 porcento anual, enquanto o país B possuí 7 milhões de habitantes com uma taxa de 4 porcento anual\n"); //Mostra a situação atual

                while (populaçãoB >= populaçãoA) //Calcula o aumento das populações até o momento que a de A for maior que a de B
                {
                    populaçãoA = populaçãoA * taxadecrescimentoA;
                    populaçãoB = populaçãoB * taxadecrescimentoB;
                    anos ++;
                }

                printf ("Serão necessário %d anos para a população do país A ultrapassar a população do\npaís B.\n", anos); //Mostra quanto tempo levará para a população de A ultrapasar a de B
        break;
        case 10:
            printf ("A opção 10 foi escolhida\n");

                int tamanhoquadrado = 0, i10 = 0, j10 = 0; //Determinando as variáveis

                printf ("FORA BOZO\n");

                do
                {
                    printf ("Digite o tamanho da aresta do quadrado\n"); //Pede e recebe o tamanho da aresta do quadrado
                    scanf ("%d", &tamanhoquadrado);
                }
                while (tamanhoquadrado < 0 || tamanhoquadrado > 20); //Repete o bloco até que a pessoa insira um valor entre 1 e 20

                if (tamanhoquadrado == 1) //Caso o tamanho da aresta seja 1, o programa imprime apenas 1 asterisco
                {
                    printf ("*");
                }

                for (i10 = 0; i10 < tamanhoquadrado && tamanhoquadrado != 1; i10 ++) //Faz a primeira linha com o tamanho desejado
                {
                    printf ("* ");
                }

                printf ("\n"); //Pula uma linha para podermos fazer as colunas de baixo

                for (i10 = 0; i10 < tamanhoquadrado - 2 && tamanhoquadrado != 1; i10 ++) //Faz a primeira coluna excluindo 2 asteriscos, ja que vão ser inseridos nas linhas de cima e da baixo
                {
                    printf ("*");

                    for (j10 = 0; j10 < (tamanhoquadrado * 2) - 3; j10 ++) //Dá espaço entre o asterísco da coluna da esquerda e o da direita
                    {
                        printf (" ");
                    }
                    
                    printf ("*\n"); //Faz a última coluna (da direita) e pula uma linha
                }
                
                for (i10 = 0; i10 < tamanhoquadrado && tamanhoquadrado != 1; i10 ++) //Faz a linha de baixo
                {
                    printf ("* ");
                }
        break;
        }
    }
return 0;
}