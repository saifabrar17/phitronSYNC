#include <stdio.h>
#include <string.h>

int is_palindrome(char *S)
{
   
    int length = strlen(S);
    int loop = length / 2;
    int isPalindrome = 1;

    for (int i = 0; i < loop; i++)
    {
        if (S[i] != S[length - i - 1])
        {
            isPalindrome = 0;
            break;
        }
    }
    return isPalindrome;
}

int main()
{
    char S[1000];

    scanf("%s", S);

    is_palindrome(S);
    int result = is_palindrome(S);
    if (result == 0)
    {
        printf("Not Palindrome");
    }
    else
    {
        printf("Palindrome");
    }
    return 0;
}
