#include <stdio.h>

/*Write the function strend(s,t) , which returns 1 if the string t occurs at the
end of the string s , and zero otherwise.*/

int strlens(char *s);
int strend(char *s, char *t);

int main()
{
    char a[] = "Hello world";
    char b[] = "world";
    int rnum = 0, rnum2 = 0;
    int length = 0;
    length = strlens(&b);
    printf("%i", length);
    rnum2 = strend(&a, &b);
    printf("%i", rnum);

    char c[] = "Hello world";
    char d[] = "wpkld";
    rnum2 = strend(&c, &d);
    printf("%i", rnum);
}

int strend(char *s, char *t)
{
    int state = 0;
    int tlen = 1;
    int slen = 1;
    while (*s++ != '\0')
        slen++;
    while (*t++ != '\0')
        tlen++;
    while (tlen > 0)
    {
        if (*(s - tlen) != *(t - tlen))
        {
            state = 1;
            break;
        }
        else
        {
            tlen--;
        }
    }
    return state;
}

int strlens(char *s)
{
    int i = 0;
    while (*s++ != '\0')
    {
        i++;
    }
    return i;
}
