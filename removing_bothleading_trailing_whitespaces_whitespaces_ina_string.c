#include<stdio.h>
#include<string.h>
int main()
{
        char ch[100];
        char ch1[100];
        int i=0;
        int k=0;
        int start=0;
        int end;
        printf("Enter the string\n");
        fgets(ch,sizeof(ch),stdin);
        ch[strcspn(ch,"\n")]='\0';

        while(ch[start]==' ')
        {
        start++;
        }

        end=strlen(ch)-1;

        while(end>start && ch[end]==' ')
        {
                end--;
        }

        for(int i=start;i<=end;i++)
        {
                ch1[k++]=ch[i];
        }
        ch1[k]='\0';


        printf("%s",ch1);

        return 0;
}


