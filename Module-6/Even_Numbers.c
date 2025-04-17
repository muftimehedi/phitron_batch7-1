#include <stdio.h>
int main(){
    int N;
    scanf("%d", &N);

    int found = 0;

    for(int i = 1; i <= N; i++){
        if(i % 2 == 0){
            found = i;
            printf("%d\n", found);
        }
    }
    if(found == 0){
        printf("-1");
    }
    return 0;
}