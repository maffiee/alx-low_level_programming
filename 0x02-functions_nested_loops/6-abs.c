#include "main.h"


	/**
	 * _abs - computes the absolute value of an integer
	 * @n: the int to check
	 * Return: the absolute value of int
	 */
	int _abs(int n)
	{
		if (n >= 0)
		{
			return (n);
		}
		return (-n);
	}



======================================


6-main.c CODE


#include "main.h"
	#include <stdio.h>


	/**
	 * main - check the code
	 *
	 * Return: Always 0.
	 */
	int main(void)
	{
	    int r;


	    r = _abs(-1);
	    printf("%d\n", r);
	    r = _abs(0);
	    printf("%d\n", r);
	    r = _abs(1);
	    printf("%d\n", r);
	    r = _abs(-98);
	    printf("%d\n", r);
	    return (0);
	}
