#include <stdio.h>

int main() {
    float N1, N2, PPD, N3 = 0, EU = 0, nota_final;
    int fez_EU, fez_N3;

    
    printf("Digite a nota N1 (0 a 4.5): ");
    scanf("%f", &N1);
    if (N1 < 0 || N1 > 4.5) {
        printf("Erro: Nota N1 inválida\n");
        return 3;  
    }

    printf("Digite a nota N2 (0 a 4.5): ");
    scanf("%f", &N2);
    if (N2 < 0 || N2 > 4.5) {
        printf("Erro: Nota N2 inválida\n");
        return 3;  
    }

    printf("Digite a nota PPD (0 a 1): ");
    scanf("%f", &PPD);
    if (PPD < 0 || PPD > 1) {
        printf("Erro: Nota PPD inválida\n");
        return 3;  
    }

    
    printf("O aluno fez o Exame Unificado? (0 - não, 1 - sim): ");
    scanf("%d", &fez_EU);
    if (fez_EU == 1) {
        printf("Digite a nota do Exame Unificado (0 a 10): ");
        scanf("%f", &EU);
        if (EU < 0 || EU > 10) {
            printf("Erro: Nota do Exame Unificado inválida\n");
            return 3;  
        }
    } else if (fez_EU != 0) {
        printf("Erro: Valor inválido para Exame Unificado\n");
        return 3;  
    }

    
    printf("O aluno fez a N3? (0 - não, 1 - sim): ");
    scanf("%d", &fez_N3);
    if (fez_N3 == 1) {
        printf("Digite a nota N3 (0 a 4.5): ");
        scanf("%f", &N3);
        if (N3 < 0 || N3 > 4.5) {
            printf("Erro: Nota N3 inválida\n");
            return 3;  
        }

        
        if (N3 > N1) {
            N1 = N3;
        } else if (N3 > N2) {
            N2 = N3;
        }
    } else if (fez_N3 != 0) {
        printf("Erro: Valor inválido para N3\n");
        return 3;  
    }

    
    nota_final = N1 + N2 + PPD;

    
    if (nota_final > 10) {
        nota_final = 10;
    }

    
    printf("Nota Final: %.2f\n", nota_final);
    if (nota_final >= 7.0) {
        printf("Aprovado\n");
    } else {
        printf("Reprovado\n");
    }

    return 0;
}
