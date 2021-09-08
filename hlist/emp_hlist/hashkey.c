#include <ctype.h>

int hashkey(int v)
{
	return  (tolower(v)-'a');
}
