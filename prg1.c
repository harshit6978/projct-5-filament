#include <stdio.h>
#include <string.h>
 
int main()
{
  	char a[100];
  	int i;
  	
  	int freq[256] = {0}; 
 
  	printf("\n Please Enter any String :  ");
  	gets(a);
  	
  	for(i = 0; a[i] != '\0'; i++)
  	{
  		freq[a[i]]++;
	}
  		
  	for(i = 0; i < 256; i++)
  	{
		if(freq[i] != 0)
		{
			printf("%c:-  %d \n", i, a[i]);
		}
	}
	
  	return 0;
}
