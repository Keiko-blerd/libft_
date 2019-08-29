/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhlatshw <nhlatshw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 16:28:43 by nhlatshw          #+#    #+#             */
/*   Updated: 2019/08/29 16:34:47 by nhlatshw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* This function takes a character array as an argument and converts it to actual intergers you can perfome arithmatic operations on.
   It is useful when taking numbers from a string (character array) as input and you need to count through or do arithmatic operation on.
*/

int		ft_atoi(const char *str) 
{
	size_t			i;						// I used this as an iterator to count through the string array index one by one startng from 0
	size_t			num; 					// this is the number that you will return
	size_t			sign; 					// to account for a negative input

	i = 0;
	num = 0;
	sign = 1;                           
	while (ft_isspace((str[i])) > 0)		// I check if the start of the array is an empty space (see ft_isspace function)
		i++;								// I want to start converting form an actual digit character 0 to 9 
	if (str[i] == 45 || str[i] == 43)
	{										// here I check if the character at the begining is a minus sign (ascii value 45) or a positive sign (ascii value 43)
		if (str[i] == 45)					// if the sign is negative i change my sign to -1 for i will times it with the number returned at the end and get a negative interger
			sign = -1;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)    // after dealing with spaces and the sign I check if at the current index the character is a digit if true i times num by 10   
	{									   // if it is the first digit num was zero so zero * 10 is zero now i have an actual 0 integer inside num. now i take the digit
		num = num * 10 + (str[i] - 48);	  // inside the current index that will range from 48 to 57 (ascii values for digits from zero to 9) and minus 48 (ascii value for zero digit)
		i++; 							 // for instance if it was the digit 1 (49 - 48 on ascii) I now have an actual interger 1 then I add it to whatever num was in this case num	
	}									// was 0 so (num = num * 10 + (str[i] - 48)) ***is the same as*** (0 = 0 * 10 + (49 - 48))
	return ((int)(num * sign));		   // leaving us with ******(0 + 1) so now we have an actual interger 1 we can perfom arithmatic operations on we do this for every digit until the
}									  // we reach a non digit character in our loop.... We return the value of num at the end of the loop times the sign to account for negative.
