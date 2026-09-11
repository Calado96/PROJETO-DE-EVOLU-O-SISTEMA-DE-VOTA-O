// Projeto sistema de votação fase inicial Implementação da logica e evolução do programa.
#include <stdio.h>
 int main(){
// Área de declaração das variaveis.    
 int NumeroCandidato1 = 22;
 int NumeroCandidato2 = 13;
 int votoDigitado;
 // Variáveis contoadora de voto
 int TotalVotos1 = 0;
 int TotalVotos = 0;
 int TotalVotosNulo = 0;


 
     //Inicio do programa solicitando que a pessoa digite o voto.   
    printf("SEU VOTO PARA PRESIDENTE\n");
    scanf("%d", &votoDigitado);


    //Estrutura do sistema de votação.
    if (votoDigitado == NumeroCandidato1)
    {
      printf("Você votou no candidato 1\n");

    } 
    else if (votoDigitado == NumeroCandidato2)
    {
        printf("Você votou no candidato 2\n");
    } 
    else {
    
        printf("Voto Nulo!\n");
    }

  



    return 0;

 }
