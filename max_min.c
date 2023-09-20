#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void ran(int n,int arr[]){
	int max,min;
        int max_i,min_i;
	for(int i=0;i<n;i++){
		arr[i]=rand()%30;
		printf("%d ",arr[i]);
	}
	for(int i=1;i<n;i++){
		max=0;
		min=0;
		if(arr[max]<arr[i]){
                        max=i;
		}
                if(arr[min]>arr[i]){
                        min=i;
                }
	}
	printf("min_i=%d %d",min_i,max_i);
}
int main(){
	srand(time(0));
	int n;
	scanf("%d",&n);
	int arr[n];
	ran(n,arr);
	return 0;
}
