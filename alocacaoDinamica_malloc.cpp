#include <sdtio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
    //cria um ponteiro para um inteiro
    //armazena o local de memoria alocado
    int* numero;
    
    //aloca um espaço de memoria
    //converte a posição de memoria em um tipo de ponteiro inteiro
    //armazena no ponteiro a posição de memoria
    numero=(int*) malloc(sizeof(int));
    
    //imprime a posição de memoria de numero
    printf("posição na memoria: 0x%x\n", numero);
    
    //manipula o valor apontado por numero
    *numero = 56;
    
    //imprime o valor
    printf("%d\n", *numero);
    
    //libera a memoria alocada
    free(numero);
    
    system ("PAUSE");
    return 0;
