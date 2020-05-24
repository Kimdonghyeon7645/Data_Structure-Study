#include<stdio.h>

void main(){
	int a, b, even=0;
	scanf("%d %d", &a, &b);
	for(int n=a; n<=b; n++){
		int sum = 0;
		for(int i=1; i*i<=n; i++)
			if(n%i==0){
				sum++;
				if(i*i<n)
					sum++;
			}	
		if(sum%2==0)	even++;
	}
	printf("%d", even);
}
