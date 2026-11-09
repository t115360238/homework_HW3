#include <stdio.h>
#include <stdlib.h>

unsigned long long int fibonacci(unsigned int); 

int main(){
    unsigned int n;
    printf("Enter fibonacci number\n");
    scanf("%u", &n);
    printf("Result : %llu\n", fibonacci(n));

    system("pause");
    return 0;
}

unsigned long long int fibonacci(unsigned int n){
    unsigned long long int num[2] = {0, 1}, temp;;
    while(n > 1){
        temp = num[0] + num[1];
        num[0] = num[1];
        num[1] = temp;
        n--;
    }

    return num[1];
}

// 最大 fibonacci(96) = 14787220707439219840