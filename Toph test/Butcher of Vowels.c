#include<stdio.h>
int main()
{
    char str[20],ch;
    int n,i,vowels,consonant,word;

    printf("Enter how many word : ");
    scanf("%d",&n);

    for (i=0;i<=n;i++)
    {
        gets(str);
    }

    i=vowels=consonant=0;

    while((ch=str[i])!='\0')

    {
        for (i=0;i<=n;i++)
        {
            {
        if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' ||
                ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
                vowels++;

            else if ((ch>='a' && ch<='z') || (ch>='A' && ch<='Z') )
                consonant++;

                i++;
    }
    word++;
        }
    }


            printf("Number of Vowels = %d\n",vowels);
            printf("Number of Consonants = %d\n",consonant);



    return 0;

}
