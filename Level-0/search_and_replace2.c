#include <unistd.h>

int main(int ac, char **av)
{
	int i = 0;

	if (ac == 4 && !av[2][1] && !av[3][1]) // !!! 2. VE 3. argumanlar tek char olmalı
	{
		while (av[1][i] != '\0')
		{
			if (av[1][i] == av[2][0])
				av[1][i] = av[3][0];
			write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}
