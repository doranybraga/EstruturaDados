#include <sdtio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
    //cria um ponteiro para um inteiro
    //armazena o local de memoria alocado
    int* numero;
    
    //aloca um espa�o de memoria
    //converte a posi��o de memoria em um tipo de ponteiro inteiro
    //armazena no ponteiro a posi��o de memoria
    numero=(int*) malloc(sizeof(int));
    
    //imprime a posi��o de memoria de numero
    printf("posi��o na memoria: 0x%x\n", numero);
    
    //manipula o valor apontado por numero
    *numero = 56;
    
    //imprime o valor
    printf("%d\n", *numero);
    
    //libera a memoria alocada
    free(numero);
    
    system ("PAUSE");
    return 0;
