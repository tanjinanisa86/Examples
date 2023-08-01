#include<stdio.h>
int main(){
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if (a>b&&a>c){
		printf("maximum= %d\n",a);
	}
	else if(b>a&&b>c){
		printf("maximum= %d\n",b);
	}
	else
	{
		printf("maximum= %d",c);
	}
	
	
	
	return 0;
	
	
	
	
	
}
