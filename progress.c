#include <stdio.h>
#include <wchar.h>
#include <locale.h>

#define KA 255

int main()
{
	int i;
	char[16] = { "\033[41m", "\033[43m", "\033[42m", "\033[46m", "\033[44m", "\033[45m"};
	
	do{
	i = 0;
		do{
		printf("%c", char[i]);
		i++
		}while(i != 16);
	}while(1);
	
	return 0;
}
