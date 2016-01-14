/*
OVERVIEW: Given a string, Return the substring of the main string from i index to j index
Indexes start from 0,ith letter and jth letter are included
E.g.: Input: "get_sub_string("abcdefgh",2,5) , Output: "cdef"

INPUTS: A string.

OUTPUT: return substring from [i,j]

INPUT2: I will Code for Mission RnD , 2,10
OUTPUT2:will Code

NOTES: Check Null Strings ,Include stddef for NULL if needed.Create a New string and return it ,dont modfiy
original String
*/

#include <stddef.h>
#include <stdlib.h>
int length_of_string(char *str)
{
	int i = 0;
	while (str[i] != '\0'){ i++; }
	return i;

}

char * get_sub_string(char *str, int i, int j){
	if (!str){ return NULL; }
	if (i > j){ return NULL; }
	else
	{
		int alpha = 0,index;
		char *string = (char*)malloc(length_of_string(str)*sizeof(char));
		for (index = i; index <= j; index++)
		{
			string[alpha++] = str[index];

		}
		string[alpha] = '\0';
		string = (char*)realloc(string, alpha*sizeof(char));
		return string;
	}
	return NULL;
    
}
