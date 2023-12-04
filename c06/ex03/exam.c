#include <unistd.h>
#include <stdio.h>

void put_str(char *str)
{
	int i;
   	
	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);	
		i++; 
	}
	write(1, "\n",1);
}

int ft_com(char *str1, char *str2)
{
	int i = 0;

	while (str1[i] && str2[i])
	{
		if (str1[i] == str2[i])
			i++;
		else 
			break;	
	}
	return (str1[i] - str2[i]);

}

void ft_swap(char **str3, char **str2)
{
	char *temp;
	temp = *str3;
	*str3 = *str2;
	*str2 =  temp;
}
void ft_swap_char(char *str3, char *str2)
{
	char *temp;
	temp = str3;
	str3 = str2;
	str2 =  temp;
}

void ft_swapor (char *str)
{
	int i;
   i = 0;
	int fs = 0;
	int ed;
	char tem;
	while (str[i])
		i++;
	ed = i -1;
 
	while (fs < ed)
   {
		tem  = str[fs];
		str[fs] = str[ed];
		str[ed] = tem;
	   	ed--;
		fs++;
   }


}

int main (int argc, char **argv)
{
	int i;
	int j;
	int k;
	int h;




	i = 0;
	j = 1;
	h = 1;
	k = argc;



	if (argc > 1)
	{
	
	

		while (i < argc)
		{
			j = 0; 
			while ( j < argc - 1)
			{
				if (ft_com(argv[j], argv[j + 1])> 0 )
					ft_swap(&argv[j], &argv[j + 1]);
				j++;
			}
			
			i++;
		}

					
		while (h < k)
		{
			put_str(argv[h]);
			h++;
		}
	}
}

/*
 * 	while (i < argc)
		{
			ft_swapor(argv[i++]);
		}	

while (argv[x][y])
			{	
				while (argv[x][y])
				{
					y = 0;
					if (ft_compaire (argv[x][y], argv[x][y + 1]) > 0)
					{
						printf("is here");
						temp = argv[x][y];
						argv[x][y]= argv[x][y + 1];
						argv[x][y + 1] = temp;
					}		
					y++;
				}
				x++;	
			}
 * */
