#include <stdio.h>

// Função para limpar o buffer de entrada (necessária após leitura de strings ou números)
void limparBuffer() {
    int c;
    // Enquanto o caractere não for o fim de linha ou EOF, continua limpando
    while ((c = getchar()) != '\n' && c != EOF) {}
}

int main() {
    // Variáveis para armazenar os dados da primeira carta
    char estado1;
    char codigo1[4];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;
    float densidade1;
    float pib_per_capita1;

    // Variáveis para armazenar os dados da segunda carta
    char estado2;
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;
    float densidade2;
    float pib_per_capita2;

    // Exibição inicial e instrução para continuar
    printf("==============================================\n\n");
    printf("#### Ola, seja bem-vindo ao Super Trunfo! ####\n");
    printf("-- Vamos cadastrar duas cartas para o jogo --\n");
    printf("______________________________________________\n");
    printf("_____|   ______   |__/ ________  /____________\n");
    printf("_____|  |         |_/     /     /_____________\n");
    printf("_____|  |______   |/     /     /______________\n");
    printf("_____|         |  |     /     /_______________\n");
    printf("_____|  _______|  |    /     /________________\n");
    printf("_____|____________|_________/_________________\n");
    printf("==============================================\n\n");
    printf("### Aperte ENTER para continuar... ###\n");
    getchar(); // Espera pelo ENTER para continuar
    limparBuffer(); // Limpa o buffer para garantir que o ENTER anterior seja consumido

    // Cadastro da primeira carta
    printf("###===> Cadastro da Carta 1\n");
    printf(".......\n");

    // Leitura dos dados da primeira carta
    printf("###===> Estado (UF): "); 
    scanf(" %c", &estado1); // Leitura de um caractere com espaço antes para limpar possíveis quebras de linha
    limparBuffer();

    printf("###===> Codigo da Carta (ex: A1): ");
    scanf("%3s", codigo1); // Leitura do código da carta (max 3 caracteres)
    limparBuffer();
    
    printf("###===> Nome da Cidade: ");
    scanf(" %49[^\n]", cidade1); // Leitura do nome da cidade (até 49 caracteres)
    limparBuffer();
    
    printf("###===> Populacao: ");
    scanf("%d", &populacao1); // Leitura da população (inteiro)
    limparBuffer();
    
    printf("###===> Area (em km2): ");
    scanf("%f", &area1); // Leitura da área (ponto flutuante)
    limparBuffer();
    
    printf("###===> PIB (em reais): ");
    scanf("%f", &pib1); // Leitura do PIB (ponto flutuante)
    limparBuffer();
    
    printf("###===> Numero de Pontos Turisticos: ");
    scanf("%d", &pontos_turisticos1); // Leitura do número de pontos turísticos
    limparBuffer();

    // Cálculo da densidade populacional (população / área)
    if (area1 > 0) {
        densidade1 = (float)populacao1 / area1; // Garantindo que a área não seja zero
    } else {
        densidade1 = 0.0; // Caso a área seja zero, define a densidade como zero
    }

    // Cálculo do PIB per capita (PIB / população)
    if (populacao1 > 0) {
        pib_per_capita1 = pib1 / populacao1; // Garantindo que a população não seja zero
    } else {
        pib_per_capita1 = 0.0; // Caso a população seja zero, define o PIB per capita como zero
    }

    // Exibindo as informações da carta 1
    printf("###===> Densidade populacional: %.2f habitantes por km2\n", densidade1);
    printf("###===> PIB per capita: %.2f reais\n\n", pib_per_capita1);
    
    // Cadastro da segunda carta (mesmo processo da carta 1)
    printf("###===> Cadastro da Carta 2\n");
    printf(".......\n");
    printf("###===> Estado (UF): ");
    scanf(" %c", &estado2); // Leitura do estado (UF)
    limparBuffer();
    
    printf("###===> Codigo da Carta (ex: B2): ");
    scanf("%3s", codigo2); // Leitura do código da carta (max 3 caracteres)
    limparBuffer();
    
    printf("###===> Nome da Cidade: ");
    scanf(" %49[^\n]", cidade2); // Leitura do nome da cidade (até 49 caracteres)
    limparBuffer();
    
    printf("###===> Populacao: ");
    scanf("%d", &populacao2); // Leitura da população
    limparBuffer();
    
    printf("###===> Area (em km2): ");
    scanf("%f", &area2); // Leitura da área
    limparBuffer();
    
    printf("###===> PIB (em reais): ");
    scanf("%f", &pib2); // Leitura do PIB
    limparBuffer();
    
    printf("###===> Numero de Pontos Turisticos: ");
    scanf("%d", &pontos_turisticos2); // Leitura do número de pontos turísticos
    limparBuffer();

    // Cálculos para a segunda carta
    // Densidade populacional
    if (area2 > 0) {
        densidade2 = (float)populacao2 / area2; // Garantindo que a área não seja zero
    } else {
        densidade2 = 0.0;
    }
    // PIB per capita
    if (populacao2 > 0) {
        pib_per_capita2 = pib2 / populacao2; // Garantindo que a população não seja zero
    } else {
        pib_per_capita2 = 0.0;
    }

    // Exibindo as informações da carta 2
    printf("###===> Densidade populacional: %.2f habitantes por km2\n", densidade2);
    printf("###===> PIB per capita: %.2f reais\n", pib_per_capita2);

    // Exibição dos dados das cartas
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos1);
    printf("Densidade populacional: %.2f habitantes por km2\n", densidade1);
    printf("PIB per capita: %.2f reais\n", pib_per_capita1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos2);
    printf("Densidade populacional: %.2f habitantes por km2\n", densidade2);
    printf("PIB per capita: %.2f reais\n", pib_per_capita2);

    // Menu interativo para escolha do atributo de comparação
    int escolha;
    printf("\nEscolha o atributo para comparação:\n");
    printf("1. Populacao\n");
    printf("2. Area\n");
    printf("3. PIB\n");
    printf("4. Pontos Turisticos\n");
    printf("5. Densidade Populacional\n");
    printf("6. PIB per Capita\n");
    printf("Digite a opcao desejada (1-6): ");
    scanf("%d", &escolha);
    limparBuffer(); // Limpa o buffer após a leitura da escolha

    // Estrutura switch para a comparação entre os atributos
    switch (escolha) {
        case 1:
            printf("\nComparando a Populacao:\n");
            printf("Carta 1: %d\n", populacao1);
            printf("Carta 2: %d\n", populacao2);
            if (populacao1 > populacao2) {
                printf("Vencedora: Carta 1\n");
            } else if (populacao2 > populacao1) {
                printf("Vencedora: Carta 2\n");
            } else {
                printf("Empate!\n");
            }
            break;
        
        case 2:
            printf("\nComparando a Area:\n");
            printf("Carta 1: %.2f km2\n", area1);
            printf("Carta 2: %.2f km2\n", area2);
            if (area1 > area2) {
                printf("Vencedora: Carta 1\n");
            } else if (area2 > area1) {
                printf("Vencedora: Carta 2\n");
            } else {
                printf("Empate!\n");
            }
            break;

        case 3:
            printf("\nComparando o PIB:\n");
            printf("Carta 1: %.2f reais\n", pib1);
            printf("Carta 2: %.2f reais\n", pib2);
            if (pib1 > pib2) {
                printf("Vencedora: Carta 1\n");
            } else if (pib2 > pib1) {
                printf("Vencedora: Carta 2\n");
            } else {
                printf("Empate!\n");
            }
            break;
        
        case 4:
            printf("\nComparando Pontos Turisticos:\n");
            printf("Carta 1: %d\n", pontos_turisticos1);
            printf("Carta 2: %d\n", pontos_turisticos2);
            if (pontos_turisticos1 > pontos_turisticos2) {
                printf("Vencedora: Carta 1\n");
            } else if (pontos_turisticos2 > pontos_turisticos1) {
                printf("Vencedora: Carta 2\n");
            } else {
                printf("Empate!\n");
            }
            break;
        
        case 5:
            printf("\nComparando a Densidade Populacional:\n");
            printf("Carta 1: %.2f habitantes por km2\n", densidade1);
            printf("Carta 2: %.2f habitantes por km2\n", densidade2);
            if (densidade1 < densidade2) { // Para a densidade, vence a carta com menor valor
                printf("Vencedora: Carta 1\n");
            } else if (densidade2 < densidade1) {
                printf("Vencedora: Carta 2\n");
            } else {
                printf("Empate!\n");
            }
            break;

        case 6:
            printf("\nComparando o PIB per Capita:\n");
            printf("Carta 1: %.2f reais\n", pib_per_capita1);
            printf("Carta 2: %.2f reais\n", pib_per_capita2);
            if (pib_per_capita1 > pib_per_capita2) {
                printf("Vencedora: Carta 1\n");
            } else if (pib_per_capita2 > pib_per_capita1) {
                printf("Vencedora: Carta 2\n");
            } else {
                printf("Empate!\n");
            }
            break;

        default:
            printf("Opcao invalida!\n");
            break;
    }

    int opcao;

    while (1) {
        printf("\nDeseja:\n");
        printf("1 - Batalhar novamente com as mesmas cartas\n");
        printf("2 - Cadastrar novas cartas\n");
        printf("3 - Sair do jogo\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);
        limparBuffer();

        if (opcao == 1) {
            // Apenas refaz a batalha com as mesmas cartas
            printf("\nEscolha o atributo para comparação:\n");
            printf("1. Populacao\n");
            printf("2. Area\n");
            printf("3. PIB\n");
            printf("4. Pontos Turisticos\n");
            printf("5. Densidade Populacional\n");
            printf("6. PIB per Capita\n");
            printf("Digite a opcao desejada (1-6): ");
            scanf("%d", &escolha);
            limparBuffer();

            // Reutiliza o switch de comparação
            switch (escolha) {
                case 1:
                    printf("\nComparando a Populacao:\n");
                    printf("Carta 1: %d\n", populacao1);
                    printf("Carta 2: %d\n", populacao2);
                    if (populacao1 > populacao2) {
                        printf("Vencedora: Carta 1\n");
                    } else if (populacao2 > populacao1) {
                        printf("Vencedora: Carta 2\n");
                    } else {
                        printf("Empate!\n");
                    }
                    break;
                case 2:
                    printf("\nComparando a Area:\n");
                    printf("Carta 1: %.2f km2\n", area1);
                    printf("Carta 2: %.2f km2\n", area2);
                    if (area1 > area2) {
                        printf("Vencedora: Carta 1\n");
                    } else if (area2 > area1) {
                        printf("Vencedora: Carta 2\n");
                    } else {
                        printf("Empate!\n");
                    }
                    break;
                case 3:
                    printf("\nComparando o PIB:\n");
                    printf("Carta 1: %.2f reais\n", pib1);
                    printf("Carta 2: %.2f reais\n", pib2);
                    if (pib1 > pib2) {
                        printf("Vencedora: Carta 1\n");
                    } else if (pib2 > pib1) {
                        printf("Vencedora: Carta 2\n");
                    } else {
                        printf("Empate!\n");
                    }
                    break;
                case 4:
                    printf("\nComparando Pontos Turisticos:\n");
                    printf("Carta 1: %d\n", pontos_turisticos1);
                    printf("Carta 2: %d\n", pontos_turisticos2);
                    if (pontos_turisticos1 > pontos_turisticos2) {
                        printf("Vencedora: Carta 1\n");
                    } else if (pontos_turisticos2 > pontos_turisticos1) {
                        printf("Vencedora: Carta 2\n");
                    } else {
                        printf("Empate!\n");
                    }
                    break;
                case 5:
                    printf("\nComparando a Densidade Populacional:\n");
                    printf("Carta 1: %.2f habitantes por km2\n", densidade1);
                    printf("Carta 2: %.2f habitantes por km2\n", densidade2);
                    if (densidade1 < densidade2) {
                        printf("Vencedora: Carta 1\n");
                    } else if (densidade2 < densidade1) {
                        printf("Vencedora: Carta 2\n");
                    } else {
                        printf("Empate!\n");
                    }
                    break;
                case 6:
                    printf("\nComparando o PIB per Capita:\n");
                    printf("Carta 1: %.2f reais\n", pib_per_capita1);
                    printf("Carta 2: %.2f reais\n", pib_per_capita2);
                    if (pib_per_capita1 > pib_per_capita2) {
                        printf("Vencedora: Carta 1\n");
                    } else if (pib_per_capita2 > pib_per_capita1) {
                        printf("Vencedora: Carta 2\n");
                    } else {
                        printf("Empate!\n");
                    }
                    break;
                default:
                    printf("Opcao invalida!\n");
                    break;
            }

        } else if (opcao == 2) {
            // Reinicia o programa do zero (recurso simples)
            printf("\nReiniciando cadastro de cartas...\n");
            main(); // chama main de novo
            return 0; // encerra a execução atual

        } else if (opcao == 3) {
            printf("\nObrigado por jogar! Encerrando o programa.\n");
            break;
        } else {
            printf("Opcao invalida! Tente novamente.\n");
        }
    }


    return 0;
}
