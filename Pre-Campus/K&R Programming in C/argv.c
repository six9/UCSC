#include <stdio.h>
/* pretty simple program I learned that argv[0] is the applications name,argv[1] is argument one. 
why would I need argv[0]? Erorr handling?  */
int main(int argc,char *argv[]){
    printf("Arguments count: %d\n",argc);
    printf("Application name: %s \n",argv[0]);
    printf("First argument: %s\n",argv[1]);
    for(int i=argc;i>0;i--){
        printf("%s ",*(argv++));
    }
    printf("\n");
    
    return 0;
}
