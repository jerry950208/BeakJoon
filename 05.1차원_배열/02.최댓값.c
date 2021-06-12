#include <stdio.h>

int main(){
	int n[9],max=0,cnti;
	for(int i=1;i<=9;i++){
		scanf("%d",&n[i]);
		if(max<n[i]){
		max=n[i];
		cnt=i;
		}
	}
	printf("%d\n%d",max,cnt);
	return 0;
}
