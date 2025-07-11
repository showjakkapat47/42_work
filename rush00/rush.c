#include <unistd.h>

void	rush(int x, int y)
{
	int	i;
	int	j;

	j = 1;
	while (j <= y)
	{
		i = 1;
		if ( j == 1 || j == y)
		{
			while (i <= x)
			{
				if ( i == 1 || i == x)
				{
					write (1, "X",1);
				}	
				else
				{
					write (1, "-", 1);
				}
			i++;		
			}
		}
		else
		{	
			while (i <= x)
			{
			 
				if ( i == 1 || i == x)
			 	{
				 	write (1, "|", 1);
			 	}
			 	else
			 	{
				 	write (1, " ", 1);
			 	}
			i++;
			}
		}
		write(1,"\n",1);
		j++;
	}
}
		

int	main(void)
{
	rush(8,4);
	rush(1,4);
	rush(5,5);
	rush(4,3);
	rush(1,1);
	rush(0,0);
	rush(12,12);
	rush(-4,-4);
}
