#include <stdio.h>

void decimalToBinary(int decimal) {
    if (decimal < 0 || decimal > 15) {
        printf("El número debe estar en el rango de 0 a 15.\n");
        return;
    }

    printf("%d en decimal corresponde a ", decimal);

    for (int i = 3; i >= 0; i--) {
        int bit = (decimal >> i) & 1;
        printf("%d", bit);
    }

    printf(" en binario de 4 bits.\n");
}

int main() {
    int numeroDecimal;
    
    printf("Ingrese un número decimal (0-15): ");
    scanf("%d", &numeroDecimal);

    decimalToBinary(numeroDecimal);

    return 0;
}