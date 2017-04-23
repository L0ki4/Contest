#include <stdio.h>
#include <dlfcn.h>

int main()
{
	char s[1024];
	scanf("%s", s);
	if(dlopen(s, RTLD_LAZY))
		printf("YES\n");
	else
		printf("NO\n");
	return 0;
}
