#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    int length, k;
    char str[100];
    //fgets(str, sizeof(str), stdin);
    gets(str);
    length=strlen(str);
    length=length-1;

    k=0;
    while (length>k)
    {
        if (str[length]!=str[k])
        {
            printf("%s No", str);
            exit(0);
        }
        length--;
        k++;

    }
    
   printf("%s y", str);
    
    return 0;
}


