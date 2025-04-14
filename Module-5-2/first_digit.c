// #include<stdio.h>

// int main(){
//     int n;
//     scanf("%d", &n);
//     int first_digit = n/1000;
//     // printf("%d", first_digit);

//     if(first_digit%2 == 0){
//         printf("EVEN");
//     } else{
//         printf("ODD");
//     }
// }

#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int last_digit = n%10;

    printf("%d", last_digit);

}