#include <stdio.h>

int main(){
	int A;
	int B;
	int n1;
	int n2;
printf("Type your number:");
	scanf("%d\n",&n1);
	scanf("%d",&n2);
	if (n1>n2){
		printf("%d is greater than %d",n1,n2);
	 } else if(n2>n1){
		printf("%d is greater than %d",n2,n1);
	}else{
		printf("%d is equal to %d",n1,n2);
}
	
	 

return 0;
}
