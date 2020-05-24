#include <stdio.h> 
#include <math.h> 
  
void main(){     
	int A,B;       
	scanf("%d %d", &A, &B);       
	printf("%d", (B-A+1) - (int)sqrt(B) + (int)sqrt(A - 1));       
}
/* sqrt(B) B까지의 모든 완전 제곱수의 개수 
ex)		sqrt(9) -> 3 인데, 3이 (1, 2, 3인 제곱수의 개수)해서 제곱수의 개수를 뜻하기도 한다. 
   sqrt(A) A-1까지의 모든 완전 제곱수의 개수
		1~B가 아니라 A~B 이므로, 1~A 값은 빼주어야 함, 근데 여기서 A를 포함하므로 A-1을 매개변수로 넣어줌  

#include<stdio.h>
void main(){
	int a, b, i, su;
	scanf("%d %d", &a, &b);
	for(i=1; i*i<a; i++);
	for( ; i*i<=b; i++) 
		su++;
	su--;
	printf("%d", (b-a+1)-su); 
}//		이것도 돼는데, 알고리즘 대회에서 안먹음.. ㅜㅜ 

*/

