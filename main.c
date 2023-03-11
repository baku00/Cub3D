#include <main.h>

static int	print_error(char *message)
{
	printf("Error: %s\n", message);
}

int	main(int argc, char **argv)
{
	if (!check_arguments(argc, argv))
		return (print_error("Usage: ./Cub3D <map>.cub"));
	
	return (0);
}
