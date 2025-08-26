#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    char estado1;           // Armazena a letra do estado (A até H)
    char codigo1[4];        // Armazena o código da carta (ex: A01), string de 3 chars + '\0'
    char cidade1[50];       // Armazena o nome da cidade (string até 49 caracteres + '\0')
    int populacao1;         // Número de habitantes da cidade
    float area1;            // Área em km² da cidade
    float pib1;             // PIB da cidade em bilhões de reais
    int pontos1;            // Quantidade de pontos turísticos

    // ============================
    // Declaração das variáveis da Carta 2
    // ============================
    char estado2;           
    char codigo2[4];        
    char cidade2[50];       
    int populacao2;         
    float area2;            
    float pib2;             
    int pontos2;            

    // ============================
    // Cadastro da Carta 1
    // ============================

    printf("=== Cadastro da Carta 1 ===\n");       // Mensagem para orientar o usuário
    printf("Estado (A-H): ");                      // Pede a letra do estado
    scanf(" %c", &estado1);                        // Lê um caractere do teclado e guarda em estado1

    printf("Codigo da carta (ex: A01): ");         // Pede o código da carta
    scanf("%s", codigo1);                          // Lê uma string (sem espaços) e guarda em codigo1

    printf("Nome da cidade: ");                    // Pede o nome da cidade
    scanf(" %[^\n]", cidade1);                     // Lê a string até a quebra de linha (permite espaços no nome)

    printf("Populacao: ");                         // Pede a população
    scanf("%d", &populacao1);                      // Lê um número inteiro e guarda em populacao1

    printf("Area (em km2): ");                     // Pede a área da cidade
    scanf("%f", &area1);                           // Lê um número decimal e guarda em area1

    printf("PIB (em bilhoes de reais): ");         // Pede o PIB da cidade
    scanf("%f", &pib1);                            // Lê um número decimal e guarda em pib1

    printf("Numero de pontos turisticos: ");       // Pede o número de pontos turísticos
    scanf("%d", &pontos1);                         // Lê um número inteiro e guarda em pontos1

    // ============================
    // Cadastro da Carta 2
    // ============================

    printf("\n=== Cadastro da Carta 2 ===\n");     // Mensagem para orientar o usuário
    printf("Estado (A-H): ");                      
    scanf(" %c", &estado2);                        

    printf("Codigo da carta (ex: B02): ");         
    scanf("%s", codigo2);                          

    printf("Nome da cidade: ");                    
    scanf(" %[^\n]", cidade2);                     

    printf("Populacao: ");                         
    scanf("%d", &populacao2);                      

    printf("Area (em km2): ");                     
    scanf("%f", &area2);                           

    printf("PIB (em bilhoes de reais): ");         
    scanf("%f", &pib2);                            

    printf("Numero de pontos turisticos: ");       
    scanf("%d", &pontos2);                         

    // ============================
    // Exibição das informações
    // ============================

    printf("\n=== Carta 1 ===\n");                 // Imprime o título da Carta 1
    printf("Estado: %c\n", estado1);               // Mostra o estado cadastrado
    printf("Codigo: %s\n", codigo1);               // Mostra o código da carta
    printf("Nome da Cidade: %s\n", cidade1);       // Mostra o nome da cidade
    printf("Populacao: %d\n", populacao1);         // Mostra a população
    printf("Area: %.2f km2\n", area1);             // Mostra a área com 2 casas decimais
    printf("PIB: %.2f bilhoes de reais\n", pib1);  // Mostra o PIB formatado
    printf("Numero de Pontos Turisticos: %d\n", pontos1); // Mostra os pontos turísticos

    printf("\n=== Carta 2 ===\n");                 // Imprime o título da Carta 2
    printf("Estado: %c\n", estado2);               
    printf("Codigo: %s\n", codigo2);               
    printf("Nome da Cidade: %s\n", cidade2);       
    printf("Populacao: %d\n", populacao2);         
    printf("Area: %.2f km2\n", area2);             
    printf("PIB: %.2f bilhoes de reais\n", pib2);  
    printf("Numero de Pontos Turisticos: %d\n", pontos2); 

    return 0;
}
