#include <stdio.h>
void output(int N){
	if(N>0){
		for(int j=N;j>0;j--){
			if(j>1){
				printf("%d+",N);
			}
			else 
				printf("%d",N);
		}
		printf("=%d\n",N*N);
		output(N-1);
	}
}
void output2(int n){
	if(n>0){
		output2(n-1);
                for(int j=0;j<n;j++){
                	if(j<n-1){
                        	printf("%d+",n);
                        }
			else{
				printf("%d",n);
			}
		}
                printf("=%d\n",n*n);
	}
}
int main(){
	int n;
	scanf("%d",&n);
	if(n%2==0){
		output(n);
		return 0;
	}
	else
		output2(n);
	return 0;
}
