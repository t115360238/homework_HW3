#include <stdio.h>
#include <stdlib.h>

void hanoi(int , char , char , char);

int main(void)
{
    int n;
    printf("Enter the number of disks: ");
    scanf("%d", &n);

    hanoi(n, 'A', 'B', 'C');

    system("pause");
    return 0;
}

void hanoi(int n, char from, char to, char aux){
    if(n == 1){
        printf("1 move from %c to %c\n", from, to);
        return;
    }

    hanoi(n - 1, from, aux, to);

    printf("%d move from %c to %c\n", n, from, to);

    hanoi(n - 1, aux, to, from);
}