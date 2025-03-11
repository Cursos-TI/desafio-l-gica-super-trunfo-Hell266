#include <stdio.h>
int main(){

//declaração de variáveis cidade/carta 1 
char estado[4]; char codigo[4]; char cidade[40];
int populacao; int turisticos;
float area; float PIB; /* bilhoes*/ float PIBpercapita; float densidadepop;

//declaração de variáveis cidade/carta 2 
char Estado[4]; char Codigo[4];  char Cidade[40];
int Populacao; int Turisticos;
float Area; float PIBcarta2;/* bilhoes*/ float PIBpercapita2; float densidadepop2;

printf("BEM VINDO(A) AO SISTEMA DE CADASTRO DAS CARTAS DO JOGO SUPERTRUNFO.\n");
printf("\n");
printf("Por favor, insira as informações corretamente para um melhor funcionamento do programa.\n");
printf("\n");

printf("PRIMEIRA CARTA\n");
//entrada e saida de dados char//
printf("Digite a letra (A a H) do seu Estado: \n");
scanf(" %s", &estado);
printf("Digite o código com a letra do seu estado e a numeração (01 a 04) da carta:\n");
scanf(" %s", &codigo);
printf("Nome da cidade:\n");
scanf(" %s", &cidade);
//entrada e saída de dados int//
printf("Populaçao da cidade:\n");
scanf(" %d", &populacao);
printf("Pontos turísticos:\n");
scanf(" %d", &turisticos);
//entrada e saída de dados float//
printf("Area da cidade:\n");
scanf(" %f", &area);
printf("digite (xxx.xx bilhoes) para prosseguir\n"
       "PIB: \n");
scanf(" %f %*s", &PIB);

printf("SEGUNDA CARTA\n");
//entrada e saida de dados char//
printf("Digite a letra (A a H) do seu Estado: \n");
scanf(" %s", &Estado);
printf("Digite o código com a letra do seu estado e a numeração (01 a 04) da carta: \n");
scanf(" %s", &Codigo);
printf("Nome da cidade:\n");
scanf(" %s", &Cidade);
//entrada e saída de dados int//
printf("Populaçao da cidade:\n");
scanf(" %d", &Populacao);
printf("Pontos turísticos:\n");
scanf(" %d", &Turisticos);
//entrada e saída de dados float//
printf("Area da cidade:\n");
scanf(" %f", &Area);
printf("digite (xxx.xx bilhoes) para prosseguir\n"
       "PIB: \n");
scanf(" %f %*s", &PIBcarta2);

    printf("IMPRESSÃO DAS CARTAS\n");
    printf("\n");
//impressao das carta//
    printf("CARTA DA PRIMEIRA CIDADE\n");
    printf("Estado: %s\n", estado);
    printf("Código da carta: %s\n", codigo);
    printf("Nome da cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área :%.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", PIB);
    printf("Número de pontos turísticos: %d\n", turisticos);

//Operações  matemáticas//
    PIB = (PIB * 1000000000);
    PIBpercapita = (float) PIB / populacao;
    densidadepop = (float) populacao / area;
//impressão das novas adições atualizadas//
    printf("Densidade populacional: %.2f hab/km²\n", densidadepop);
    printf("PIB per capita: %.2f reais\n", PIBpercapita);
    printf("\n");

//impressao das carta da segunda cidade//
    printf("CARTA DA SEGUNDA CIDADE\n");
    printf("Estado: %s\n", Estado);
    printf("Código da carta: %s\n", Codigo);
    printf("Nome da cidade: %s\n", Cidade);
    printf("População: %d\n", Populacao);
    printf("Área :%.2f km²\n", Area);
    printf("PIB: %.2f bilhões de reais\n", PIBcarta2);
    printf("Número de pontos turísticos: %d\n", Turisticos);

//Operações  matemáticas//
    PIBcarta2 = (PIBcarta2 * 1000000000);
    PIBpercapita2 = (float) PIBcarta2 / Populacao;
    densidadepop2 = (float) Populacao / Area;
//impressão das novas adições atualizadas//
    printf("Densidade populacional: %.2f hab/km²\n", densidadepop2);
    printf("PIB per capita: %.2f reais\n", PIBpercapita2);
    printf("\n");
    printf("\n");

    printf("COMPARAÇÃO DAS CARTAS (VENCEDOR)\n"); int comparacao;//decisão do vencedor
    printf("\n");
    printf("Por favor, escolha o atributo que você deseja fazer a comparação.\n");
    do{
            printf("Escolha o atributo que você deseja comparar.\n");
            printf("\n");
          //menu para a escolha dos atributos
                        printf("1. Para o atributo população.\n");
                        printf("2. Para o atributo Área.\n");
                        printf("3. Para o atributo PIB.\n");
                        printf("4. Para o atributo PIB per capita.\n");
                        printf("5. Para o atributo Densidade populacional.\n");
                        printf("6. Para o atributo pontos turisticos.\n");
                        printf("0. Para sair do menu.\n");
                        scanf("%d", &comparacao);
                           if(comparacao != 1 && comparacao != 2 &&
                              comparacao != 3 && comparacao != 4 &&
                              comparacao != 5 && comparacao != 6 && comparacao != 0){
                                  printf("Escolha inválida!, por favor escolha uma opção válida!\n");
                            }else if(comparacao == 0){
                                  printf("Deseja sair?\n");
                                  break;
                        }
          }while(comparacao != 1 && comparacao != 2 &&
                 comparacao != 3 && comparacao != 4 &&
                 comparacao != 5 && comparacao != 6 && comparacao != 0);//método de segurança para a validação das opções de escolha
          printf("\n");

            //logica da comparação usando switch e operadores ternarios
    printf("\n");
switch (comparacao){
            case 1:
                  printf("Você escolheu o atributo população! vence a carta que tiver a maior população\n");
                  printf("Comparação das cartas: Atributo - População\n");
                  printf("\n");
                  printf("Cidade - %s (População): %d\n", cidade, populacao);
                  printf("Cidade 2 - %s (População): %d\n", Cidade, Populacao);
            populacao > Populacao ? printf("Carta 1 ganhou!\n"): 
           (Populacao > populacao ? printf("Carta 2 ganhou!\n"): printf("Houve um empate!\n")); printf("\n");
       break;
            case 2:
                  printf("Você escolheu o atributo área! vence a carta que tiver a maior área\n");
                  printf("Comparação das cartas: Atributo - Área\n");
                  printf("\n");
                  printf("Cidade - %s (Área): %.2f km²\n", cidade, area);
                  printf("Cidade 2 - %s (Área): %.2f km²\n", Cidade, Area);
            area > Area ? printf("Carta 1 ganhou!\n"): 
           (Area > area ? printf("Carta 2 ganhou!\n"): printf("Houve um empate!\n"));printf("\n");
       break;
            case 3:
                  printf("Você escolheu o atributo PIB! vence a carta que tiver o maior PIB\n");
                  printf("Comparação das cartas: Atributo - PIB\n");
                  printf("\n");
                  PIB = (float)(PIB / 1000000000);
                  PIBcarta2 = (float)(PIBcarta2 / 1000000000); 
                  printf("Cidade - %s (PIB): %.2f bilhões de reais\n", cidade, PIB);
                  printf("Cidade 2 - %s (PIB): %.2f bilhões de reais\n", Cidade, PIBcarta2);
            PIB > PIBcarta2 ? printf("Carta 1 ganhou!\n"): 
           (PIBcarta2 > PIB ? printf("Carta 2 ganhou!\n"): printf("Houve um empate!\n"));printf("\n");
       break;
            case 4:
                  printf("Você escolheu o atributo PIBpercapita! vence a carta que tiver o maior PIBpercapita\n");
                  printf("Comparação das cartas: Atributo - PIB per capita\n");
                  printf("\n");
                  printf("Cidade - %s (PIBpercapita): %.2f reais\n", cidade, PIBpercapita);
                  printf("Cidade 2 - %s (PIBpercapita): %.2f reais\n", Cidade, PIBpercapita2);
            PIBpercapita > PIBpercapita2 ? printf("Carta 1 ganhou!\n"): 
           (PIBpercapita2 > PIBpercapita ? printf("Carta 2 ganhou!\n"): printf("Houve um empate!\n"));printf("\n");
       break;
            case 5:
                  printf("Você escolheu o atributo densidade populacional! vence a carta que tiver a menor densidade\n");
                  printf("Comparação das cartas: Atributo - Densidade populacional\n");
                  printf("\n");
                  printf("Cidade - %s (Densidade populacional): %.2f hab/km²\n", cidade, densidadepop);
                  printf("Cidade 2 - %s (Densidade populacional): %.2f hab/km²\n", Cidade, densidadepop2);
            densidadepop < densidadepop2 ? printf("Carta 1 ganhou!\n"): 
           (densidadepop2 < densidadepop ? printf("Carta 2 ganhou!\n"): printf("Houve um empate!\n"));printf("\n");
       break;
            case 6:
                  printf("Você escolheu o atributo pontos turísticos! vence a carta que tiver mais pontos turísticos\n");
                  printf("Comparação das cartas: Atributo - Pontos turísticos\n");
                  printf("\n");
                  printf("Cidade - %s (Pontos turisticos): %d\n", cidade, turisticos);
                  printf("Cidade 2 - %s (Pontos turisticos): %d\n", Cidade, Turisticos);
            turisticos > Turisticos ? printf("Carta 1 ganhou!\n"): 
           (Turisticos > Turisticos ? printf("Carta 2 ganhou!\n"): printf("Houve um empate!\n"));printf("\n");
       break;
      default:
       break;
}
      printf("Deseja jogar novamente?\n digite (1) para sim, e (0) para não\n");int jogarnovamente;
      scanf("%d", &jogarnovamente); 
      if(jogarnovamente == 1){//verificação se o jogador quer continuar
      printf("Bem vindo(a) de volta, reiniciando o jogo\n");
      printf("\n"); return main();
      }else{
            printf("Fim de jogo, até a próxima...\n");
      }
return 0;
}
