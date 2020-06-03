/* Lista de Exercícios 2 - Lógica de Programação
Autora: Pamela Fialho
Data: 25/03/2020 */

// Definindo as bibliotecas

#include <stdio.h> 
#include <stdlib.h>
#include <math.h>

// Função principal do Programa

int main ()
{

// Definindo as variáveis

    int opção;

// Confere e valida a opção escolhida

    while (opção < 1 || opção > 10)
    {

// Interface de menu

    printf ("Escolha a questão da lista\n");
    printf ("Opção 1 - Maior e Menor inteiro\n");
    printf ("Opção 2 - Apto(a) para doar sangue\n");
    printf ("Opção 3 - Data de nascimento válida\n");
    printf ("Opção 4 - Divisível por 5 e 3\n");
    printf ("Opção 5 - Soma dos 3 menores inteiros\n");
    printf ("Opção 6 - Número entre 100 e 200\n");
    printf ("Opção 7 - Calcular IMC e dizer a categoria\n");
    printf ("Opção 8 - Raizes reais da equação de segundo grau\n");
    printf ("Opção 9 - Número Palíndromo\n");
    printf ("Opção 10 - Quantidade e tipo de moeda para comprar produto\n");

    // Lendo a opção

    scanf ("%d", &opção);

    switch (opção) {

        default:
            printf ("Opção inválida\n");

        case 1:
            printf ("Opção 1 foi escolhida\n"); //Definindo as variáveis

                int Inteiro1, Inteiro2, Inteiro3, Maior, Menor;

                printf ("FORA BOZO\n");
                printf ("Insira o valor do primeiro inteiro\n");
                scanf ("%d", &Inteiro1);
                printf ("Insira o valor do segundo inteiro\n");
                scanf ("%d", &Inteiro2);
                printf ("Insita o valor do terceiro inteiro\n");
                scanf ("%d", &Inteiro3);

                if (Inteiro1 > Inteiro2) //Comparar os dois primeiros números
                {
                    Maior = Inteiro1;
                }
                else 
                {
                    Maior = Inteiro2;
                }
                if (Inteiro3 > Maior) //Comparar o resultado dos dois primeiros com o terceiro
                {
                    Maior = Inteiro3;
                }

                if (Inteiro1 < Inteiro2) //Comparar os dois primeiros números
                {
                    Menor = Inteiro1;
                }
                else 
                {
                    Menor = Inteiro2;
                }
                if (Inteiro3 < Menor) //Comparar o resuldado dos dois primeiros com o terceiro
                {
                    Menor = Inteiro3;
                }

                printf ("Os valores inseridos foram: %d,%d,%d\n", Inteiro1, Inteiro2, Inteiro3); //Mostra os valores inseridos
                printf ("O maior inteiro é: %d\n", Maior); //Mostra o maior número inserido
                printf ("O menor inteiro é: %d\n", Menor); //Mostra o menor número inserido
        break;

        case 2:
            printf ("Opção 2 foi escolhida\n");

                int Idade; //Definindo as variáveis

                printf ("FORA BOZO\n");
                printf ("Insira sua idade\n");
                scanf ("%d", &Idade);

                if (Idade < 18 || Idade > 67) //Verificando se a idade está dentro da faixa
                {
                    printf ("Você não pode doar sangue\n"); //Mostra que a pessoa não pode doar sangue
                }
                else
                {
                    printf ("Você pode doar sangue\n"); //Mostra que a pessoa pode doar sangue
                }
        break;

        case 3:
            printf ("Opção 3 foi escolhida\n");

                int Dia, Mês, Ano; //Definindo as variáveis

                printf ("FORA BOZO\n");
                printf ("Insira o dia de seu nascimento\n");
                scanf ("%d", &Dia);
                printf ("Insira o mês de seu nascimento\n");
                scanf ("%d", &Mês);
                printf ("Insira o ano de seu nascimento\n");
                scanf ("%d", &Ano);

                if (Dia < 1 || Dia > 31) //Confere se o dia inserido é válido
                {
                    printf ("O dia inserido é inválido\n");
                }
                else
                {
                    printf ("O dia inserido é válido\n");
                }
                if (Mês < 1 || Mês > 12) //Confere se o mês inserido é válido
                {
                    printf ("O mês inserido é inválido\n");
                }
                else
                {
                    printf ("O mês inserido é válido\n");
                }
                if (Ano < 0 || Ano > 2019) //Confere se o ano inserido é válido
                {
                    printf ("O ano inserido é inválido\n");
                }
                else
                {
                    printf ("O ano inserido é válido\n");
                }
                if ((Dia < 1 || Dia > 31) && (Mês < 1 || Mês > 12) && (Ano < 0 || Ano > 2019)) //Verifica e mostra se a data inserida é válida ou não
                {
                    printf ("A data de nascimento inserida é inválida\n"); 
                }
                else
                {
                    printf ("A data de nascimento inserida é válida\n");
                }
        break;

        case 4:
            printf ("Opção 4 foi escolhida\n");

                int Inteiro, Resto1, Resto2; //Definindo as variáveis

                printf ("FORA BOZO\n");
                printf ("Insira o valor de um número inteiro\n");
                scanf ("%d", &Inteiro);

                Resto1 = Inteiro % 5; //Verificando o resto da divisão por 5
                Resto2 = Inteiro % 3; //Verificando o resto da divisão por 3

                if ((Resto1 == 0) && (Resto2 == 0)) //Verifica e mostra se o número inserido é divisível por 5 e 3 ao mesmo tempo
                {
                    printf ("O número inserido é divisível por 5 e por 3 ao mesmo tempo\n");
                }
                else
                {
                    printf ("O número inserido não é divisível por 5 e por 3 ao mesmo tempo\n");
                }
        break;

        case 5:
            printf ("Opção 5 foi escolhida\n");

                float n1, n2, n3, n4, troca, soma;

                printf ("FORA BOZO\n");
                printf("Digite o primeiro número\n");
                scanf("%f", &n1);
                printf("Digite o segundo  número\n");
                scanf("%f",&n2);
                printf("Digite o terceiro número\n");
                scanf ("%f", &n3);
                printf("Digite o quarto número\n");
                scanf ("%f", &n4);

                if (n1 > n2)
                {
                    troca = n2;
                    n2 = n1; 
                    n1 = troca;
                }
                if (n2 > n3)
                {
                    troca = n3; 
                    n3 = n2;
                    n2 = troca;
                }
                if (n3 > n4)
                {
                    troca = n4;
                    n4 = n3;
                    n3 = troca;
                }
                if (n1 > n2)
                {
                    troca = n2;
                    n2 = n1;
                    n1 = troca;
                }

                soma = n1 + n2 +n3;

                printf ("OS número digitados em ordem crescente: %f, %f, %f, %f\n", n1, n2, n3, n4);
                printf ("A soma dos 3 menores números digitados é %f\n", soma);
        break;

        case 6:
            printf ("Opção 6 foi escolhida\n");

                float Número; //Determinando as variáveis

                printf ("FORA BOZO\n");
                printf ("Insira um número\n");
                scanf ("%f", &Número);

                if ((Número <= 200) && (Número >= 100)) //Verificando e mostrando se o número inserido está dentro da faixa
                {
                    printf ("Você digitou um número entre 100 e 200\n");
                }
                else
                {
                    printf ("Você digitou um número fora da faixa entre 100 e 200\n");
                }
        break;

        case 7:
            printf ("Opção 7 foi escolhida\n");

                float h, m, IMC; //Determinando as variáveis

                printf ("FORA BOZO\n");
                printf ("Insira sua altura em metros\n");
                scanf ("%f", &h);
                printf ("Insira sua massa em Kg\n");
                scanf ("%f", &m);

                IMC = m / (h * h); //Calcula o IMC

                if (IMC < 14.5) //Verifica e mostra a categoria do IMC
                {
                    printf ("Seu IMC se encaixa na categoria Desnutrição\n");
                }
                else
                {
                    if ((IMC >= 14.5) && (IMC < 20))
                    {
                        printf ("Seu IMC se encaixa na categoria Peso abaixo do normal\n");
                    }
                    else
                    {
                        if ((IMC >= 20) && (IMC < 25))
                        {
                            printf ("Seu IMC se encaixa na categoria Peso normal\n");
                        }
                        else
                        {
                            if ((IMC >= 25) && (IMC < 30))
                            {
                                printf ("Seu IMC se encaixa na categoria Sobrepeso\n");
                            }
                            else
                            {
                                if ((IMC >= 30) && (IMC < 40))
                                {
                                    printf ("Seu IMC se encaixa na categoria Obesidade\n");
                                }
                                else
                                {
                                    if (IMC >= 40)
                                    {
                                        printf ("Seu IMC se encaixa na categoria Obesidade mórbida\n");
                                    }

                                }

                            }
                            
                        }
                        
                    }
                    
                }

                printf ("Seu IMC (Índice de Massa Coporal) é: %f\n", IMC); //Mostra o IMC
        break;

        case 8:
            printf ("Opção 8 foi selecionada\n");

                float a, b, c, raiz1, raiz2, Delta; //Determinando as variáveis
                
                printf ("FORA BOZO\n");
                printf ("Insira o valor do primeiro coeficiente (a), que seja diferente de 0\n");
                scanf ("%f", &a);
                printf ("Insira o valor do segundo coeficiente (b)\n");
                scanf ("%f", &b);
                printf ("Insira o valor do terceiro coeficiente (c)\n");
                scanf ("%f", &c);

                while (a == 0) //Enquanto o valor de a for 0, o pedirá por outro valor
                {
                    printf ("FORA BOZO\n");
                    printf ("Insira o valor do primeiro coeficiente (a), que seja diferente de 0\n");
                    scanf ("%f", &a);
                    printf ("Insira o valor do segundo coeficiente (b)\n");
                    scanf ("%f", &b);
                    printf ("Insira o valor do terceiro coeficiente (c)\n");
                    scanf ("%f", &c);
                }
                
                Delta = (b * b) - (4 * a * c); //Calcula o Delta
                raiz1 = (- b + (sqrt ((b * b) - (4 * a * c)))) / (2 * a); //Calcula a primeira raiz da equação
                raiz2 = (- b - (sqrt ((b * b) - (4 * a * c)))) / (2 * a); //Calcula a segunda raiz da equação

                if (Delta > 0) //Verifica e mostra o tipo de raiz que o função tem
                {
                    printf ("A função possui duas raízes reais e distintas\n");
                    printf ("A primeira raiz da equação é %f\n", raiz1);
                    printf ("A segunda raiz da equação é %f\n", raiz2);
                }
                else
                {
                    if (Delta == 0)
                    {
                        printf ("A função possui raízes reais e iguais\n");
                        printf ("A raiz da equação é %f\n", raiz1);
                    }
                    else
                    {
                        if (Delta < 0)
                        {
                            printf ("A função não possui raizes reais\n");
                        }
                    }
                    
                }
                
        break;

        case 9:
            printf ("Opção 9 foi escolhida\n");

                int Digitado, Reverso, Dígito, Num; //Determinando as variáveis

                    printf ("FORA BOZO\n");
                    printf ("Insira um número inteiro de 5 dígitos\n");
                    scanf ("%d", &Digitado);
                
                    Num = Digitado;
                    Reverso = 0;
                    
                    while (Num != 0) //Enquanto o Auxiliar for diferente de 0, ele acrescenta um dígito a direita e o joga fora
                    {
                        Dígito = Num % 10;
                        Reverso = (Reverso * 10) + Dígito;
                        Num = Num / 10;
                    }
                    if (Reverso == Digitado) //Verifica e mostra se o número é palíndromo
                    {
                        printf ("O número inserido é palíndromo\n");
                    }
                    else
                    {
                        printf ("O número inserido não é palíndromo\n");
                    }
        break;

        case 10:
            printf ("Opção 10 foi escolhida\n");

                int Reais, Centavos, centavo50, centavo25, centavo10, centavo5, centavo1; //Determinando as variáveis

                printf ("FORA BOZO\n");
                printf ("Insira a parte inteira (em real) do produto que será pago\n");
                scanf ("%d", &Reais);
                printf ("Insira a parte quebrada (em centavos de real) do produto que será pago\n");
                scanf ("%d", &Centavos);

                printf ("Serão necessárias %d moeda(s) de 1 real para pagar o produto\n", Reais); //Determinando e mostrando quantas moedas de 1 real serão necessárias
                
                if (Centavos == 50) //Caso seja 50 centavos exato
                {
                    centavo50 = Centavos;
                    printf ("Será necessária 1 modeda de 50 centavos para pagar o produto\n");
                }
                else
                {
                    if (Centavos > 50) //Caso seja mais que 50
                    {
                        Centavos = Centavos - 50;
                        printf ("Será necessária 1 moeda de 50 centavos para pagar o produto\n");

                        if (Centavos == 25) //Caso o resto seja igual a 25
                        {
                            printf ("Será necessária 1 moeda de 25 centavos para pagar o produto\n");
                        }
                        else 
                        {
                            if (Centavos > 25) //Caso o resto seja maior que 25
                            {
                                Centavos = Centavos - 25;
                                printf ("Será necessária 1 moeda de 25 centavos para pagar o produto\n");

                                if (Centavos == 10) //Caso o resto seja igual a 10
                                {
                                printf ("Será necessária 1 moeda de 10 centavos para pagar o produto\n");
                                }
                                else
                                {
                                    if (Centavos > 10) //Caso o resto seja maior que 10
                                    {
                                        Centavos = Centavos - 10;
                                        printf ("Será necessária 1 moeda de 10 centavos para pagar o produto\n");

                                        if (Centavos == 10) //Caso o resto seja igual a 10
                                        {
                                            printf ("Será necessária 1 moeda de 10 centavos para pagar o produto\n");
                                        }
                                        else
                                        {
                                            if (Centavos > 10) //Caso o resto seja maior que 10
                                            {
                                                Centavos = Centavos - 10;
                                                printf ("Será necessária 1 moeda de 10 centavos para pagar o produto\n");

                                                if (Centavos == 5) //Caso o resto seja igual a 5
                                                {
                                                    printf ("Será necessária 1 moeda de 5 centavos para pagar o produto\n");
                                                }
                                                else
                                                {
                                                    if (Centavos > 5) //Caso o resto seja maior que 5
                                                    {
                                                        Centavos = Centavos - 5;
                                                        printf ("Será necessária 1 moeda de 5 centavos para pagar o produto\n");
                                                        printf ("Serão necessárias %d moeda(s) de 1 centavo para pagar o produto\n", Centavos);
                                                    }
                                                    else //Caso o resto seja menor que 5
                                                    {
                                                        printf ("Serão necessárias %d moeda(s) de 1 centavo para pagar o produto\n", Centavos);
                                                    }
                                                
                                                }
                                            }
                                            else
                                            {
                                                if (Centavos == 5) //Caso o resto seja igual a 5
                                                {
                                                    printf ("Será necessária 1 moeda de 5 centavos para pagar o produto\n");
                                                }
                                                else
                                                {
                                                    if (Centavos > 5) //Caso o resto seja maior que 5
                                                    {
                                                        Centavos = Centavos - 5;
                                                        printf ("Será necessária 1 moeda de 5 centavos para pagar o produto\n");
                                                        printf ("Serão necessárias %d moeda(s) de 1 centavo para pagar o produto\n", Centavos);
                                                    }
                                                    else //Caso o resto seja menor que 5
                                                    {
                                                        printf ("Serão necessárias %d moeda(s) de 1 centavo para pagar o produto\n", Centavos);
                                                    }
                                                
                                                }
                                            } 
                                        }
                                    }
                                    else
                                    {
                                        if (Centavos == 5) //Caso o resto seja igual a 5
                                        {
                                            printf ("Será necessária 1 moeda de 5 centavos para pagar o produto\n");
                                        }
                                        else
                                        {
                                            if (Centavos > 5) //Caso o resto seja maior que 5
                                            {
                                                Centavos = Centavos - 5;
                                                printf ("Será necessária 1 moeda de 5 centavos para pagar o produto\n");
                                                printf ("Serão necessárias %d moeda(s) de 1 centavo para pagar o produto\n", Centavos);
                                            }
                                            else //Caso o resto seja menor que 5
                                            {
                                                printf ("Serão necessárias %d moeda(s) de 1 centavo para pagar o produto\n", Centavos);
                                            }
                                                
                                        }
                                    }
                                }
                            }
                            else
                            {
                                if (Centavos == 10) //Caso o resto seja igual a 10
                                {
                                printf ("Será necessária 1 moeda de 10 centavos para pagar o produto\n");
                                }
                                else
                                {
                                    if (Centavos > 10) //Caso o resto seja maior que 10
                                    {
                                        Centavos = Centavos - 10;
                                        printf ("Será necessária 1 moeda de 10 centavos para pagar o produto\n");

                                        if (Centavos == 10) //Caso o resto seja igual a 10
                                        {
                                            printf ("Será necessária 1 moeda de 10 centavos para pagar o produto\n");
                                        }
                                        else
                                        {
                                            if (Centavos > 10) //Caso o resto seja maior que 10
                                            {
                                                Centavos = Centavos - 10;
                                                printf ("Será necessária 1 moeda de 10 centavos para pagar o produto\n");

                                                if (Centavos == 5) //Caso o resto seja igual a 5
                                                {
                                                    printf ("Será necessária 1 moeda de 5 centavos para pagar o produto\n");
                                                }
                                                else 
                                                {
                                                    if (Centavos > 5) //Caso o resto seja maior que 5
                                                    {
                                                        Centavos = Centavos - 5;
                                                        printf ("Será necessária 1 moeda de 5 centavos para pagar o produto\n");
                                                        printf ("Serão necessárias %d moeda(s) de 1 centavo para pagar o produto\n", Centavos);
                                                    }
                                                    else //Caso o resto seja menor que 5
                                                    {
                                                        printf ("Serão necessárias %d moeda(s) de 1 centavo para pagar o produto\n", Centavos);
                                                    }
                                                
                                                }
                                            }
                                            else
                                            {
                                                if (Centavos == 5) //Caso o resto seja igual a 5
                                                {
                                                    printf ("Será necessária 1 moeda de 5 centavos para pagar o produto\n");
                                                }
                                                else
                                                {
                                                    if (Centavos > 5) //Caso o resto seja maior que 5
                                                    {
                                                        Centavos = Centavos - 5;
                                                        printf ("Será necessária 1 moeda de 5 centavos para pagar o produto\n");
                                                        printf ("Serão necessárias %d moeda(s) de 1 centavo para pagar o produto\n", Centavos);
                                                    }
                                                    else //Caso o resto seja menor que 5
                                                    {
                                                        printf ("Serão necessárias %d moeda(s) de 1 centavo para pagar o produto\n", Centavos);
                                                    }
                                                
                                                }
                                            } 
                                        }
                                    }
                                    else
                                    {
                                        if (Centavos == 5) //Caso o resto seja igual a 5
                                        {
                                            printf ("Será necessária 1 moeda de 5 centavos para pagar o produto\n");
                                        }
                                        else
                                        {
                                            if (Centavos > 5) //Caso o resto seja maior que 5
                                            {
                                                Centavos = Centavos - 5;
                                                printf ("Será necessária 1 moeda de 5 centavos para pagar o produto\n");
                                                printf ("Serão necessárias %d moeda(s) de 1 centavo para pagar o produto\n", Centavos);
                                            }
                                            else //Caso o resto seja menor que 5
                                            {
                                                printf ("Serão necessárias %d moeda(s) de 1 centavo para pagar o produto\n", Centavos);
                                            }
                                                
                                        }
                                    }
                                }
                            }                         
                        }
                    }
                    else
                    {
                        if (Centavos == 25) //Caso o resto seja igual a 25
                        {
                            printf ("Será necessária 1 moeda de 25 centavos para pagar o produto\n");
                        }
                        else 
                        {
                            if (Centavos > 25) //Caso o resto seja maior que 25
                            {
                                Centavos = Centavos - 25;
                                printf ("Será necessária 1 moeda de 25 centavos para pagar o produto\n");

                                if (Centavos == 10) //Caso o resto seja igual a 10
                                {
                                printf ("Será necessária 1 moeda de 10 centavos para pagar o produto\n");
                                }
                                else
                                {
                                    if (Centavos > 10) //Caso o resto seja maior que 10
                                    {
                                        Centavos = Centavos - 10;
                                        printf ("Será necessária 1 moeda de 10 centavos para pagar o produto\n");

                                        if (Centavos == 10) //Caso o resto seja igual a 10
                                        {
                                            printf ("Será necessária 1 moeda de 10 centavos para pagar o produto\n");
                                        }
                                        else
                                        {
                                            if (Centavos > 10) //Caso o resto seja maior que 10
                                            {
                                                Centavos = Centavos - 10;
                                                printf ("Será necessária 1 moeda de 10 centavos para pagar o produto\n");

                                                if (Centavos == 5) //Caso o resto seja igual a 5
                                                {
                                                    printf ("Será necessária 1 moeda de 5 centavos para pagar o produto\n");
                                                }
                                                else
                                                {
                                                    if (Centavos > 5) //Caso o resto seja maior que 5
                                                    {
                                                        Centavos = Centavos - 5;
                                                        printf ("Será necessária 1 moeda de 5 centavos para pagar o produto\n");
                                                        printf ("Serão necessárias %d moeda(s) de 1 centavo para pagar o produto\n", Centavos);
                                                    }
                                                    else //Caso o resto seja menor que 5
                                                    {
                                                        printf ("Serão necessárias %d moeda(s) de 1 centavo para pagar o produto\n", Centavos);
                                                    }
                                                
                                                }
                                            }
                                            else
                                            {
                                                if (Centavos == 5) //Caso o resto seja igual a 5
                                                {
                                                    printf ("Será necessária 1 moeda de 5 centavos para pagar o produto\n");
                                                }
                                                else
                                                {
                                                    if (Centavos > 5) //Caso o resto seja maior que 5
                                                    {
                                                        Centavos = Centavos - 5;
                                                        printf ("Será necessária 1 moeda de 5 centavos para pagar o produto\n");
                                                        printf ("Serão necessárias %d moeda(s) de 1 centavo para pagar o produto\n", Centavos);
                                                    }
                                                    else //Caso o resto seja menor que 5
                                                    {
                                                        printf ("Serão necessárias %d moeda(s) de 1 centavo para pagar o produto\n", Centavos);
                                                    }
                                                
                                                }
                                            } 
                                        }
                                    }
                                    else
                                    {
                                        if (Centavos == 5) //Caso o resto seja igual a 5
                                        {
                                            printf ("Será necessária 1 moeda de 5 centavos para pagar o produto\n");
                                        }
                                        else
                                        {
                                            if (Centavos > 5) //Caso o resto seja maior que 5
                                            {
                                                Centavos = Centavos - 5;
                                                printf ("Será necessária 1 moeda de 5 centavos para pagar o produto\n");
                                                printf ("Serão necessárias %d moeda(s) de 1 centavo para pagar o produto\n", Centavos);
                                            }
                                            else //Caso o resto seja menor que 5
                                            {
                                                printf ("Serão necessárias %d moeda(s) de 1 centavo para pagar o produto\n", Centavos);
                                            }
                                                
                                        }
                                    }
                                }
                            }
                            else
                            {
                                if (Centavos == 10) //Caso o resto seja igual a 10
                                {
                                printf ("Será necessária 1 moeda de 10 centavos para pagar o produto\n");
                                }
                                else
                                {
                                    if (Centavos > 10) //Caso o resto seja maior que 10
                                    {
                                        Centavos = Centavos - 10;
                                        printf ("Será necessária 1 moeda de 10 centavos para pagar o produto\n");

                                        if (Centavos == 10) //Caso o resto seja igual a 10
                                        {
                                            printf ("Será necessária 1 moeda de 10 centavos para pagar o produto\n");
                                        }
                                        else
                                        {
                                            if (Centavos > 10) //Caso o resto seja maior que 10
                                            {
                                                Centavos = Centavos - 10;
                                                printf ("Será necessária 1 moeda de 10 centavos para pagar o produto\n");

                                                if (Centavos == 5) //Caso o resto seja igual a 5
                                                {
                                                    printf ("Será necessária 1 moeda de 5 centavos para pagar o produto\n");
                                                }
                                                else
                                                {
                                                    if (Centavos > 5) //Caso o resto seja maior que 5
                                                    {
                                                        Centavos = Centavos - 5;
                                                        printf ("Será necessária 1 moeda de 5 centavos para pagar o produto\n");
                                                        printf ("Serão necessárias %d moeda(s) de 1 centavo para pagar o produto\n", Centavos);
                                                    }
                                                    else //Caso o resto seja menor que 5
                                                    {
                                                        printf ("Serão necessárias %d moeda(s) de 1 centavo para pagar o produto\n", Centavos);
                                                    }
                                                
                                                }
                                            }
                                            else
                                            {
                                                if (Centavos == 5) //Caso o resto seja igual a 5
                                                {
                                                    printf ("Será necessária 1 moeda de 5 centavos para pagar o produto\n");
                                                }
                                                else
                                                {
                                                    if (Centavos > 5) //Caso o resto seja maior que 5
                                                    {
                                                        Centavos = Centavos - 5;
                                                        printf ("Será necessária 1 moeda de 5 centavos para pagar o produto\n");
                                                        printf ("Serão necessárias %d moeda(s) de 1 centavo para pagar o produto\n", Centavos);
                                                    }
                                                    else //Caso o resto seja menor que 5
                                                    {
                                                        printf ("Serão necessárias %d moeda(s) de 1 centavo para pagar o produto\n", Centavos);
                                                    }
                                                
                                                }
                                            } 
                                        }
                                    }
                                    else
                                    {
                                        if (Centavos == 5) //Caso o resto seja igual a 5
                                        {
                                            printf ("Será necessária 1 moeda de 5 centavos para pagar o produto\n");
                                        }
                                        else
                                        {
                                            if (Centavos > 5) //Caso o resto seja maior que 5
                                            {
                                                Centavos = Centavos - 5;
                                                printf ("Será necessária 1 moeda de 5 centavos para pagar o produto\n");
                                                printf ("Serão necessárias %d moeda(s) de 1 centavo para pagar o produto\n", Centavos);
                                            }
                                            else //Caso o resto seja menor que 5
                                            {
                                                printf ("Serão necessárias %d moeda(s) de 1 centavo para pagar o produto\n", Centavos);
                                            }                                             
                                        }
                                    }
                                }
                            }                         
                        }
                    }               
                }                           
            }
        break;
        }
    return 0;
}