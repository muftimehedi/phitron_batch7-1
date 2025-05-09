// After eating at the resturant Abul, Babul and Bablu has decided to divide the bill among themselves and for that they need to know if the amount is divisible by 3 or not (as they are three friends). Can you help them?

// Input Format

// Input will contain an integer number M (the bill amount).
// Constraints

// 1 <= M <= 1000
// Output Format

// Print "Yes" if the bill is divided by 3 and "No" otherwise.
// Sample Input 0

// 180
// Sample Output 0

// Yes
// Sample Input 1

// 250
// Sample Output 1

// No

// https://www.hackerrank.com/contests/practice-problem-a-introduction-to-c-programming-a-batch-07/challenges/khana-pina-2/problem

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int taka;
    scanf("%d", &taka);
    
    if(taka % 3 == 0){
        printf("Yes");
    } else {
        printf("No");
    }
    return 0;
}