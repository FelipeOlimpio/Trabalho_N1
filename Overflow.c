#include <stdio.h>
#include <limits.h>

int main() {
   
    int valor_inteiro = INT_MAX;  
    printf("Valor original de valor_inteiro: %d\n", valor_inteiro);

    
    valor_inteiro += 1;  
    printf("Valor após overflow: %d\n", valor_inteiro);

    
    char valor_char = CHAR_MAX;  
    printf("Valor original de valor_char: %d\n", valor_char);

    
    valor_char += 1;  
    printf("Valor após overflow: %d\n", valor_char);

    
    unsigned int valor_unsigned = UINT_MAX;  
    printf("Valor original de valor_unsigned: %u\n", valor_unsigned);

  
    valor_unsigned += 1;  
    printf("Valor após overflow: %u\n", valor_unsigned);

    return 0;
}
