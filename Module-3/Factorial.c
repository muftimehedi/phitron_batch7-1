#include<stdio.h>

int main(){
    
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n; 
        scanf("%d", &n);
        long long int fact = 1;

        for(int i =1; i <= n; i++){
            fact *=i;
        }
     printf("%lld\n", fact);
    }
    

    return 0;
}
