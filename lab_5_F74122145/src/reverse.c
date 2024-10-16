#include "../include/reverse.h"
char *reverse(char *dst, const char *src)
{
	int len = 9;
	for(int i = 0; i<len; i++){
		dst[i] = src[len-i-1]; 
	}
	return dst;
}
