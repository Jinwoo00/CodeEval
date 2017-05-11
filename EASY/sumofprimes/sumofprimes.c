#include <stdio.h>

int main()
{
	int i=2, j;
	int count=0;	
	int prime_count=0;
	int sum_of_prime=0;
	
	while(prime_count<1000)
	{
		if(i==2 || i%2!=0)
		{
			for(j=1; j<=i; j++)
			{
				if(i%j==0){
					count++;
				}		
			}
		
			if(count==2){
				prime_count++;
				sum_of_prime += i;
			}
		}
		count = 0;
		i++;
		
	
	}

	printf("%d\n", sum_of_prime);

	return 0;


}
