#include <stdio.h>

int main() {
    char a = 'a';
    int b = 1;
    long c = 2;

    // printing the addresses 
    printf("address of c in decimal:     %lu\n", &a); 
    printf("address of c in hexadecimal: %p\n", &a);
    printf("address of i in decimal:     %lu\n", &b);
    printf("address of i in hexadecimal: %p\n", &b);
    printf("address of l in decimal:     %lu\n", &c);
    printf("address of l in hexadecimal: %p\n", &c);
    printf("\n");
    // I noticed that the end character of the hexadecimal addresses stayed the same
    // Also, that the address of b is 1 more than a's, but c's is 4 more than b's (pointer arithmetic)

    // declaring and initializing pointers
    char *ap = &a;
    int *bp = &b;
    long *cp = &c;

    // printing pointer values
    printf("*ap: %p\n", ap);
    printf("*bp: %p\n", bp);
    printf("*cp: %p\n", cp);
    printf("\n");

    // original variable values
    printf("original value of a: %c\n", a);
    printf("original value of b: %d\n", b);
    printf("original value of c: %ld\n", c);

    // changing the values of original variables
    *ap = 'b';
    *bp = 2;
    *cp = 3;

    // printing variables after modification
    printf("new value of a: %c\n", a);
    printf("new value of b: %d\n", b);
    printf("new value of c: %ld\n", c);
    printf("\n");
    
    // declaring and initiating unsigned int variable
    unsigned int d = 64;
    int *dp1 = &d;
    char *dp2 = &d;

    // printing pointer values and what they point to
    printf("dp1: %lu dp1 points to: %lu\n", dp1, *dp1);
    printf("dp2: %lu dp2 points to: %lu\n", dp2, *dp2);
    printf("\n");

    // printing out unsigned int in hexa and deci
    printf("d in decimal:     %u\n", d);
    printf("d in hexadecimal: %x\n", d);
    printf("\n");

    // printing out individual bytes of unsigned int d
    int i;
    for (i = 0; i < 4; i++) 
        printf("p[%d]: %hhu(deci), %hhx(hexa)   ", i, *(dp2+i), *(dp2+i));
    printf("\n");

    // incrementing each byte by 1
    for (i = 0; i < 4; i++) {
        *(dp2+i) += 1;
        printf("p[%d]; %hhu(deci), ", i, *(dp2+i));
        printf("%hhx(hexa)   ", *(dp2+i));
    }
    printf("\n");

    // incrementing each byte by 4
    d = 64;
    for (i = 0; i < 4; i++) {
        *(dp2+i) += 4;
        printf("p[%d]; %hhu(deci), ", i, *(dp2+i));
        printf("%hhx(hexa)   ", *(dp2+i));
    }
    printf("\n");

    // incrementing each byte by 16
    d = 64;
    for (i = 0; i < 4; i++) {
        *(dp2+i) += 16;
        printf("p[%d]; %hhu(deci), ", i, *(dp2+i));
        printf("%hhx(hexa)   ", *(dp2+i));
    }
    printf("\n");
}