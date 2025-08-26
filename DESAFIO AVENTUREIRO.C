#include <stdio.h>

int main(){
    int população1, população2;
    int turismo1, turismo2;
    float área1, área2;
    float pib1, pib2;
    float densidade1, densidade2;
    float pibpercapita1, pibpercapita2;
    char estado1, estado2;
    char código1[20], código2[20];
    char cidade1[20], cidade2[20];
  
    densidade1 = população1 / área1;
    densidade1 = população2 / área2;

    pibpercapita1 = (pib1 * 1000000000) / população1;
    pibpercapita2 = (pib2 * 1000000000) / população2;



    //-------- Carta 1 -------//

    printf("Carta 1: \n");

    printf("Estado de (A-H):  ");
    scanf("%c", &estado1);

    printf("Código:  ");
    scanf("%s", &código1);

    printf("Nome da cidade:  ");
    scanf("%s", &cidade1);

    printf("População:  ");
    scanf("%d", &população1);

    printf("Área em km:  ");
    scanf("%f", &área1);

    printf("Pib:  ");
    scanf("%f", &pib1);

    printf("Pontos turisticos:  ");
    scanf("%d", &turismo1);


    //-----Carta 2 ------//

    printf("\nCarta 2:\n");

    printf("Estado de (A-H): ");
    scanf(" %c", &estado2);

    printf("Código: ");
    scanf("%s", &código2);

    printf("Nome da cidade: ");
    scanf("%s", &cidade2);

    printf("População: ");
    scanf("%d", &população2);

    printf("Área em km: ");
    scanf("%f", &área2);

    printf("Pib: ");
    scanf("%f", &pib2);

    printf("Pontos Turisticos: ");
    scanf("%d", &turismo2);



    //--------- saida-----------//

    printf("\n---Cartas cadastrada---\n");

    printf("\nCarta 1: \n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", código1);
    printf("Nome da cidade: %s", cidade1);
    printf("População: %d\n", população1);
    printf("Área: %fkm\n", área1);
    printf("Números de pontos turisticos: %d\n", turismo1);
    printf("Densidade populacional: %f\n", densidade1);
    printf("Pib per Capita: %f\n", pibpercapita1);

    printf("\nCarta 2: \n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", código2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %d\n", população2);
    printf("Área: %fkm\n", área2);
    printf("Pib: %f\n", pib2);
    printf("Números de pontos turisticos: %d\n", turismo2);
    printf("Densidade populacional: %f\n", densidade2);
    printf("Pib per Capita: %f\n", pibpercapita2);

    return 0;




    
}