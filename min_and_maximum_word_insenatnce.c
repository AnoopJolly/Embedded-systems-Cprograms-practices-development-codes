include<stdio.h>
#include<string.h>
int main()
{
        char ch[100];
        char word[100];

        printf("Enter the string\n");
        fgets(ch,sizeof(ch),stdin);
        ch[strcspn(ch,"\n")]='\0';
        int count=0;
        int j=0;
        int max=0;
        int min=100;
        char minword[100];
        char maxword[100];
        for(int i=0;ch[i]!='\0';i++)
        {
                if(ch[i]!=' ')
                {
                        word[j++]=ch[i];
                        count++;
                }
                if(ch[i]==' ' ||ch[i+1]=='\0')
                {
                        word[j]='\0';

                        if(count>max)
                        {
                                max=count;
                                strcpy(maxword,word);
                        }
                        if(count<min)
                        {
                                min=count;
                                strcpy(minword,word);
                        }
                j=0;
                count=0;
                }

        }

        printf("'%s'is the biggest word  and its count is %d\n",maxword,max);
        printf("'%s' is the smallest word and its count is %d\n",minword,min);

        return 0;
}


