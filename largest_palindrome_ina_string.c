#include<stdio.h>
#include<string.h>
int main()
{
        char ch[100];
        char ch1[100];
        char ch2[100];
        int i=0;
        int k=0;
        int wordcount=0;
        int wordchar=0;
        int max=0;
        printf("\t Enter the string\n");
        fgets(ch,sizeof(ch),stdin);
        ch[strcspn(ch,"\n")]='\0';

        while(1)
        {
                if(ch[i]!=' ' && ch[i]!='\0')
                {

                        ch1[k++]=ch[i];
                        wordchar++;

                }
                else
                {
                        ch1[k]='\0';
                        if(k>0)
                        {
                                wordcount++;
                                int len=strlen(ch1);
                                int ispalin=1;
                                for(int j=0;j<len;j++)
                                        {
                                                if(ch1[j]!=ch1[len-1-j])
                                                {
                                                        ispalin=0;
                                                        break;
                                                }
                                        }
                                if(ispalin)
                                {
                                        if(wordchar>max)
                                        {
                                                max=wordchar;
                                                strcpy(ch2,ch1);

                                        }

                                }

                        }
                        k=0;
                        wordchar=0;

                        if(ch[i]=='\0')
                        {
                                break;
                        }
                }
                i++;
        }
                printf("%s is the largest palindrome in the string with word length of %d \n",ch2,max);



                return 0;
        }


