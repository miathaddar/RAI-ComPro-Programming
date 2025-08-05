#include<stdio.h>
int main()
{
    char sentence[22]= "Welcome to my country";
    char word[8]= {'T','h','a','i','l','a','n','d','\0';
    char not_word[4]= {'l','o','v','e'};
    printf("message1= %s\n",sentence);
    printf("message2= %s\n",word);
    printf("message3= %s%s\n", not_word,word);
    return 0;

}