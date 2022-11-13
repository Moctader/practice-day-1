//You are given a string S of small letters , Now count the number of vowels and consonant from the given string.


#include<stdio.h>

int main()
{

char s[100];
int cout =0;
int consonant=0;

//input the value

fgets(s, sizeof(s), stdin);
for (int i =0; s[i]!= '\0'; i++)
{
    // vowel 
    if(s[i]=='a' || s[i]=='e'||s[i]=='i' ||s[i]=='o'||s[i]=='u')
        cout++;
    //not vowel then count consonant
    if(!(s[i]=='a' || s[i]=='e'||s[i]=='i' ||s[i]=='o'||s[i]=='u'))
        consonant++;
}
printf("Number of vowels= %d\n", cout);
printf("Number of consonant= %d", consonant-1);



    return 0;
}