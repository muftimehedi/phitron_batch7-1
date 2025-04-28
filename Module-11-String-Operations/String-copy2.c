#include <stdio.h>
#include <stdarg.h>

int main() {
    char source[100], destination[100];

    scanf("%s", source);

    int i =0;
    while (source[i] != '\0')
    {
        destination[i] = source[i];
        i++;
    }
    destination[i] = '\0';

    printf("Source: %s\n", source);
    printf("Destination: %s\n", destination);
    

    return 0;
}