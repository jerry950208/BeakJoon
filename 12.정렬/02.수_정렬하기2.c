#include <stdio.h>
#include <stdlib.h>
int num[1000000];

int compare(const void *a,const void *b){
	if(*(int *)a > *(int *)b)
	return 1;
	else if(*(int *)a < *(int *)b)
	return -1;
	else
	return 0;
}

int main(){
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&num[i]);
	}
	
	qsort(num,n,sizeof(int),compare);
	
	for(int i=0;i<n;i++){
		printf("%d\n",num[i]);
	}
	return 0;
}
