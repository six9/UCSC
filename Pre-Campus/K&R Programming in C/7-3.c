#include <stdarg.h>
#include <stdio.h>
/* minprintf: minimal printf with variable argument list */
void minprintf(char *fmt, ...)
{
    va_list ap; /* points to each unnamed arg in turn */
    char *p, *sval;
    int ival,oval;
    int bval[20]={0};
    int *bp=bval;
    double dval;
    va_start(ap, fmt); /* make ap point to 1st unnamed arg */
    for (p = fmt; *p; p++)
    {
        if (*p != '%')
        {
            putchar(*p);
            continue;
        }
        switch (*++p)
        {
        case 'd':case 'i':  //int
            ival = va_arg(ap, int);
            printf("%d", ival);
            break;
        case 'f': //double
            dval = va_arg(ap, double);
            printf("%f", dval);
            break;
        case 's': //string
            for (sval = va_arg(ap, char *); *sval; sval++)
                putchar(*sval);
            break;
        // case 's':              //string 
        //     s = va_arg(ap, char *);
        //     printf("string %s\n", s);
        //     break;
        case 'o':
            oval=va_arg(ap,int);
            printf("%o",oval);
            break;
        case 'x':case 'X':
            sval=va_arg(ap,char *);
            printf("0x%s",sval);
            break;
        case 'p':
            oval=va_arg(ap,int);
            printf("%d",oval);
        case 'b':
            ival=va_arg(ap,int);
            if(ival<0){
                break;
            }
            int i;
            for(i=0;ival>1;i++){
                bp[i]=ival%2;
                ival/=2;
            }
            bp[i]=ival;
            i++;
            for(;i>=0;i--){
                printf("%d",*(bp+i));
            } 
        default:
            putchar(*p);
            break;
        }
    }
    va_end(ap); /* clean up when done */
}
 
int main(){
    minprintf("Binary value of 1: %b\n",1);
    minprintf("Binary value of 2: %b\n",2);
    minprintf("Binary value of 54: %b\n",54);

    return 0;
}
