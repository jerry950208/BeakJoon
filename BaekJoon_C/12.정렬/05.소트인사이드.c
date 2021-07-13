#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b){
	if(*(int *)a > *(int *)b)
	return -1;
	else if(*(int *)a < *(int *)b)
	return 1;
	else
	return 0;
}
int main(){
	int n;
	int arr[n];
	int i=0;
	int m;
	scanf("%d",&n);
	m=n;
	while(1){
		arr[i]=m%10;
		m/=10;
		i++;
		if(m/10==0 && m%10==0){
			break;	
		}
    }
	qsort(arr,i,sizeof(int),compare);

	for(int j=0;j<i;j++){
		printf("%d",arr[j]);
	}
	return 0;
}
