#include<stdio.h>
int main(){
	int p,q,r;
	scanf("%d%d%d",&p,&q,&r);
	if((p>=q&&p<=r)||(p>=r&&p<=q)){
		printf("second largest number= %d",p);
	}
	else if((q>=p&&q<=r)||(q>=r&&q<=p)){
		printf("second largest number= %d",q);
	}
	else {
		printf("second largest number= %d",r);
	}
	

	
	
return 0;
	
	
	
	
	
}
