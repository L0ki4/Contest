#include <stdio.h>
int main() 
{
	unsigned char b[2];
	b[0] = 0x1;
	b[1] = 0x1;

	FILE *F1 = fopen("source", "rb");
	FILE *F2 = fopen("cracked", "wb");
	unsigned char x;
	fread(&x, sizeof(char), 1, F1); //считали первый элемент
	b[0] = x; //первый элемент записали в x
	while(fread(&x, sizeof(char), 1, F1)) //считали второй в х
	{
		b[1] = b[0]; //в б1 лежит теперь первый 
		b[0] = x; //в б0 второй
		if ((b[0] == 0x11) && (b[1] == 0x75))
		{
			b[1] = 0x74;
		}
		fwrite(&b[1], sizeof(char), 1, F2);
	}
	fwrite(&b[0], sizeof(char), 1, F2);
	fclose(F1);
	fclose(F2);
	return 0;
}