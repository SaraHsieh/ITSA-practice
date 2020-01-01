#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char word[1024];
    while(scanf("%s", word)!=EOF)
    {
        int count, i, n_num=0, n_new=0;
        char new[1024], num[10];
        for(i=0; i<strlen(word); i++)
	{
            if(word[i]>='0' && word[i]<='9')
	    {
                num[n_num++]=word[i];
                num[n_num]='\0';
            }
            else
	    {
                new[n_new++]=word[i];
                new[n_new]='\0';
                if((word[i+1]>='0' && word[i+1]<='9') || word[i+1]=='\0')
		{
                    count = atoi(num);
                    while(count--)
                        printf("%s", new);
                    n_num=n_new=0;
                }
            }
        }
        printf("\n");
    }
    return 0;
}
