//
//  main.c
//  test1
//
//  Created by Laura Jimenez on 14/08/21.
//

#include <stdio.h>

int main(){
    
    
    int a, b;
    char operationType;
    // + * /
    
    // 1 byte
    // 8 bits
    // 00000000 - 0 --- 1 2 4 8 16 32 64 128
    // 00000001
    //        2^0
    // 01010101 - 2
    // 11111111
    
    unsigned int a = 40000;
    
    printf("Ingresa el primer valor:");
    scanf("%d", &a);
    scanf("%c", &operationType);
    
    printf("Ingresa el segundo valor:");
    scanf("%d", &b);
    
    switch (operationType) {
        case "+":
            printf("Suma es: %d", a + b);
            break;
        case "-":
            printf("Resta es: %d", a - b);
            break
        default:
            break;
    }
    printf("Jaja Saludos");
    
    
    
    
    return 0;
};
