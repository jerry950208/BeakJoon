#include <stdio.h>

int selfnum(){
	int i,num[10000],ssg;
	for(i=0;i<10000;i++){
		if(i<10){
			ssg=i+i%10;
			num[ssg]=1;
		}
		else if(i<100){
			ssg=i+(i/10)+(i%10);
			num[ssg]=1;
		}
		else if(i<1000){
			ssg=i+(i/100)+((i%100)/10)+(i%10);
			num[ssg]=1;
		}
		else if(i<10000){
			ssg=i+((i/100)/10)+((i/100)%10)+((i%100)/10)+((i%100)%10);
			if(ssg<10000)
			num[ssg]=1;
		}
	}
	
	for(i=0;i<10000;i++){
		if(num[i]!=1){
			printf("%d\n",i);
		}
	}
	return 0;
}

int main(){
	selfnum();
	return 0;
}
