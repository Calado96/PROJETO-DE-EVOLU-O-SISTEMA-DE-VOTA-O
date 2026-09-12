// Projeto sistema de votação fase inicial Implementação da logica e evolução do programa.
//Fase 2 Implementação do laço de repetição While.
#include <stdio.h>
 int main(){
// Área de declaração das variaveis.    
 int NumeroCandidato1 = 22;
 int NumeroCandidato2 = 13;
 int votoDigitado;
 // Variáveis contoadora de voto
 int TotalVotos1 = 0;
 int TotalVotos2 = 0;
 int TotalVotosNulo = 0;
 int VotBranco = 0;

    //Inicio do programa solicitando que a pessoa digite o voto.   
    //Área do laço de Repetição
    while (1)
    {
      printf("SEU VOTO PARA PRESIDENTE\n");
        scanf("%d", &votoDigitado);
        printf("\n");

        //Estrutura do sistema de votação.
        if (votoDigitado == -1)
        {
            printf("Votação Encerrada!\n");
            printf("\n");
           break;
        } 
        else if (votoDigitado == NumeroCandidato2)
        {
            printf("Você votou no candidato 2\n");
            TotalVotos2 ++;
            printf("\n");
        } 
        else if (votoDigitado == NumeroCandidato1)
        {
            printf("Você votou no candidato 1\n");
            TotalVotos1 ++;
            printf("\n");
        }
        else if (votoDigitado == 0)
        {
            printf("Você votou em Branco!\n");
            VotBranco ++;
            printf("\n");
        }
        
        
         else {
    
            printf("Voto Nulo!\n");
            TotalVotosNulo ++;
        }
        printf("\n");

    } 
        printf("Resultado da Votação\n");
        printf("Candidato 1: %d Votos\n ", TotalVotos1);
        printf("\n");
        printf("Candidato 2: %d Votos\n", TotalVotos2);
        printf("\n");
        printf("Votos Nulos: %d Votos\n", TotalVotosNulo);
        printf("\n");
        printf("Votos Branco: %d Votos\n", VotBranco);
         
  



    return 0;

 }
