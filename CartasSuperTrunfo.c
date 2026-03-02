#include <stdio.h> // Biblioteca para entrada e saída de dados
#include <string.h> // Biblioteca para manipulação de strings
#include <locale.h> // Biblioteca para configuração de localidade)


// --- Função para limpar o buffer de entrada ---
    void limparBufferEntrada() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
    }

    int main () {
    setlocale(LC_ALL, "Portuguese_Brazil"); // Configurar localidade para suporte a acentos

    int Carta;
    char Estado [20]; // Optei por utilizar string em Estado, pois o especificador de formato %c imprime apenas um caractere, enquanto o %s é utilizado para imprimir uma string (sequência de caracteres).
    char Código [20]; 
    char Cidade [20];
    int População; // (em milhões de habitantes);
    float Área; // (em km²);
    double PIB; //(em bilhões de reais);
    int Pontos_Turísticos;
    float Densidade_Populacional; // (em habitantes por km²);
    float PIB_per_capita; // (em reais);
    
    printf("============================================\n");
    printf("Bem-vindo ao jogo de cartas Super Trunfo!\n");
    printf("============================================\n");

    //Carta 1
    printf("===============\n");
    printf("Carta 1: \n"); 
    printf("===============\n");
        
    printf("Digite o estado (sem acento): \n"); // A Biblioteca não lê acentos, por isso a instrução para digitar sem acentos!
    fgets(Estado, sizeof(Estado), stdin);
    Estado[strcspn(Estado, "\n")] = '\0'; // Remover o caractere de nova linha lido pelo fgets
     
    printf("Digite a cidade: \n");
    fgets(Cidade, sizeof(Cidade), stdin);
    Cidade[strcspn(Cidade, "\n")] = '\0'; // Remover o caractere de nova linha lido pelo fgets

    printf("Digite o código da carta: \n");
    scanf(" %s", Código);

    printf("Digite a população (sem os pontos): \n"); // A Variável é do tipo inteiro, por isso a instrução para digitar sem os pontos!
    scanf(" %d", &População);
   
    printf("Digite a área (utilize vírgula como separador): \n");
    scanf(" %f", &Área);
    limparBufferEntrada(); // Limpar o buffer de entrada para evitar problemas com fgets
   
    printf("Digite o PIB: \n");
    scanf(" %lf", &PIB);
    
    printf("Digite os Pontos Turísticos: \n");
    scanf(" %d", &Pontos_Turísticos);

    Densidade_Populacional = População / Área;
    PIB_per_capita = PIB / População;

    printf("===============\n");
    printf("Carta 1: \n");
    printf("===============\n");
    printf("Estado: %s \n", Estado);
    printf("Cidade: %s \n", Cidade);
    printf("Código da carta: %s \n", Código);
    printf("População: %d \n", População);
    printf("Área: %.2f km² \n", Área);
    printf("PIB: %.2lf bilhões de reais \n", PIB); // Será exibido o valor por completo, para calcular de forma exata o PIB per capita.
    printf("Pontos Turísticos: %d \n", Pontos_Turísticos);
    printf("Densidade Populacional: %.2f hab/km² \n", Densidade_Populacional);
    printf("PIB per capita: %.2f reais \n", PIB_per_capita);
    limparBufferEntrada(); // Limpar o buffer de entrada para evitar problemas com fgets
   
    //Carta 2
    printf("===============\n");
    printf("Carta 2: \n");
    printf("===============\n");

    printf("Digite o estado (sem acento): \n"); // A Biblioteca não lê acentos, por isso a instrução para digitar sem acentos!
    fgets(Estado, sizeof(Estado), stdin);
    Estado[strcspn(Estado, "\n")] = '\0'; // Remover o caractere de nova linha lido pelo fgets
       
    printf("Digite a cidade: \n");
    fgets(Cidade, sizeof(Cidade), stdin);
    Cidade[strcspn(Cidade, "\n")] = '\0'; // Remover o caractere de nova linha lido pelo fgets

    printf("Digite o código da carta: \n");
    scanf(" %s", Código);

    printf("Digite a população (sem os pontos): \n"); // A Variável é do tipo inteiro, por isso a instrução para digitar sem os pontos!
    scanf(" %d", &População);

    printf("Digite a área (utilize vírgula como separador): \n");
    scanf(" %f", &Área);
    limparBufferEntrada(); // Limpar o buffer de entrada para evitar problemas com fgets
   
    printf("Digite o PIB: \n");
    scanf(" %lf", &PIB);

    printf("Digite os Pontos Turísticos: \n");
    scanf(" %d", &Pontos_Turísticos);

    Densidade_Populacional = População / Área;
    PIB_per_capita = PIB / População;

    printf("===============\n");
    printf("Carta 2: \n");
    printf("===============\n");
    printf("Estado: %s \n", Estado);
    printf("Cidade: %s \n", Cidade);
    printf("Código da carta: %s \n", Código);
    printf("População: %d \n", População);
    printf("Área: %.2f km² \n", Área);
    printf("PIB: %.2lf bilhões de reais \n", PIB); // Será exibido o valor por completo, para calcular de forma exata o PIB per capita.
    printf("Pontos Turísticos: %d \n", Pontos_Turísticos);
    printf("Densidade Populacional: %.2f hab/km² \n", Densidade_Populacional);
    printf("PIB per capita: %.2f reais \n", PIB_per_capita);
    limparBufferEntrada(); // Limpar o buffer de entrada para evitar problemas com fgets


    return 0;
   

}
