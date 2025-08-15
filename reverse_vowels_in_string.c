#include<stdio.h>
#include<string.h>
int main()
{
        char ch[100];
        printf("enter the string\n");
        fgets(ch,sizeof(ch),stdin);
        ch[strcspn(ch,"\n")]='\0';
        char chnew[100];
        int i=0;
        int k=0;
        int lench=strlen(ch);
        int freq[lench];
        char chnew1[100];
        for(int i=0;i<lench;i++)
        {
                freq[i]=0;
        }


        while(ch[i]!='\0')
        {
                if(freq[i]==1)
                continue;

                {
                        int count=0;

                        if(ch[i]!=' ')
                        {
                                if(ch[i]=='a' || ch[i]=='e' || ch[i]=='i' || ch[i]=='o'|| ch[i]=='u'|| \
                                ch[i]=='A' || ch[i]=='E' || ch[i]=='I' || ch[i]=='O' ||ch[i]=='U')
                                {
                                        freq[i]=1;
                                        chnew[k++]=ch[i];
                                }
                                else
                                {
                                        chnew[k++]=ch[i];
                                }


                        }
                }
                i++;
        }


        int left=0;
        int right=lench-1;
        while(left<right)
        {
                while(left<right && freq[left]!=1)
                {
                        left++;
                }
                while(left<right && freq[right]!=1)
                {
                        right--;
                }
                if(left<right)
                {
                        char temp=chnew[left];
                                chnew[left]=chnew[right];
                                chnew[right]=temp;
                                left++;
                                right--;
                }
        }




        printf("%s",chnew);
        return 0;
}

