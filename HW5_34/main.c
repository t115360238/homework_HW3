#include <stdio.h>
#include <stdlib.h>

int int_power(int, int);

int main(){
    int base, exponent;

    printf("Enter integer base and inteher exponent\n");
    scanf("%d%d", &base, &exponent);
    printf("Result : %d\n", int_power(base, exponent));
    system("pause");
    return 0;
}

int int_power(int _base, int _intexponent){
    if(_intexponent == 0)
        return 1;
    else if(_intexponent == 1)
        return _base;
    else if(_intexponent > 1)
        return _base * int_power(_base, --_intexponent);
    return 0;
}