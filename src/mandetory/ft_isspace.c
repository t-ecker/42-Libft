#include "../../libft.h"

// checks if c is a whitespace character

int	ft_isspace(int c)
{
	return ((c >= '\t' && c <= '\r') || c == ' ');
}