#include<stdio.h>
int main(){
	int i,j,k,lan;
	printf("Enter Your lan: ");
	scanf("%d",&lan);
	int lan2;
	lan2=lan;
	for(i=1;i<=lan;i++){
		for(j=1;j<=lan2;j++){
			printf(" ");
		}
		lan2--;
		for(k=1;k<=i;k++){
			printf("1 ");
		}
		printf("\n");
	}
	return 0;
}