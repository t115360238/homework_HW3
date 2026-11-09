#include <stdio.h>
#include <stdlib.h>

char alphabet_change(char*);

int main(){
    char alphabet;
    printf("Enter alphabet\n");
    scanf("%c", &alphabet);
    printf("Change to %c\n", alphabet_change(&alphabet));
    system("pause");
    return 0;
}

char alphabet_change(char *_alphabet){
    if(*_alphabet <= 'Z')
        return (char)((int)*_alphabet + 32);
    else
        return (char)((int)*_alphabet - 32);
}