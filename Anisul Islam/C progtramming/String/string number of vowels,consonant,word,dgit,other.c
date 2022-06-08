#include<stdio.h>
int main()
{
    char str[100],ch;
    int i,vowel,consonant,word,digit,other;

    printf("Enter a string : ");
    gets(str);

    i=vowel=consonant=word=digit=other=0;

    while((ch=str[i])!='\0')
    {
        if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' ||
                ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
                vowel++;

            else if ((ch>='a' && ch<='z') || (ch>='A' && ch<='Z') )
                consonant++;

            else if (ch==' ')
                word++;
            else if (ch>='0' && ch<='9')
                digit++;
            else
                other++;

            i++;
            }
            word++;

            printf("Number of Vowels = %d\n",vowel);
            printf("Number of Consonants = %d\n",consonant);
            printf("Number of Words = %d\n",word);
            printf("Number of Digits = %d\n",digit);
            printf("Number of others = %d\n",other);





    getch();
}






