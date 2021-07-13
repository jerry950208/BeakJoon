#include <stdio.h>

int main(){
	int n;
	float max=0.0, sum=0.0, a;
	scanf("%d",&n);
	int arr[n];
	for(int i=0; i<n; i++){
		scanf("%d ",&arr[i]);
		if(arr[i]>max)
			max=arr[i];
	}

	for(int i=0; i<n; i++){
		a=arr[i]/max*100;
		sum+=a;
	}
	printf("%lf",sum/n);
	return 0;
}
