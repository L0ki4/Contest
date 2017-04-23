#include <stdio.h>
int main(int argc, const char * argv[]) 
{
	unsigned char a[4], b[4];
	a[0] = 0x0;
	a[1] = 0xCA;
	a[2] = 0x9A;
	a[3] = 0x3B;
	b[0] = 0x1;
	b[1] = 0x1;
	b[2] = 0x1;
	b[3] = 0x1;

	FILE *F1 = fopen("source", "rb");
	FILE *F2 = fopen("cracked", "wb");
	unsigned char x;
	while(fread(&x, sizeof(char), 1, F1))
	{
		b[3] = b[2];
		b[2] = b[1];
		b[1] = b[0];
		b[0] = x;
		if ((a[0] == b[3]) && (a[1] == b[2]) && (a[2] == b[1]) && (a[3] == b[0]))
		{
			x = 0x77;
		}
		fwrite(&x, sizeof(char), 1, F2);
	}
	return 0;
}