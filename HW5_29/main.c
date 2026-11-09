#include <stdio.h>
#include <stdlib.h>

int count_LCM(int ,int);
int count_GCD(int, int);

int main(){
    int num[2];    
    printf("Enter two number\n");
    scanf("%d%d", &num[0], &num[1]);

    printf("LCM : %d\n", count_LCM(num[0], num[1]));
    system("pause");
    return 0;
}

int count_LCM(int _num1, int _num2){
    return (_num1 * _num2) / count_GCD(_num1, _num2);
}

int count_GCD(int _num1, int _num2){
    int temp;
    while (_num2 != 0) {
        temp = _num2;
        _num2 = _num1 % _num2;
        _num1 = temp;
    }

    return _num1;
}

