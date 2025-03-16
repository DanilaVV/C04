#include <unistd.h>

void	ft_condition(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		j = i + 1;
		if(base[i] == '+' || base[i] == '-')
			return (0);
		while (base[j])
		{
			if(base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	if (i < 2)
		return (0);
	return (1);
}

void	ft_putch(char c)
{
	write(1, &c, 1);
}

unsigned int ft_base(char *base)
{
	unsigned int i;

	i = 0;
	while (base[i])
		i++;
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	i;
	int	bs;

	i = 0;
	if (!ft_condition(base))
		return ;
	
}
int	main(void)
{
	return (0);
}
