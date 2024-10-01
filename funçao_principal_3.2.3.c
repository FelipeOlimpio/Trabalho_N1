#include <stdio.h>
#include <string.h>
#include "remove.h"  // Inclui a função `func_val` implementada em 3.2.2


int hex_to_decimal(char hex[]) {
    int decimal;
    sscanf(hex, "%2x", &decimal);  
    return decimal;
}

int main() {
    int num_testes, b;
    char mensagem[101];  

    
    scanf("%d", &num_testes);  

    
    for (int i = 0; i < num_testes; i++) {
        
        scanf("%d", &b);       
        scanf("%s", mensagem); 

        
        for (int j = 0; j < strlen(mensagem); j += 2) {
            char hex[3] = {mensagem[j], mensagem[j + 1], '\0'};  
            int dec_value = hex_to_decimal(hex);                 

            
            if (func_val(j / 2 + 1, b) && dec_value != 0) {
                printf("%c", dec_value);  
            }

            
            if (dec_value == 0) break;
        }

        printf("\n");  
    }

    return 0;
}
