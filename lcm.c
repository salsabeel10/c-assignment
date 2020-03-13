#include<stdio.h>

void main()
	{
		int n1, n2, gcd, lcm;

		printf("\n Enter two integers: ");
		scanf("%d%d",&n1,&n2);
		for(int i=1;i<=n1 && i<=n2;i++)
			{
         if(n1%i==0 && n2%i==0)
					gcd=i;
			}

		lcm=(n1*n2)/gcd;

		printf("\n The GCD and LCM of %d and %d are %d and %d respectively.",n1,n2,gcd,lcm);
	}
