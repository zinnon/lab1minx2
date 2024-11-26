#include <stdio.h>

int main(){
	int A;
	int B;
	printf("Type your number:");
	scanf("%d",&A);
	scanf("%d",&B);
	if (A>B){
		printf("%d is greater than %d",A,B);
	}

	return 0;
}
