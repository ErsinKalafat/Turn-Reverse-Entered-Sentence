#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void reverseWords(char *s)
{
    char *word_begin = s;
    char *temp = s;

    while( *temp )
    {
        temp++;
        if (*temp == '\0')
        {
            reverse(word_begin, temp-1);
        }
        else if(*temp == ' ')
        {
            reverse(word_begin, temp-1);
            word_begin = temp+1;
        }
    }
    reverse(s, temp-1);
}
void reverse(char *begin, char *end)
{
    char temp;
    while (begin < end)
    {
        temp = *begin;
        *begin++ = *end;
        *end-- = temp;
    }
}

int main()
{
    printf("\n\tTersine cevrilecek cumleyi giriniz:");
    char s[50];
    gets(s);
    char *temp = s;
    reverseWords(s);
    printf("\n\t%s", s);
    getchar();
    return 0;
}
