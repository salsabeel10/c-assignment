#include<stdio.h>

void main()
	{
		int r,n=1;

		printf("\n Enter the number of rows: ");
		scanf("%d",&r);
	
		printf("\n Pascal's triangle containing %d rows is... \n",r);

		for(int i=0;i<r;i++)
			{
				for(int j=1;j<=r-i;j++)
		  			{
						printf("  ");
					}
	  
				for(int k=0;k<=i;k++)
					{
	  					if(k==0||i==0)
	     						n=1;
	  
						else
						     n=n*(i-k+1)/k;
	 
						printf("%4d",n);
				        }
      
				printf("\n");
 
		        }


	}

