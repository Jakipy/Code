#include <stdio.h>

int one(int n){
	int count;
	while(n != 1){
		if(n%3==0){
			n = n /3;
			count = count + 1;
			
		}
		else{
			n = n - 1;
			count ++;
			
		}
	}
	printf("%d",count);
}
int main(){
	int num;
	scanf("%d",&num);
	one(num);
	return 0;
	
}
