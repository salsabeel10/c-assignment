#include<stdio.h>

void main()
	{
		int n,t1=0,t2=1,t3;

		printf("\n Enter the number of terms: ");
		scanf("%d",&n);
		printf("\n Fibonacci Series: ");

		for(int i=1;i<=n;i++)
			{
				printf("%d",t1);
				t3=t1+t2;
				t1=t2;
				t2=t3;
			}

	}
