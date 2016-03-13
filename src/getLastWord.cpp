/*

Problem : Return the Last word in a string

Input : I will do this without using String Library
Output : Library

Note:Dont modify original string Neglect Spaces at the right end and at left end if required .
->Create a new string and return it , Use dynamic memory allocation .
*/
#include <stdlib.h>


int space(char *str, int len){

	int i = 0;
	int position = -1;
	while (i < len){
		if (str[i] == ' ')
			position = i;
		i++;
	}
	return position;
}

char * get_last_word(char * str){

	int i = 0;
	int position, len;

	char *result = (char*)malloc(30 * sizeof(char));

	if (str == NULL)
		return NULL;

	else{
		while (str[i] != '\0'){
			i++;
		}
		len = i;
		position = space(str, len);
		if (position == -1){
			i = 0;
			while (i < len){
				result[i] = str[i];
				i++;
			}
			result[i] = '\0';
			return result;
		}
		while (position == len - 1){
			len--;
			position = space(str, len);
		}
		if (position == -1){
			i = 0;
			while (i <= len){
				result[i] = str[i];
				i++;
			}
			result[i] = '\0';
			return result;
		}
		else{
			i = 0;
			position++;
			while (position < len){
				result[i] = str[position];
				i++;
				position++;
			}
			result[i] = '\0';
			return result;
		}
	}
}
