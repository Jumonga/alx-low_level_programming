#include "main.h"
/**
 * A function to concatenate
 * two strings
 **/

char *_strcat(char *dest, char *src){
	int i, j;

	for (i =0; *dest[i] != '\0'; i++);

	//i is not terminating
	
	for (j =0; *src[j] != '0'; j++){
		*dest[i + j] = *src[j];
	}

	*dest[i + j] = '\0';

	return *dest;

}

