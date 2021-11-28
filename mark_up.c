#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <fcntl.h>

int	main(void)
{
	char	out[10];
	float	num;
	float	base;
	float	dix;
	float	quinze;
	int	i;

	i = 0;
	while(i >= 0)
	{
		write(1, "Enter the price or x on the corner to exit:", 44);
		write(1, "\n", 2);
		i = read(0, &out, 9);
		out[i - 1] = '\0';
		num = atof(out);
		printf("%.2f\n", num);
		base = num / 0.5;
		dix = (base / 100) * 90;
		quinze = (base / 100) * 85;
		printf("achat: %.2f\tbase: %.2f\t10%%: %.2f\t15%%: %.2f\n", num, base, dix, quinze);
	}
	return (0);
}
		
