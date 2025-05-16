#include <stdio.h>

int main()
{
    // Dados da carta 1 (Brasil)
    char nomeBrasil[] = "Brasil";
    float densidadeBrasil = 23.86;
    float populacaoBrasil = 212583750;
    float areaBrasil = 8509379.576;
    float pibBrasil = 2.1;
    int pontosTuristicosBrasil = 75;

    // Dados da carta 2 (Argentina)
    char nomeArgentina[] = "Argentina";
    float densidadeArgentina = 14.5;
    float populacaoArgentina = 45606000;
    float areaArgentina = 2796427;
    float pibArgentina = 0.483;
    int pontosTuristicosArgentina = 75;

    int escolha1, escolha2;
    float valorBrasil1 = 0, valorBrasil2 = 0, valorArgentina1 = 0, valorArgentina2 = 0;
    float somaBrasil, somaArgentina;

    // Menu interativo para o primeiro atributo a ser comparado
    printf("Escolha o primeiro atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Densidade Demográfica\n");
    printf("5 - Pontos Turísticos\n");
    printf("Opção: ");
    scanf("%d", &escolha1);

    // Menu interativo para o segundo atributo a ser comparado (com exceção do primeiro já escolhido)
    printf("\nEscolha o segundo atributo para comparar (diferente do primeiro):\n");
    for (int i = 1; i <= 5; i++) {
        if (i != escolha1) {
            switch (i) {
                case 1: printf("1 - População\n"); break;
                case 2: printf("2 - Área\n"); break;
                case 3: printf("3 - PIB\n"); break;
                case 4: printf("4 - Densidade Demográfica\n"); break;
                case 5: printf("5 - Pontos Turísticos\n"); break;
            }
        }
    }
    printf("Opção: ");
    scanf("%d", &escolha2);

    // Atribuuição dos valores com base nas escolhas
    for (int i = 1; i <= 2; i++) {
        int escolha = (i == 1) ? escolha1 : escolha2;
        switch (escolha) {
            case 1:
                if (i == 1) {
                    valorBrasil1 = populacaoBrasil;
                    valorArgentina1 = populacaoArgentina;
                } else {
                    valorBrasil2 = populacaoBrasil;
                    valorArgentina2 = populacaoArgentina;
                }
                break;
            case 2:
                if (i == 1) {
                    valorBrasil1 = areaBrasil;
                    valorArgentina1 = areaArgentina;
                } else {
                    valorBrasil2 = areaBrasil;
                    valorArgentina2 = areaArgentina;
                }
                break;
            case 3:
                if (i == 1) {
                    valorBrasil1 = pibBrasil;
                    valorArgentina1 = pibArgentina;
                } else {
                    valorBrasil2 = pibBrasil;
                    valorArgentina2 = pibArgentina;
                }
                break;
            case 4:
                if (i == 1) {
                    valorBrasil1 = densidadeBrasil;
                    valorArgentina1 = densidadeArgentina;
                } else {
                    valorBrasil2 = densidadeBrasil;
                    valorArgentina2 = densidadeArgentina;
                }
                break;
            case 5:
                if (i == 1) {
                    valorBrasil1 = pontosTuristicosBrasil;
                    valorArgentina1 = pontosTuristicosArgentina;
                } else {
                    valorBrasil2 = pontosTuristicosBrasil;
                    valorArgentina2 = pontosTuristicosArgentina;
                }
                break;
        }
    }

    // Exibição dos resultados
    printf("\nComparação entre %s e %s:\n", nomeBrasil, nomeArgentina);
    printf("Atributo 1 (Escolha %d): Brasil = %.2f | Argentina = %.2f\n", escolha1, valorBrasil1, valorArgentina1);
    printf("Atributo 2 (Escolha %d): Brasil = %.2f | Argentina = %.2f\n", escolha2, valorBrasil2, valorArgentina2);

    // Resultado da comparação individual
    int pontosBrasil = 0, pontosArgentina = 0;

    // Atributo 1
    if (escolha1 == 4) { // Densidade: menor vence
        if (valorBrasil1 < valorArgentina1) pontosBrasil++;
        else if (valorBrasil1 > valorArgentina1) pontosArgentina++;
    } else {
        if (valorBrasil1 > valorArgentina1) pontosBrasil++;
        else if (valorBrasil1 < valorArgentina1) pontosArgentina++;
    }

    // Atributo 2
    if (escolha2 == 4) { // Densidade: menor vence
        if (valorBrasil2 < valorArgentina2) pontosBrasil++;
        else if (valorBrasil2 > valorArgentina2) pontosArgentina++;
    } else {
        if (valorBrasil2 > valorArgentina2) pontosBrasil++;
        else if (valorBrasil2 < valorArgentina2) pontosArgentina++;
    }

    // Resultado final
    somaBrasil = valorBrasil1 + valorBrasil2;
    somaArgentina = valorArgentina1 + valorArgentina2;

    printf("\nSoma dos atributos:\n");
    printf("Brasil: %.2f\n", somaBrasil);
    printf("Argentina: %.2f\n", somaArgentina);

    // Resultado final
    printf("\nResultado da rodada:\n");
    if (somaBrasil > somaArgentina) {
        printf("Brasil venceu a rodada!\n");
    } else if (somaBrasil < somaArgentina) {
        printf("Argentina venceu a rodada!\n");
    } else {
        printf("Empate!\n");
    }

    return 0;
}