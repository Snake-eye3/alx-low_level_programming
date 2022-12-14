#include "main.h"
/**
 *  _isalpha - code entry.
 *
 *  Description: A function that checks for alphabetic characters.
 *
 *  @c: The intrger value it receives.
 *
 *  Return: 0 (Success)
 */

int _isalpha(int c)
{
	char cap_alphabet, icap_alphabet;

	for (cap_alphabet = 'a'; cap_alphabet <= 'z'; cap_alphabet++)
	{
		for (icap_alphabet = 'A'; icap_alphabet <= 'Z'; icap_alphabet++)
		{
			if ((cap_alphabet == c) || (icap_alphabet == c))
			{
				return (1);
			}
		}
	}
	return (0);
}
