#include<stdio.h>
int main()
{
	
	int r,c;
	
	for(r=1 ; r<=4 ; r++){
		
		for(c=1 ; c<=r ; c++){
			
			printf("%d ",c);
		}
		
		printf("\n");
	}
	for(r=5 ; r>=1 ; r--){
		for(c=1 ; c<=r ; c++){
			printf("%d ",c);
		}
		printf("\n");
	}
	
	
	return 0;
	
}
