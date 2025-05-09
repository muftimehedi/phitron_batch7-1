
// In this problem you will be given an integer N, followed by N numbers.

// Each numbers will be either 0 or 1.

// You need to print two integers, The first one will be the number of 0's and the second one will be the number of 1' s in the input.

// Input Format

// The first line will contain a single integer N.
// The second line will contain N integers.
// Constraints

// 1 <= N <= 100000
// Each N numbers will be either 0 or 1.
// Output Format

// Print two space separated integers, total number of 0's and 1's.
// Sample Input 0

// 10
// 0 0 1 0 1 0 0 0 1 1
// Sample Output 0

// 6 4

// https://www.hackerrank.com/contests/practice-problem-a-introduction-to-c-programming-a-batch-07/challenges/zeroes-and-ones-1-1



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

   int N;
    scanf("%d", &N);
    
    int zero_count = 0, one_count = 0, num;
    
    for(int i = 0; i< N; i++){
        scanf("%d", &num);
        if(num == 0){
            zero_count++;
        } else{
            one_count++;
        }
    }
    
    printf("%d %d", zero_count, one_count);
    
    
    return 0;
}