
#include <stdio.h> 
int main(){
     //carta 1*/ \n
    
     int população1, população2;
     int turismo1, turismo2;
     float área1, área2;
     float pib1, pib2;
     char estado1, estado2;  
     char código1[20], código2[20]; 
     char cidade1[20], cidade2[20];
   
            // -----entrada carta 1---------

      printf("Carta 1:\n");

      printf("Estado (A-H): ");
      scanf("%c", &estado1);

      printf("Código da carta: ");
      scanf("%s", &código1);

      printf("Nome da cidade: ");
      scanf("%s", &cidade1);

      printf("População: ");
      scanf("%d", &população1);

      printf("Área: ");
      scanf("%f", &área1);

      printf("PIB: ");
      scanf("%f", &pib1);

      printf("números de pontos turísticos: ");
      scanf("%d", &turismo1);


      //------ entrada carta 2 -------

      printf("Carta 2: \n");

      printf("Estado (A-H): ");
      scanf("%c", &estado2);

      printf("Código da carta: ");
      scanf("%s", &código2);

      printf("Nome da Cidade: ");
      scanf("%s", &cidade2);

      printf("População: ");
      scanf("%d", &população2);

      printf("Área: ");
      scanf("%f", &área2);

      printf("PIB: ");
      scanf("%f", &pib2);

      printf("Número de pontos turísiticos: ");
      scanf("%d", &turismo2);
     

      //---saidas das cartas-----

      printf("\n--- cartas cadastradas ---\n");

      printf("\nCarta 1:\n");
      printf("Estado: %c\n", estado1);
      printf("Código: %s\n", código1);
      printf("Cidade: %s\n", cidade1);
      printf("População: %d\n", população1);
      printf("Aréa: %2.f km\n", área1);
      printf("PIB: %2.f\n", pib1);
      printf("Número de pontos turísiticos: %d\n", turismo1);

      printf("\nCarta 2:\n");
      printf("Estado: %c\n", estado2);
      printf("Código: %s\n", código2);
      printf("Cidade: %s\n", cidade2);
      printf("População: %d\n", população2);
      printf("Área: %2.f km\n", área2);
      printf("PIB: %2.f\n", pib2);
      printf("Número de pontos turísiticos: %d\n", turismo2);

      return 0;

}