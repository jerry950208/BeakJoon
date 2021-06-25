#include <stdio.h>
int main(){
	int n;
	int i=665,j;
	int cnt=0;
	scanf("%d",&n);
	
	while(1){
		i++;
		j=i;
		while(1){
			if(j%1000==666){
				cnt++;
				if(j%1000==666&&(j/1000)%10==6)
				break;
			}
			j/=10;
			if(j/10==0)
				break;
		}
		if(cnt==n)
			break;
	}
	printf("%d",i);
	return 0;
}
