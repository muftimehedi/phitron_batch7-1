#include<stdio.h>

int main() {
    int a;
    float f;
    char c;
    
    scanf("%d", &a);
    scanf("%f", &f);
    scanf(" %c", &c);  // Notice the space before %c
    
    printf("%d %f %c", a, f, c); // Also, the original order was wrong
    return 0;
}
