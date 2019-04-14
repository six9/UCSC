#include <stdio.h>
#include <string.h>
/*removes the characters in second string from the first one*/
void squeeze(char s1[], char s2[]);

int main()
{
    char first[20], second[20];
    printf("input the strings seperated by return key:");
    scanf("%s", &first);
    scanf("%s", &second);
    squeeze(first, second);
}
void squeeze(char s1[], char s2[])
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
                continue;
            }
            else
            {
                continue;
            }
        }
        if (c == 0)
        {
            temp[i] = s1[i];
        }
        else
        {
            c = 0;
        }
    }
    printf("%s", temp);
}
