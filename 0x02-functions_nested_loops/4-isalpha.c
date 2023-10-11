#include "main.h"
/*
 *check a letter, lowercase or uppercase
 * Returns 1 if c is lowercase ,othherwise Returns 0 
 */

int _isalpha(int c)
{
       
	if((c >= 'a'  && c <= 'z')||(c >= 'a'  && c <= 'Z'))
                return(1);
        else
                return(0);
}
