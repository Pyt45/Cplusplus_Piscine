#include <stdio.h>
#include <stdlib.h>
#include <string.h>

long	fact(int n)
{
	if (n <= 1)
		return 1;
	return (n * fact(n - 1));
}

int		**ft_triangle(int n)
{
	int		**arr;

	if (!(arr = (int **)malloc(sizeof(*arr) * n)))
		return NULL;
	for (int i = 0; i < n; i++)
	{
		if (!(arr[i] = (int *)calloc(n, sizeof(*arr))))
			return NULL;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
			arr[i][j] = fact(i) / (fact(j) * fact(i - j));
	}
	return arr;
}

int 	nbr_len(int d)
{
	int l;

	l = 1;
	while (d / 10)
	{
		d /= 10;
		l++;
	}
	return (l);
}

void	ft_print_triangle(int **arr, int n)
{
	int **dim2;
	int *dim1;
	int d;
	int l;

	dim2 = arr;
	while (dim2 < arr + n)
	{
		dim1 = *dim2;
		printf("%*s", 3 * ((int)(n - (dim2 - arr))), "");
		d = (dim2 - arr + 1);
		while (dim1 < *dim2 + n && d--)
		{
			l =  nbr_len(*dim1);
			printf("%d%*s", *dim1, 6 - l , "");
			dim1++;
		}
		printf("\n");
		dim2++;
	}
}


// example
int		main( void )
{
	int		**arr = ft_triangle(11);

	ft_print_triangle(arr, 11);
	return 0;
}
 