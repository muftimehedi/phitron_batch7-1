#include<stdio.h>
int main(){
    char s[100];
    // scanf("%s", s);
    fgets(s, sizeof(s), stdin);
    
    int count = 0;
    for(int i = 0; s[i]!='\0'; i++){
      count++;
    }
    
    printf("%d\n", count);

    return 0;
}



// #include<stdio.h>
// #include<string.h>
// int main(){
//     char str[100];
//     fgets(str, sizeof(str), stdin);
    
//     int size = strlen(str);
    
//     printf("%d", size);

//     return 0;
// }

// int main(){
//     char str[100];
//     fgets(str, sizeof(str), stdin);
    
//     printf("%d", strlen(str));

//     return 0;
// }