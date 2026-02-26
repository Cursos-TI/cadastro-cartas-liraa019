#include <stdio.h> // Biblioteca para entrada e saída de dados


int main () {

    int Carta;
    char Estado [20]; // Optei por utilizar string em Estado, pois o especificador de formato %c imprime apenas um caractere, enquanto o %s é utilizado para imprimir uma string (sequência de caracteres).
    char Código [20]; 
    char Cidade [20];
    int População; // (em milhões de habitantes);
    float Área; // (em km²);
    float PIB; //(em bilhões de reais);
    int Pontos_Turísticos;

    
    //Carta 1
    printf("Carta 1: \n"); 
        
    printf("Digite o estado (sem acento): \n"); // A Biblioteca não lê acentos, por isso a instrução para digitar sem acentos!
    scanf(" %s", Estado);
        
    printf("Digite a cidade: \n");
    scanf(" %s", Cidade);
    
    printf("Digite o código da carta: \n");
    scanf(" %s", Código);

    printf("Digite a população (sem os pontos): \n"); // A Variável é do tipo inteiro, por isso a instrução para digitar sem os pontos!
    scanf(" %d", &População);

    printf("Digite a área: \n");
    scanf(" %f", &Área);
   
    printf("Digite o PIB: \n");
    scanf(" %f", &PIB);

    printf("Digite os Pontos Turísticos: \n");
    scanf(" %d", &Pontos_Turísticos);

    printf("Estado: %s \n", Estado);
    printf("Cidade: %s \n", Cidade);
    printf("Código da carta: %s \n", Código);
    printf("População: %d \n", População);
    printf("Área: %.2f km² \n", Área);
    printf("PIB: %.2f bilhões de reais \n", PIB);
    printf("Pontos Turísticos: %d \n", Pontos_Turísticos);
    
    //Carta 2
    printf("Carta 2: \n");

    printf("Digite o estado (sem acento): \n"); // A Biblioteca não lê acentos, por isso a instrução para digitar sem acentos!
    scanf(" %s", Estado);
       
    printf("Digite a cidade: \n");
    scanf(" %s", Cidade);
    
    printf("Digite o código da carta: \n");
    scanf(" %s", Código);

    printf("Digite a população (sem os pontos): \n"); // A Variável é do tipo inteiro, por isso a instrução para digitar sem os pontos!
    scanf(" %d", &População);

    printf("Digite a área: \n");
    scanf(" %f", &Área);
   
    printf("Digite o PIB: \n");
    scanf(" %f", &PIB);

    printf("Digite os Pontos Turísticos: \n");
    scanf(" %d", &Pontos_Turísticos);

    printf("Estado: %s \n", Estado);
    printf("Cidade: %s \n", Cidade);
    printf("Código da carta: %s \n", Código);
    printf("População: %d \n", População);
    printf("Área: %.2f km² \n", Área);
    printf("PIB: %.2f bilhões de reais \n", PIB);
    printf("Pontos Turísticos: %d \n", Pontos_Turísticos);


    return 0;
   

}
