#include<stdio.h>

void even(int);

int main(){
	int num;
  
	printf("ENTER YOUR NUMBER: ");
	scanf("%d",&num);
  
	even(num);
  
	return 0;
}
void even(int num1){
	if(num1%2==0){
		printf("%d IS AN EVEN NUMBER",num1);
	}
	else{
		printf("%d IS AN ODD NUMBER",num1);
	}
}
