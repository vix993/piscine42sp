#include <unistd.h>

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != 0)
		i++;
	return (i);
}

char	ft_putstr(char *str)
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

	if (len == 0)
	{
		ft_putstr("Error");
		return;
	}

	char *single[] = { "zero", "one", "two", "three",
	       		"four", "five", "six", "seven", "eight", "nine" };
	char *double[] = { "", "ten", "eleven", "twelve",
	       		"thirteen", "fourteen", "fifteen", "sixteem",
	       		"seventeen", "eighteen", "nineteen"};
	char *tenmultiple[] = {"", "", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};
	char *tens[] = { "hundred", "thousand", "million", "billion", "trillion", "quadriollon"}

	if (tam == 1)
	{
		ft_putstr( single[*num - '0']);
		return;
	}
	while (*num != 0)
	{
		if (len >= 3)
		{
			if (*num - '0' != 0)
			{
			ft_putstr(single[*num - '0']);
			ft_putstr(tens[len-3])
			}
			--len;
		}
		else
		{
			if (*num == '1')
			{
				sum = (*num - '0' + *(num + 1) == '0');
				ft_putstr(double[sum]);
				return;
			}
			else if (*num == '2' && *(num + 1) == '0')
			{
				(*num == '2' && *(num + 1) == '0')
				{
					ft_putstr("twenty");
					return;
				}
			}
			else
			{
				i = *num - '0';
				ft_putstr(i? tensmultiple[i]: "");
				++num;
				if (*num != '0')
					ft_putstr(single[*num - '0']);
			}
		}
		++num;
	}
}

int	main(int argc, char **argv)
{
	changetowords("9923");
	changetowords("523");
	changetowords("89");
	changetowords("8989");
	changetowords("argv");

	return (0)
}
