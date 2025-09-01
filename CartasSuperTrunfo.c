#include <stdio.h>


struct Carta {
    unsigned long int populacao;
    double area;
    double pib;
    int pontosTuristicos;
    double densidade;
    double pibPerCapita;
    float superPoder;
};


void calcularAtributos(struct Carta *c) {
    c->densidade = (double)c->populacao / c->area;
    c->pibPerCapita = c->pib / (double)c->populacao;
    c->superPoder = (float)(c->populacao + c->area + c->pib + 
                            c->pontosTuristicos + c->pibPerCapita + (1.0 / c->densidade));
}

int main() {
    struct Carta carta1, carta2

    
    printf("=== Carta 1 ===\n");
    printf("Digite a populacao: ");
    scanf("%lu", &carta1.populacao);
    printf("Digite a area: ");
    scanf("%lf", &carta1.area);
    printf("Digite o PIB: ");
    scanf("%lf", &carta1.pib);
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &carta1.pontosTuristicos);


    printf("\n=== Carta 2 ===\n");
    printf("Digite a populacao: ");
    scanf("%lu", &carta2.populacao);
    printf("Digite a area: ");
    scanf("%lf", &carta2.area);
    printf("Digite o PIB: ");
    scanf("%lf", &carta2.pib);
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &carta2.pontosTuristicos);

    
    calcularAtributos(&carta1);
    calcularAtributos(&carta2);

    
    printf("\n=== Comparacao de Cartas ===\n");
    printf("Populacao: Carta 1 venceu (%d)\n", carta1.populacao > carta2.populacao);
    printf("Area: Carta 1 venceu (%d)\n", carta1.area > carta2.area);
    printf("PIB: Carta 1 venceu (%d)\n", carta1.pib > carta2.pib);
    printf("Pontos Turisticos: Carta 1 venceu (%d)\n", carta1.pontosTuristicos > carta2.pontosTuristicos);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", carta1.densidade < carta2.densidade);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", carta1.pibPerCapita > carta2.pibPerCapita);
    printf("Super Poder: Carta 1 venceu (%d)\n", carta1.superPoder > carta2.superPoder);

    return 0;
}
