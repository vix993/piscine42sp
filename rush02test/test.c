#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != 0)
		i++;
	return (i);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != 0)
	{
		write(1, str, 1);
		i++;
	}
}

void changetoword(char *num)
{
	int tam;
	int sum;
	int i;
       
	tam = ft_strlen(num);

	if (tam == 0)
	{
		ft_putstr("Error");
		return;
	}

	char *single[] = { "zero", "one", "two", "three",
	       		"four", "five", "six", "seven", "eight", "nine" };
	char *Double[] = { "", "ten", "eleven", "twelve",
	       		"thirteen", "fourteen", "fifteen", "sixteem",
	       		"seventeen", "eighteen", "nineteen"};
	char *tenmultiple[] = {"", "", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};
	char *tens[] = { "hundred", "thousand", "million", "billion", "trillion", "quadriollon"};

	if (tam == 1)
	{
		ft_putstr(single[*num - '0']);
		return;
	}
	while (*num != 0)
	{
		if (tam >= 3)
		{
			if (*num - '0' != 0)
			{
//				printf("%s\n", single[*num - '0']);
//				printf("%s\n", tens[tam - 3]);
				ft_putstr(single[*num - '0']);
				ft_putstr(tens[tam-3]);
			}
			--tam;
		}
		else
		{
			if (*num == '1')
			{
				sum = (*num - '0' + *(num + 1) == '0');
				printf("%s\n", Double[sum]);
//				ft_putstr(Double[sum]);
				return;
			}
			else if (*num == '2' && *(num + 1) == '0')
			{
				printf("twenty\n");
//				ft_putstr("twenty");
				return;
			}
			else
			{
				i = *num - '0';
				printf("%s ", i? tenmultiple[i]: "");
//				ft_putstr(i? tenmultiple[i]: "");
				++num;
				if (*num != '0')
					printf("%s\n", single[*num - '0']);
//					ft_putstr(single[*num - '0']);
			}
		}
		++num;
	}
}

int	main(int argc, char **argv)
{
	if (argc > 3)
		return (0);

	changetoword("9923");
	changetoword("523");
	changetoword("20");
	changetoword("8989");
	changetoword(argv[1]);

	return (0);
}
