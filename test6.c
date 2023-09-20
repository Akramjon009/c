#include <stdio.h>
void chiqar(int n,int arr[],int juft[]){
	int c=0;
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
		if(!(i%2)){
			juft[c]=arr[i];
			c++;
		}
	}
	for(int i=0;i<c;i++){
		printf("%d ",juft[i]);
	}

}
int main(){
	int n;
	scanf("%d",&n);
	int arr[n];
	int juft[n];
	chiqar(n,arr,juft);
	return 0;
}
