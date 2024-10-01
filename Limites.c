#include <stdio.h>
#include <limits.h>  

void imprimir_limites() {
    
    printf("Tipo\t\t\tMinimo\t\t\tMaximo\n");
    printf("char\t\t\t%d\t\t\t%d\n", CHAR_MIN, CHAR_MAX);
    printf("short int\t\t%d\t\t\t%d\n", SHRT_MIN, SHRT_MAX);
    printf("int\t\t\t%d\t\t\t%d\n", INT_MIN, INT_MAX);
    printf("unsigned int\t\t0\t\t\t%u\n", UINT_MAX);
    printf("long int\t\t%ld\t\t\t%ld\n", LONG_MIN, LONG_MAX);
    printf("unsigned long int\t0\t\t\t%lu\n", ULONG_MAX);
    printf("long long int\t\t%lld\t\t\t%lld\n", LLONG_MIN, LLONG_MAX);
    printf("unsigned long long int\t0\t\t\t%llu\n", ULLONG_MAX);
}

int main() {
    
    imprimir_limites();

    return 0;
}
