#include <unistd.h>
#include <stdio.h>

int	centaine(char c)
{
	if (c == '1')
		write(1, "one hundred ", 12);
	if (c == '2')
		write(1, "two hundred ", 12);
	if (c == '3')
		write(1, "three hundred ", 14);
	if (c == '4')
		write(1, "four hundred ", 13);
	if (c == '5')
		write(1, "five hundred ", 13);
	if (c == '6')
		write(1, "six hundred ", 12);
	if (c == '7')
		write(1, "seven hundred ", 14);
	if (c == '8')
		write(1, "eight hundred ", 14);
	if (c == '9')
		write(1, "nine hundred ", 13);
	return (0);
}

int	dizaine(char c)
{
	if (c == '1')
		write(1, "ten ", 4);
	if (c == '2')
		write(1, "twenty ", 7);
	if (c == '3')
		write(1, "thirty ", 7);
	if (c == '4')
		write(1, "forty ", 6);
	if (c == '5')
		write(1, "fifty ", 6);
	if (c == '6')
		write(1, "sixty ", 6);
	if (c == '7')
		write(1, "seventy ", 8);
	if (c == '8')
		write(1, "eighty ", 7);
	if (c == '9')
		write(1, "ninety ", 7);
	return (0);
}
int	dizaine_check(char c, char v)
{
	if (c != '1')
		return (dizaine(c));
	if (c == '1' && v == '0')
		return(dizaine(c));
	if (v == '1')
		write(1, "eleven", 6);
	if (v == '2')
		write(1, "twelve", 6);
	if (v == '3')
		write(1, "thirteen", 8);
	if (v == '4')
		write(1, "forteen", 7);
	if (v == '5')
		write(1, "fifteen", 7);
	if (v == '6')
		write(1, "sixteen", 7);
	if (v == '7')
		write(1, "seventeen", 9);
	if (v == '8')
		write(1, "eighteen", 8);
	if (v == '9')
		write(1, "nineteen", 9);
	return (1);
}

void	uniter(char c)
{
	if (c == '1')
		write(1, "one", 3);
	if (c == '2')
		write(1, "two", 3);
	if (c == '3')
		write(1, "three", 5);
	if (c == '4')
		write(1, "four", 4);
	if (c == '5')
		write(1, "five", 4);
	if (c == '6')
		write(1, "six", 3);
	if (c == '7')
		write(1, "seven", 5);
	if (c == '8')
		write(1, "eight", 5);
	if (c == '9')
		write(1, "nine", 4);
}

void	ft_writeint(char *str)
{
	centaine(str[0]);
	if (dizaine_check(str[1], str[2]) == 0)
		uniter(str[2]);
}

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putstr(char *str)
{
    int i;
    i = 0;
    while (str[i])
        i++;
    write(1, str, i);
}

int write_number(char **argv)
{
    int j;
	int k;

    j = 1;
	k = 1;
    while (argv[j])
        j++;
    printf("nombre de sous tableau : %i\n", j);
    if (j == 3)
    {
        ft_writeint(argv[k]);
        ft_putstr(" thousand ");
        j--;
		k++;
    }
    if (j == 2)
    {
        ft_writeint(argv[k]);
        ft_putchar('\n');
    }
    return (0);
}

int main(int argc, char **argv)
{
    if (argc < 2)
        return (0);
    write_number(argv);
}