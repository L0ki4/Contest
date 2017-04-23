#include <stdio.h>
int main()
{
        FILE *f1, *f2;
        int i = 0, j =0;
        char s[9][12] = {0};
        f1 = fopen("sourse", "r");
        f2 = fopen("cracked", "w");
        while(! feof(f1))
        {
                while(fgetc(f1) != '\0')
                {
                        s[i][j] = fgetc(f1);
                        j = j + 1;
                }
                j = 0;
                i = i + 1;
        }
        int n = i;
        for(i = 0; i < n; i++)
	{
		while(s[i][j]!='\0')
		{
                	printf("%c", s[i][j]);
			j++;
        	}
		j = 0;
	}
        fclose(f1);
        fclose(f2);
        return 0;
}

