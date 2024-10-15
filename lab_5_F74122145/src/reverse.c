#include "../include/reverse.h"
char *reverse(char *dst, const char *src)
{
	int len = strlen(src);
	for(int i = 0; i<len; i++){
		dst[i] = src[len-i-1];
	}
	return dst;
}
