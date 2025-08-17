#include<stdio.h>
#include<string.h>
int main()
        {
                char ch1[100];
                char ch2[100];
                char ch13[100];
                char ch14[100];
                char word[100];
                int wordlength1=0;
                int maxwordlength=0;

                printf("Enter the string 1\n");
                fgets(ch1,sizeof(ch1),stdin);
                ch1[strcspn(ch1,"\n")]='\0';
                printf("enter the string 2\n");
                fgets(ch2,sizeof(ch2),stdin);
                ch2[strcspn(ch2,"\n")]='\0';

                int i=0;
                int k=0;
                int max=0;
                int length=0;

                while(1)
                {
                        if(ch1[i]!=' ' && ch1[i]!='\0')
                        {
                                ch13[k++]=ch1[i];
                        }
                        else
                        {
                                ch13[k]='\0';
                                if(k>0)
                                {
                                        int j=0,l=0;
                                        while(1)
                                        {

                                        if(ch2[j]!=' ' && ch2[j]!='\0')
                                        {
                                                ch14[l++]=ch2[j];
                                        }
                                        else
                                        {
                                                ch14[l]='\0';


                                                if(l>0&&strcmp(ch13,ch14)==0)
                                                {
                                                        int len=strlen(ch13);
                                                        if(len>maxwordlength)
                                                        {
                                                                maxwordlength=len;
                                                                strcpy(word,ch13);
                                                        }
                                                }

                                        l=0;
                                        if(ch2[j]=='\0') break;
                                        }
                                        j++;

                                        }
                                }

                                k=0;
                        }
                        if(ch1[i]=='\0')
                        break;
                        i++;
                }



                        printf("%s is the word and word length is %d \n",word,maxwordlength);


                        return 0;
}





