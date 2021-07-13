#include <stdio.h>

int main(){
	int n,cnt=0,m;
	scanf("%d",&n);
	m=n;
	while(1){
		m=((m%10)*10) + ((m/10+m%10)%10);
		cnt++;
		if(m==n)
		break;
	}
	printf("%d\n",cnt);
	return 0;
}
