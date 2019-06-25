#include "holberton.h"
/**
 * _isalpha - checks for alphabetic characters
 *
 * Return 1 if alphabetic (lowercase and uppercase), 0 if not alphabetic
 *
 **/
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z' || c <= 'Z' && c >= 'A')
	{
		return (1);
	}
	else
	{
		return(0);
	}
}
