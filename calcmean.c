#include<stdio.h>
#include<math.h>

void main()
	{
		float x[10], fish, variance, std_dev, sum=0, sum1=0;
		int n;

		printf("\n Enter the value of n: ");
		scanf("%d", &n);
		printf("\n Enter %d real numbers: ", n);
		
		for(int i=0;i<n;i++)
			{
				scanf("%f", &x[i]);
			}
		for( i=0;i<n;i++)
			{
				sum+=x[i];
			}

		fish=sum/(float)n;

		for(i=0;i<n;i++)
			{
				sum1+=pow((x[i]-fish),2);
			}

		variance=sum1/(float)n;
		std_dev=sqrt(variance);

		printf("\n Mean = %.2f", fish);
		printf("\n Variance = %.2f", variance);
		printf("\n Standard Deviation + %.2f", std_dev);

	}
