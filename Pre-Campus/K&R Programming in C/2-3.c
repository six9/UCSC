#include <stdio.h>
#include <string.h>
#include <math.h>

/*Write a function htoi(s) , which converts a string of hexadecimal digits
(including an optional 0x or 0X ) into its equivalent integer value.*/

/*gcc build gives an error on build. but clang works.*/

int intValue = 0;
int htoi(char string[], int currentIndex, int power);
int main()
{
    while (1)
    {
        char hex[6];
        printf("Enter the hexadecimal:");
        scanf("%s", &hex);
        if (strlen(hex) == 6)
        {
            htoi(hex, 0, 5);
        }
        else if (strlen(hex) == 4)
        {
            htoi(hex, 0, 3);
        }
        else
        {
            printf("Please use either 0x0000 or 0000 format.\n");
        }
        printf("Value of %s in decimal is %d .\n", hex, intValue);
    }
    return 0;
}

int htoi(char string[], int currentIndex, int power)
{

    if (strlen(string) - 1 == currentIndex)
    {
        return intValue;
    }
    else
    {
        switch (string[currentIndex])
        {
        case '0':
            intValue = intValue + 0 * pow(16, power);
            break;
        case '1':
            intValue = intValue + 1 * pow(16, power);
            break;
        case '2':
            intValue = intValue + 2 * pow(16, power);
            break;
        case '3':
            intValue = intValue + 3 * pow(16, power);
            break;
        case '4':
            intValue = intValue + 4 * pow(16, power);
            break;
        case '5':
            intValue = intValue + 5 * pow(16, power);
            break;
        case '6':
            intValue = intValue + 6 * pow(16, power);
            break;
        case '7':
            intValue = intValue + 7 * pow(16, power);
            break;
        case '8':
            intValue = intValue + 8 * pow(16, power);
            break;
        case '9':
            intValue = intValue + 9 * pow(16, power);
            break;
        case 'A':
        case 'a':
            intValue = intValue + 10 * pow(16, power);
            break;
        case 'B':
        case 'b':
            intValue = intValue + 11 * pow(16, power);
            break;
        case 'C':
        case 'c':
            intValue = intValue + 12 * pow(16, power);
            break;
        case 'D':
        case 'd':
            intValue = intValue + 13 * pow(16, power);
            break;
        case 'E':
        case 'e':
            intValue = intValue + 14 * pow(16, power);
            break;
        case 'F':
        case 'f':
            intValue = intValue + 15 * pow(16, power);
            break;
        case 'x':
        case 'X':
            break;
        default:
            break;
        }
    }
    --power;
    ++currentIndex;
    return htoi(string, currentIndex, power), intValue;
}
