#include<stdio.h>
int main(){
    //Declarando as variaveis carta 1
    char estado1[50], codigo1 [10], nomecidade1[50];
    int populacao1;
    int pontosturisticos1;
    float area1;
    float pib1;

    //Declarando as variaveis carta 2
    char estado2[50],codigo2 [10], nomecidade2[50];
    int populacao2;
    int pontosturisticos2;
    float area2;
    float pib2;

    //Titulo do Super Trunfo

    printf("\033[32mBem vindo ao super trunfo!\033[0m\n\n");

    //Preencher as informações carta 1
    printf("\033[31mInformacoes da carta 1\033[0m\n\n");

    printf("Cadastre o estado:");
    scanf("%s", estado1);
    printf("informe o nome da cidade:");
    scanf("%s", nomecidade1);
    printf("Cadastre o codigo:");
    scanf("%s", codigo1);
    printf("Informe a quantidade da populacao:");
    scanf("%d", &populacao1);
    printf("informe a quantidade de pontos turisticos:");
    scanf("%d", &pontosturisticos1);
    printf("informe o tamanho da Area:");
    scanf("%f", &area1);
    printf("Informe o Pib:");
    scanf("%f", &pib1);
    printf("\n");

    //preencher as informações carta2
    
printf("\033[31mInformacoes da carta 2\033[0m\n\n");

    printf("Cadastre o estado:");
    scanf("%s", estado2);
    printf("Informe o nome da cidade:");
    scanf("%s",nomecidade2);
    printf("Cadastre o codigo:");
    scanf("%s", codigo2);
    printf("Informe a quantidade da populacao:");
    scanf("%d", &populacao2);
    printf("informe a quantidade de pontos turisticos:");
    scanf("%d", &pontosturisticos2);
    printf("informe o tamanho da Area:");
    scanf("%f", &area2);
    printf("Informe o Pib:");
    scanf("%f", &pib2);
    printf("\n");

    //Atributo para comparação "PIB" - logica de comparação usando "IF" e "Else".
    if (pib1 > pib2)
    {
        printf("\033[32mA cidade %s eh a vencedora do desafio!\033[0m\n\n",nomecidade1);
    } else {
        printf("\033[32mA cidade %s eh a vencedora do desafio!\033[0m\n\n",nomecidade2);
    }
    


return 0;


}