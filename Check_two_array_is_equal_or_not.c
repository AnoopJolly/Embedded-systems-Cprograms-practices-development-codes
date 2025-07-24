#include<stdio.h>
int main()
{


int a[]={1,2,3,4,5,6};
int b[]={1,2,3,4,5,6};

int n1=sizeof(a)/sizeof(a[0]);
int n2=sizeof(b)/sizeof(b[0]);

int flag=1;

if(n1 != n2)
	{
	flag=0;
	}
else
	{
	for(int i=0;i<n1;i++)
	{
		if(a[i] != b[i])
		{
		flag=0;
		break;
		}
	}
}

if(flag==1)
	{
	printf("All equal\n");
	}
else
	{
	printf("not equal\n");
	}

return 0;

}



