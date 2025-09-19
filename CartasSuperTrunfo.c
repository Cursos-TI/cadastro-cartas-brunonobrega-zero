#include <stdio.h>

int main(){

/*declarando variaveis*/  

int  populacao1,populacao2,populacao3,populacao4,populacao5,populacao6,populacao7,populacao8,carta1,carta2,carta3,carta4,carta5,carta6,carta7,carta8;
char estado1[2],estado2[2],estado3[2],estado4[2],estado5[2],estado6[2],estado7[2],estado8[2],codigo1[3],codigo2[3],codigo3[3],codigo4[3],codigo5[3],codigo6[3],codigo7[3],codigo8[3];
char cidade1[10],cidade2[10],cidade3[10],cidade4[10],cidade5[10],cidade6[10],cidade7[10],cidade8[10],turismo1,turismo2,turismo3,turismo4,turismo5,turismo6,turismo7,turismo8;
float área1,área2,área3,área4,área5,área6,área7,área8,pib1,pib2,pib3,pib4,pib5,pib6,pib7,pib8;                           
int opcao;
/* Fim da declaração de variaveis*/ 

/* Atribuindo valor a carta*/ 
    carta1=1;carta2=2;carta3=3;carta4=4;carta5=5;carta6=6;carta7=7;carta8=8;
/* Final Atribuição do valor a carta*/

/* Aviso para não utilizar espaço*/
    printf("Caso utilize nomes compostos não utilizar espaço, utilizar undeline ou hifen");
/* fim do aviso*/

/* recebendo o nome das cidades*/ 
  
    printf("Favor inserir nome da cidade sem espaços da carta nº 1:");
    scanf("%s", &cidade1);
    printf("Favor inserir nome da cidade sem espaços da carta nº 2:");
    scanf("%s", &cidade2);
    printf("Favor inserir nome da cidade sem espaços da carta nº 3:");
    scanf("%s", &cidade3);
    printf("Favor inserir nome da cidade sem espaços da carta nº 4:");
    scanf("%s", &cidade4);
    printf("Favor inserir nome da cidade sem espaços da carta nº 5:");
    scanf("%s", &cidade5);
    printf("Favor inserir nome da cidade sem espaços da carta nº 6:");
    scanf("%s", &cidade6);
    printf("Favor inserir nome da cidade sem espaços da carta nº 7:");
    scanf("%s", &cidade7);
    printf("Favor inserir nome da cidade sem espaços da carta nº 8:");
    scanf("%s\n", &cidade8);
/* Final recebido o nome das cidades*/


/* recebendo a sigla do estado de cada cidade*/ 
     printf("\nconsegue consultar a sigla no site:https://cidades.ibge.gov.br/ \n");

    printf("Favor inserir em qual sigla estado fica a cidade %s:", cidade1);
    scanf("%s", &estado1);
    printf("Favor inserir em qual sigla estado fica a cidade %s:", cidade2);
    scanf("%s", &estado2);
    printf("Favor inserir em qual sigla estado fica a cidade %s:", cidade3);
    scanf("%s", &estado3);
    printf("Favor inserir em qual sigla estado fica a cidade %s:", cidade4);
    scanf("%s", &estado4);
    printf("Favor inserir em qual sigla estado fica a cidade %s:", cidade5);
    scanf("%s", &estado5);
    printf("Favor inserir em qual sigla estado fica a cidade %s:", cidade6);
    scanf("%s", &estado6);
    printf("Favor inserir em qual sigla estado fica a cidade %s:", cidade7);
    scanf("%s", &estado7);
    printf("Favor inserir em qual sigla estado fica a cidade %s:", cidade8);
    scanf("%s\n", &estado8);
/* Siglas inseridas*/


/* recebendo a populção de cada cidade*/ 
    printf("consegue consultar a população no site:https://cidades.ibge.gov.br/ \n");

    printf("Favor inserir em qual a popução da cidade %s:", cidade1);
    scanf("%d", &populacao1);
    printf("Favor inserir em qual a popução da cidade %s:", cidade2);
    scanf("%d", &populacao2);
    printf("Favor inserir em qual a popução da cidade %s:", cidade3);
    scanf("%d", &populacao3);
    printf("Favor inserir em qual a popução da cidade %s:", cidade4);
    scanf("%d", &populacao4);
    printf("Favor inserir em qual a popução da cidade %s:", cidade5);
    scanf("%d", &populacao5);
    printf("Favor inserir em qual a popução da cidade %s:", cidade6);
    scanf("%d", &populacao6);
    printf("Favor inserir em qual a popução da cidade %s:", cidade7);
    scanf("%d", &populacao7);
    printf("Favor inserir em qual a popução da cidade %s:", cidade8);
    scanf("%d\n", &populacao8);
/* Populção recebida*/ 


/* recebendo a área de cada cidade*/ 
    printf("consegue consultar a área no site:https://cidades.ibge.gov.br/ \n");

    printf("Favor inserir em qual a área da cidade %s:", cidade1);
    scanf("%d", &área1);
    printf("Favor inserir em qual a área da cidade %s:", cidade2);
    scanf("%d", &área2);
    printf("Favor inserir em qual a área da cidade %s:", cidade3);
    scanf("%d", &área3);
    printf("Favor inserir em qual a área da cidade %s:", cidade4);
    scanf("%d", &área4);
    printf("Favor inserir em qual a área da cidade %s:", cidade5);
    scanf("%d", &área5);
    printf("Favor inserir em qual a área da cidade %s:", cidade6);
    scanf("%d", &área6);
    printf("Favor inserir em qual a área da cidade %s:", cidade7);
    scanf("%d", &área7);
    printf("Favor inserir em qual a área da cidade %s:", cidade8);
    scanf("%d\n", &área8);
/* Área recebida*/ 


/* recebendo a PIB de cada cidade*/ 
    printf("consegue consultar a área no site:https://cidades.ibge.gov.br/ \n");

    printf("Favor inserir em qual o PIB da cidade %s:", cidade1);
    scanf("%d", &pib1);
    printf("Favor inserir em qual o PIB da cidade %s:", cidade2);
    scanf("%d", &pib2);
    printf("Favor inserir em qual o PIB da cidade %s:", cidade3);
    scanf("%d", &pib3);
    printf("Favor inserir em qual o PIB da cidade %s:", cidade4);
    scanf("%d", &pib4);
    printf("Favor inserir em qual o PIB da cidade %s:", cidade5);
    scanf("%d", &pib5);
    printf("Favor inserir em qual o PIB da cidade %s:", cidade6);
    scanf("%d", &pib6);
    printf("Favor inserir em qual o PIB da cidade %s:", cidade7);
    scanf("%d", &pib7);
    printf("Favor inserir em qual o PIB da cidade %s:", cidade8);
    scanf("%d\n", &pib8);
/* PIB recebido*/ 




/* recebendo a quantidade de pontos turiscos de cada cidade de cada cidade*/ 
    printf("consegue consultar a quantidade de pontos turiscos no CAT - Centro de atendimento ao turismos de cada cidade. \n");

    printf("Favor inserir em qual a quantidade de pontos turiscos da cidade %s:", cidade1);
    scanf("%d", &turismo1);
    printf("Favor inserir em qual a quantidade de pontos turiscos da cidade %s:", cidade2);
    scanf("%d", &turismo2);
    printf("Favor inserir em qual a quantidade de pontos turiscos da cidade %s:", cidade3);
    scanf("%d", &turismo3);
    printf("Favor inserir em qual a quantidade de pontos turiscos da cidade %s:", cidade4);
    scanf("%d", &turismo4);
    printf("Favor inserir em qual a quantidade de pontos turiscos da cidade %s:", cidade5);
    scanf("%d", &turismo5);
    printf("Favor inserir em qual a quantidade de pontos turiscos da cidade %s:", cidade6);
    scanf("%d", &turismo6);
    printf("Favor inserir em qual a quantidade de pontos turiscos da cidade %s:", cidade7);
    scanf("%d", &turismo7);
    printf("Favor inserir em qual a quantidade de pontos turiscos da cidade %s:", cidade8);
    scanf("%d\n", &turismo8);
/* Quantidade de pontos turiscos recebidos recebido*/ 

/*código de cada carta*/
/*codigo1[3]=estado1+1;codigo2[3]=estado2+2;codigo3[3]=estado3+3;codigo4[3]=estado4+4;
codigo5[3]=estado5+1;codigo6[3]=estado6+2;codigo7[3]=estado7+3;codigo8[3]=estado8+4;*/
/*códigos atribuidos de cada carta*/

/*código de cada carta*/
printf("Digite o número da carta de 1 até 8: ");
    scanf("%d", &opcao);

           switch(opcao) {
                case 1:
                    printf("A carta escolinda foi:\n- Carta %d:\n- Código da carta:%s\n- Estado:%s\n- Nome da Cidade:%s\n",carta1,codigo1,estado1,cidade1);
                    printf("População%d:\n- Área:%d\n- PIB:%d\n- Numero de pontos turisticos:%d\n", populacao1,área1,pib1,turismo1);                
                break;
                case 2:
                    printf("A carta escolinda foi:\n- Carta %d:\n- Código da carta:%s\n- Estado:%s\n- Nome da Cidade:%s\n", carta2,codigo2,estado2,cidade2);
                    printf("População%d:\n- Área:%d\n- PIB:%d\n- Numero de pontos turisticos:%d\n", populacao2,área2,pib2,turismo2); 
                break;
                case 3:
                    printf("A carta escolinda foi:\n- Carta %d:\n- Código da carta:%s\n- Estado:%s\n- Nome da Cidade:%s\n",carta3,codigo3,estado3,cidade3);
                    printf("População%d:\n- Área:%d\n- PIB:%d\n- Numero de pontos turisticos:%d\n", populacao3,área3,pib3,turismo3); 
                break;
                case 4:
                    printf("A carta escolinda foi:\n- Carta %d:\n- Código da carta:%s\n- Estado:%s\n- Nome da Cidade:%s\n",carta4,codigo4,estado4,cidade4);
                    printf("População%d:\n- Área:%d\n- PIB:%d\n- Numero de pontos turisticos:%d\n", populacao4,área4,pib4,turismo4); 
                break;
                case 5:
                    printf("A carta escolinda foi:\n- Carta %d:\n- Código da carta:%s\n- Estado:%s\n- Nome da Cidade:%s\n",carta5,codigo5,estado5,cidade5);
                    printf("População%d:\n- Área:%d\n- PIB:%d\n- Numero de pontos turisticos:%d\n", populacao5,área5,pib5,turismo5); 
                break;
                case 6:
                    printf("A carta escolinda foi:\n- Carta %d:\n- Código da carta:%s\n- Estado:%s\n- Nome da Cidade:%s\n", carta6,codigo6,estado6,cidade6);
                    printf("População%d:\n- Área:%d\n- PIB:%d\n- Numero de pontos turisticos:%d\n", populacao6, área6,pib6,turismo6);
                break;
                case 7:
                    printf("A carta escolinda foi:\n- Carta %d:\n- Código da carta:%s\n- Estado:%s\n- Nome da Cidade:%s\n", carta7,codigo7,estado7,cidade7);
                    printf("População%d:\n- Área:%d\n- PIB:%d\n- Numero de pontos turisticos:%d\n", populacao7,área7,pib7,turismo7);
                break;
                case 8:
                    printf("A carta escolinda foi:\n- Carta %d:\n- Código da carta:%s\n- Estado:%s\n- Nome da Cidade:%s\n", carta8,codigo8,estado8,cidade8);
                    printf("População%d:\n- Área:%d\n- PIB:%d\n- Numero de pontos turisticos:%d\n", populacao8,área8,pib8,turismo8);
                break;
        default:
            printf("\nOpção inválida. Tente novamente.\n");
            break;
           }
          
      

/*código de cada carta*/
 
}