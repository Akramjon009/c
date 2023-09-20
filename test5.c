#include <stdio.h>
void chiqar(int n,int arr[]){
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	 for(int i=0;i<n;i++){
                printf("%d ",arr[i]*5);
        }
}
int main(){
	int n;
	scanf("%d",&n);
	int arr[n];
	chiqar(n,arr);
	return 0;
}
