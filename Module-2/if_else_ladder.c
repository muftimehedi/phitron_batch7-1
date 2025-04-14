#include<stdio.h>

int main(){
    int tk;
    scanf("%d", &tk);
    if(tk >= 100) {
        printf("Barger khabo");
    }
    else if (tk >= 50)
    {
        printf("Chanachur Khabo");
    }
    else{
        printf("Kichui Khabo na");
    }
    return 0;
}