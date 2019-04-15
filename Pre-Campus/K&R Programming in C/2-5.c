#include <stdio.h>

/*Write the function any(s1,s2) , which returns the first location in a string s1
where any character from the string s2 occurs, or -1 if s1 contains no characters from s2 .
(The standard library function strpbrk does the same job but returns a pointer to the
location.)*/

int any(char s1[], char s2[]);

int main()
{
    char str1[20], str2[20];
    printf("Please enter 2 strings: ");
    scanf("%s", &str1);
    scanf("%s", &str2);
    any(str1, str2);
}

int any(char s1[], char s2[])
{
    int i, c;
    char temp[20];
    c = 0;
    for (i = 0; i < strlen(s1); i++)
    {
        for (int j = 0; j < strlen(s2); j++)
        {
            if (s1[i] == s2[j])
            {
                c = 1;
                break;
            }
            else
            {
                continue;
            }
        }
        if (c == 1)
        {
            printf("character %c is also seen in %s in index %d", s1[i], s2, i);
            break;
        }
        else
        {
            ;
        }
    }
}
