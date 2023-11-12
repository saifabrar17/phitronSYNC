#include <stdio.h>
int main()
{

    char a;
    char next;
    scanf("%c", &a);
    if(a == 'z'){
        next = 'a';
    }else{
        next = a + 1;
    }
    printf("%c", next);

    return 0;
}