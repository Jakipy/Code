#include <stdio.h>

int main(void) {
  int big = 5, small = 3;
  int n,count=0;
  scanf("%d",&n);
  int max,min,sub,compare=0,xcompare=0;
  max = n/5;
  min = 1;
  if(n==0){
    count = -1;
  }
  else{
    if(n%big==0){
      count = max;
      
    }
    else if(n-(max*big)%small==0){
      count = max+1;
      
    }
    else if(n%big!=0){
    	for(int i = max; i>=min; i--){
      		sub = n-(i*big);
      		printf("i = %d\n",i);
      		printf("sub = %d\n",sub);
          
        	if(sub%small==0){
          		compare = i+(sub/small);
          	}
          	else{
          		xcompare = n/3;
			}	
			if(compare == 0){
				count = xcompare;
			}
			else{
				if(compare > xcompare){
					count = xcompare;
				}
				else{
					count = compare;
				}
			}
    }
      
      
    

    	
	}
	else{
		count = -1;
	}

  
  }
  printf("compare = %d\n",compare);
  printf("xcompare = %d\n",xcompare);
  printf("count = %d\n",count);
  printf("max number of 5 in this number = %d\n",max);
  return 0;
}
