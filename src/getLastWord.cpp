/*

Problem : Return the Last word in a string

Input : I will do this without using String Library
Output : Library

Note:Dont modify original string Neglect Spaces at the right end and at left end if required .
->Create a new string and return it , Use dynamic memory allocation .
*/
#include <stdlib.h>
int length(char *str)
{
	int i = 0;
	while (str[i] != '\0'){ i++; }
	return i;

}

char * get_last_word(char * str){
	if (!str){ return ""; }
	else
	{
		int size, i, j, alpha = 0, index;
		char *string = (char*)malloc(length(str)*sizeof(char));
		for (i = length(str) - 1; i >= 0; i--)
		{
			if (str[i] != ' '){ alpha++; }
			if (alpha > 0 && str[i] == ' '){ break; }

         }
		if (str[length(str) - 1] == ' ') { return ""; }
		for (index = i + 1, j = 0; str[index] != ' ' &&str[index] != '\0'; index++)
		{
			string[j++] = str[index];

		}

		string[j] = '\0';
		return string;
	}
	return "";
	
}
