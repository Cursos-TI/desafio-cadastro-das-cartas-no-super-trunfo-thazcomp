#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// desenvolvido por Thiago Azevedo Alves

int main() {

    int cityCode1; //código da cidade
    char cityName1[50]; //nome da cidade
    int cityPopulation1; //população da cidade
    float cityArea1; //área da cidade
    float cityPib1;  //PIB da cidade
    int cityAttractions1; // Número de atrações turisticas

    int cityCode2; //código da cidade
    char cityName2[50]; //nome da cidade
    int cityPopulation2; //população da cidade
    float cityArea2; //área da cidade
    float cityPib2;  //PIB da cidade
    int cityAttractions2; // Número de atrações turisticas

    printf("SUPER TRUNFO CADASTRO DE CARTAS DE CIDADE\n");
    printf("Vamos cadastrar duas cartas\n");
    printf("Dados da Carta 1:\n");

    printf("Digite o código da carta de cidade:\n");
    scanf("%d", &cityCode1);

    printf("Digite o nome da carta de cidade:\n");
    scanf("%s", &cityName1);

    printf("Digite a população da carta de cidade:\n");
    scanf("%d", &cityPopulation1);

    printf("Digite a área da carta de cidade:\n");
    scanf("%f", &cityArea1);

    printf("Digite o PIB da carta de cidade:\n");
    scanf("%f", &cityPib1);

    printf("Digite o número de atrações turísticas da carta de cidade:\n");
    scanf("%d", &cityAttractions1);

    printf("Dados da Carta 2:\n");

    printf("Digite o código da carta de cidade:\n");
    scanf("%d", &cityCode2);

    printf("Digite o nome da carta de cidade:\n");
    scanf("%s", &cityName2);

    printf("Digite a população da carta de cidade:\n");
    scanf("%d", &cityPopulation2);

    printf("Digite a área da carta de cidade:\n");
    scanf("%f", &cityArea2);

    printf("Digite o PIB da carta de cidade:\n");
    scanf("%f", &cityPib2);

    printf("Digite o número de atrações turísticas da carta de cidade:\n");
    scanf("%d", &cityAttractions2);

    printf("CARTAS CADASTRADAS!\n\n");
    printf("CARTA 1:\n");
    printf("Código: %d\n", cityCode1);
    printf("Nome: %s\n", cityName1);
    printf("População: %d\n", cityPopulation1);
    printf("Área: %f\n", cityArea1);
    printf("PIB: %f\n", cityPib1);
    printf("Número de atrações turísticas: %d\n\n", cityAttractions1);

    printf("CARTA 2:\n");
    printf("Código: %d\n", cityCode2);
    printf("Nome: %s\n", cityName2);
    printf("População: %d\n", cityPopulation2);
    printf("Área: %f\n", cityArea2);
    printf("PIB: %f\n", cityPib2);
    printf("Número de atrações turísticas: %d\n\n", cityAttractions2);
    
    return 0;
}
