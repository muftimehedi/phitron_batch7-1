#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    scanf("%d", &n);

    long long sum = 0;

    int x;

    for(int i = 0; i < n; i++){
        scanf("%d", &x);
        sum +=x;
    }

    if(sum < 0) {
        sum *= -1;
    }
    printf("%lld\n", sum);

    return 0;
}