#include<unistd.h>

int main (int argc, char **argv)
{
	if(argc == 2)
	{
		int i = 0;
		while(argv[1][i] != '\0')
			i++;
		i--;
		while(argv[1][i] == ' ' || argv[1][i] == '\t')
		{
			argv[1][i] = '\0';
			i--;
		}
		i = 0;
		while(argv[1][i] == ' ' || argv[1][i] ==  '\t')
			i++;
		while(argv[1][i] != '\0')
		{
			if((argv[1][i] == ' ' || argv[1][i] == '\t') && argv[1][i-1]>32)
				write(1,"   ",3);
			else if (argv[1][i]>32)
				write(1, &argv[1][i],1);
			i++;
		}
	}
	write(1,"\n",1);
	return(0);
}
