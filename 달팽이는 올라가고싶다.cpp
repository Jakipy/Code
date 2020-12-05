#include <stdio.h>
#include <math.h>

int snailmoving(int a, int b, int v){
	int day;
	int up = v-b;
	int climb = a-b;
	if(up%climb == 0){
		day = up/climb;
	}
	else{
		day = (up/climb) + 1;
	}
	printf("%d",day);
	
	
}
int main(){
	int up,down,height;
	scanf("%d %d %d",&up,&down,&height);
	snailmoving(up,down,height);
	return 0;
	
}
