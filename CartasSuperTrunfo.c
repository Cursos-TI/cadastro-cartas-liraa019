#include <stdio.h> // Biblioteca para entrada e saída de dados
#include <string.h> // Biblioteca para manipulação de strings


// --- Função para limpar o buffer de entrada ---
    void limparBufferEntrada() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
    }

int main() {
    int Carta;
    char Estado [20]; // Optei por utilizar string em Estado, pois o especificador de formato %c imprime apenas um caractere, enquanto o %s é utilizado para imprimir uma string (sequência de caracteres).
    char Código [20]; 
    char Cidade [20];
    int População_Carta1, População_Carta2; // (em milhões de habitantes);
    float Área_Carta1, Área_Carta2; // (em km²);
    double PIB_Carta1, PIB_Carta2; //(em bilhões de reais);
    int Pontos_Turísticos_Carta1, Pontos_Turísticos_Carta2;
    float Densidade_Populacional_Carta1, Densidade_Populacional_Carta2; // (em habitantes por km²);
    float PIB_per_capita_Carta1, PIB_per_capita_Carta2; // (em reais);
    float Inverso_Densidade_Populacional_Carta1, Inverso_Densidade_Populacional_Carta2; // Variáveis para armazenar o valor do inverso da densidade populacional, que é um dos atributos para calcular o Super Poder.
    double Super_Poder_Carta1, Super_Poder_Carta2; // Variáveis para armazenar o valor do Super Poder, que é a soma de todos os atributos.
   
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
    scanf(" %d", &População_Carta1);
   
    printf("Digite a área (utilize vírgula como separador): \n");
    scanf(" %f", &Área_Carta1);
    limparBufferEntrada(); // Limpar o buffer de entrada para evitar problemas com fgets
   
    printf("Digite o PIB: \n");
    scanf(" %lf", &PIB_Carta1);
    
    printf("Digite os Pontos Turísticos: \n");
    scanf(" %d", &Pontos_Turísticos_Carta1);

    Densidade_Populacional_Carta1 = População_Carta1 / Área_Carta1;
    PIB_per_capita_Carta1 = PIB_Carta1 / População_Carta1;
    Inverso_Densidade_Populacional_Carta1 = 1 / Densidade_Populacional_Carta1; // Cálculo do inverso da densidade populacional, que é um dos atributos para calcular o Super Poder.
    Super_Poder_Carta1 = (float)Inverso_Densidade_Populacional_Carta1 + (float)População_Carta1 + Área_Carta1 + PIB_Carta1 + (float)Pontos_Turísticos_Carta1 + PIB_per_capita_Carta1; // Cálculo do Super Poder como a soma de todos os atributos.
   
    printf("===============\n");
    printf("Carta 1: \n");
    printf("===============\n");
    printf("Estado: %s \n", Estado);
    printf("Cidade: %s \n", Cidade);
    printf("Código da carta: %s \n", Código);
    printf("População: %d \n", População_Carta1);
    printf("Área: %.2f km² \n", Área_Carta1);
    printf("PIB: %.2lf bilhões de reais \n", PIB_Carta1); // Será exibido o valor por completo, para calcular de forma exata o PIB per capita.
    printf("Pontos Turísticos: %d \n", Pontos_Turísticos_Carta1);
    printf("Densidade Populacional: %.2f hab/km² \n", Densidade_Populacional_Carta1);
    printf("PIB per capita: %.2f reais \n", PIB_per_capita_Carta1);
    printf("Inverso da Densidade Populacional: %.6f \n", Inverso_Densidade_Populacional_Carta1); // Exibir o valor do inverso da densidade populacional com mais casas decimais para melhor visualização.
    printf("Super Poder Carta 1: %.2f \n", Super_Poder_Carta1);
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
    scanf(" %d", &População_Carta2);

    printf("Digite a área (utilize vírgula como separador): \n");
    scanf(" %f", &Área_Carta2);
    limparBufferEntrada(); // Limpar o buffer de entrada para evitar problemas com fgets
   
    printf("Digite o PIB: \n");
    scanf(" %lf", &PIB_Carta2);

    printf("Digite os Pontos Turísticos: \n");
    scanf(" %d", &Pontos_Turísticos_Carta2);

    Densidade_Populacional_Carta2 = População_Carta2 / Área_Carta2;
    PIB_per_capita_Carta2 = PIB_Carta2 / População_Carta2;
    Inverso_Densidade_Populacional_Carta2 = 1 / Densidade_Populacional_Carta2; // Cálculo do inverso da densidade populacional, que é um dos atributos para calcular o Super Poder.
    Super_Poder_Carta2 = (float)Inverso_Densidade_Populacional_Carta2 + (float)População_Carta2 + Área_Carta2 + PIB_Carta2 + (float)Pontos_Turísticos_Carta2 + PIB_per_capita_Carta2; // Cálculo do Super Poder como a soma de todos os atributos.
       
    printf("===============\n");
    printf("Carta 2: \n");
    printf("===============\n");
    printf("Estado: %s \n", Estado);
    printf("Cidade: %s \n", Cidade);
    printf("Código da carta: %s \n", Código);
    printf("População: %d \n", População_Carta2);
    printf("Área: %.2f km² \n", Área_Carta2);
    printf("PIB: %.2lf bilhões de reais \n", PIB_Carta2); // Será exibido o valor por completo, para calcular de forma exata o PIB per capita.
    printf("Pontos Turísticos: %d \n", Pontos_Turísticos_Carta2);
    printf("Densidade Populacional: %.2f hab/km² \n", Densidade_Populacional_Carta2);
    printf("PIB per capita: %.2f reais \n", PIB_per_capita_Carta2);
    printf("Inverso da Densidade Populacional: %.6f \n", Inverso_Densidade_Populacional_Carta2); // Exibir o valor do inverso da densidade populacional com mais casas decimais para melhor visualização.
    printf("Super Poder Carta 2: %.2f \n", Super_Poder_Carta2);
    limparBufferEntrada(); // Limpar o buffer de entrada para evitar problemas com fgets

    //COMPARAÇÃO DAS CARTAS
    int Resultado_Super_Poder = (float)Super_Poder_Carta1 > (float)Super_Poder_Carta2; // Comparação dos Super Poderes das cartas, resultando em 1 se a carta 1 for maior, -1 se a carta 2 for maior e 0 se forem iguais.
    int Resultado_População = (int)População_Carta1 > (int)População_Carta2; // Comparação das populações das cartas, resultando em 1 se a carta 1 for maior, -1 se a carta 2 for maior e 0 se forem iguais.
    int Resultado_Área = (float)Área_Carta1 > (float)Área_Carta2; // Comparação das áreas das cartas, resultando em 1 se a carta 1 for maior, -1 se a carta 2 for maior e 0 se forem iguais.
    int Resultado_PIB = (float)PIB_Carta1 > (float)PIB_Carta2; // Comparação dos PIBs das cartas, resultando em 1 se a carta 1 for maior, -1 se a carta 2 for maior e 0 se forem iguais.
    int Resultado_Pontos_Turísticos = (float)Pontos_Turísticos_Carta1 > (float)Pontos_Turísticos_Carta2; // Comparação dos pontos turísticos das cartas, resultando em 1 se a carta 1 for maior, -1 se a carta 2 for maior e 0 se forem iguais.
    int Resultado_PIB_per_capita = (float)PIB_per_capita_Carta1 > (float)PIB_per_capita_Carta2; // Comparação dos PIBs per capita das cartas, resultando em 1 se a carta 1 for maior, -1 se a carta 2 for maior e 0 se forem iguais.
    int Resultado_Densidade_Populacional = (float)Inverso_Densidade_Populacional_Carta1 < (float)Inverso_Densidade_Populacional_Carta2; // Comparação das densidades populacionais das cartas, resultando em 1 se a carta 1 for menor, -1 se a carta 2 for menor e 0 se forem iguais.

    printf("===============\n");
    printf("Comparação das Cartas: \n");
    printf("===============\n");
    
    printf("População:A carta %d venceu (%d)\n", (População_Carta1 > Pontos_Turísticos_Carta2) ? 1 : 2, Resultado_População); 
    printf("Área:A carta %d venceu (%d)\n", (Área_Carta1 > Área_Carta2) ? 1 : 2, Resultado_Área);
    printf("PIB:A carta %d venceu (%d)\n", (PIB_Carta1 > PIB_Carta2) ? 1 : 2, Resultado_PIB);
    printf("Pontos Turísticos:A carta %d venceu (%d)\n", (Pontos_Turísticos_Carta1 > Pontos_Turísticos_Carta2) ? 1 : 2, Resultado_Pontos_Turísticos);
    printf("Densidade Populacional:A carta %d venceu (%d)\n", (Inverso_Densidade_Populacional_Carta1 < Inverso_Densidade_Populacional_Carta2) ? 1 : 2, Resultado_Densidade_Populacional);
    printf("PIB per capita:A carta %d venceu (%d)\n", (PIB_per_capita_Carta1 > PIB_per_capita_Carta2) ? 1 : 2, Resultado_PIB_per_capita);
    printf("Super Poder:A carta %d venceu (%d)\n", (Super_Poder_Carta1 > Super_Poder_Carta2) ? 1 : 2, Resultado_Super_Poder);

    limparBufferEntrada(); // Limpar o buffer de entrada para evitar problemas com fgets
    
    return 0;

}
