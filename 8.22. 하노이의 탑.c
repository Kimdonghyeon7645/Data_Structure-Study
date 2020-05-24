#include<stdio.h>

int i=0;
int fc(int n, int s, int f, int m){
	if(n>2){
	fc(n-1, s, m, f);
	printf("%d을 %d으로\n", s, f);
	i++; 
	fc(n-1, m, f, s);
	}else{
	printf("%d을 %d으로\n", s, m);
	printf("%d을 %d으로\n", s, f);
	printf("%d을 %d으로\n", m, f);
	i+=3;		
	}
}

void main(){
	int n, start_bar, middle_bar, final_bar;
	printf("차례대로 n값, 첫번째 바의 번호, 마지막 바의 번호, 중간 바의 번호를 입력하세요: ");
	scanf("%d %d %d %d", &n, &start_bar, &middle_bar, &final_bar);
	fc(n, start_bar, middle_bar, final_bar);
	printf("\n 총 횟수: %d번", i);
}
