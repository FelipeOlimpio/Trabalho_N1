#include <stdio.h>
#include <math.h>  
#include <string.h> 


int func_val(int x, int b) {
    double a0 = 186.752, a1 = -148.235, a2 = 34.5049, a3 = -3.5091;
    double a4 = 0.183166, a5 = -0.00513554, a6 = 0.0000735464, a7 = -4.22038e-7;

 
    double result = a0 + (a1 + b) * x + a2 * pow(x, 2) + a3 * pow(x, 3) + 
                    a4 * pow(x, 4) + a5 * pow(x, 5) + a6 * pow(x, 6) + a7 * pow(x, 7);

    
    return round(result) == 0 ? 0 : 1;
}


int hex_to_decimal(char hex[]) {
    int decimal;
    sscanf(hex, "%2x", &decimal);  
    return decimal;
}

int main() {
    int num_mensagens, b;
    char mensagem[101];  

    
    printf("Digite o número de mensagens: ");
    scanf("%d", &num_mensagens);

    for (int i = 0; i < num_mensagens; i++) {
        
        printf("Digite o valor de b: ");
        scanf("%d", &b);

        printf("Digite a mensagem em hexadecimal: ");
        scanf("%s", mensagem);

        printf("Mensagem decodificada: ");

        
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
