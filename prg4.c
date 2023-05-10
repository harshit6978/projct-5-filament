#include<stdio.h>
int main(){
	
	char a;
	
	printf("enter a value:-");
	scanf("%c",&a);
	
	if(a>='a' && a<='z'){
		a -=32;
		printf(" lowercase character is a:- %c",a);
	}
	else{
		printf("%c",a);
	}
	return 0;
}
