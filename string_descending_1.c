
    // for(i=0; i<=largestElement;i++)
    // {
    //     printf("%d",freq[i]);
    // }

#include<stdio.h>
#include<string.h>

int main()
{
  
    int i;
    char s[100];
    //scanf("%s",s);
    fgets(s, sizeof(s), stdin);

    int len=strlen(s);
    int largestElement= 26;
    int freq[largestElement+1];

    for(i=0; i<=largestElement;i++)
    {
        freq[i]=0;
    }

    for(i=0; i<=len; i++)
    {
        freq[(s[i]-'a')+1]++;
    }

    // for(i=1; i<=26; i++)
    // {
    //     printf("%d",freq[i]);
    // }
    int totall=0;

    for(i=1;i<=26;i++)

    {
        if(freq[i]>=1)
        {
            totall++;
        }
    }

    int next=0;

    while (next!=totall)
    {
        int max=-1;
        int index=-1;
        char ch;

        for(i=1; i<=26;i++)
        {
            if (freq[i]>max)
            {
                max=freq[i];
                ch =i+96;
                index=i;
             
            }
            
        }
        for(i=1; i<=max; i++)
        {
            printf("%c", ch);
        }

        freq[index]=0;
        next++;

    }
    




    return 0;
}