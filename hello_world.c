#include <stdio.h>
#include "USF_CODES.h"

#define MSG\
 "you little son of beatch!"

int main()
{	
	printf(MSG);
	printf("\n%d",MAX_OF_TWO(2,3));
	printf("57 is odd: %d, character z to upper is %c",IS_ODD(57),TO_UPPER('z'));
	PRINT_INT(666+456);
	return 0;
	
}







