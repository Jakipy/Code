#include <stdio.h>
int balckjack(int num,int maxnum,int* card,int max){
	int sum = 0;
	for(int i=0; i<num-2; i++){
        for(int j=i+1; j<num-1; j++){
            for(int k=j+1; k< num; k++){
                sum = card[i] + card[j] + card[k];
                if(sum > maxnum && sum <= max){
                    maxnum = sum;
                }
            }
        }
    }
    printf("%d\n", maxnum);
}
 
int main()
{
    int num, max;
    scanf("%d %d", &num, &max);
    int card[num];
    int maxnum = 0;
    
    
    for(int i=0; i<num; i++){
        scanf("%d", &card[i]);
    }
    balckjack(num,maxnum,card,max);
    return 0;
}

