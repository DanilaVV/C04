#include <unistd.h>

int	ft_condition(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		j = i + 1;
		if (base[i] == '+' || base[i] == '-')
			return (0);
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	if (i < 2)
		return (0);
	return (1);
}

void	ft_putch(int n)
{
	char	c;

	if (n < 10)
		c = n + '0';
	else
		c = 'A' + n - 10;
	write (1, &c, 1);
}

int	ft_base(char *base)
{
	int	i;

	i = 0;
	while (base[i])
		i++;
	return (i);
}

int	ft_abs(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	bs;

	if (!ft_condition(base))
		return ;
	bs = ft_base(base);
	if (nbr < 0)
		write(1, "-", 1);
	if (nbr != -2147483648 && ft_abs(nbr) < bs)
	{
		ft_putch(ft_abs(nbr));
		return ;
	}
	ft_putnbr_base(ft_abs(nbr / bs), base);
	ft_putnbr_base(ft_abs(nbr % bs), base);
}
/*int	main(void)
{
	ft_putnbr_base(0, "01234567");
	return (0);
}*/
