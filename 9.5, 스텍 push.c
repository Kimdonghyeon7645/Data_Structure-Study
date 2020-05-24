#include<stdio.h>

int top = -1;
int arr[30];
void push(int data){
	top++;
	arr[top] = data;
}
int pop(){
	int re = arr[top];
	arr[top] = 0;
	top--;
	return re;
}
void prt(){
	printf("스텍의 저장된 상태\n\n");
	for(int i=top; i>=0; i--)
		printf("위에서%d번째 값: %d\n", top-i+1, arr[i]);
	if(top>=29){
		printf("<오류> - 스텍이 꽉 찼습니다!");
		return;
	}
}

void main(){
	int n;
	while(1){
		prt();
		printf("할 명령을 입력하세요(1: push, 2: pop, 그외 키: exit): ");	
		scanf("%d", &n);
		
		if(n==1){
			printf("\npush할 값을 입력하세요 :");
			scanf("%d", &n);
				if(n<0){
					printf("<오류> - 음수값이 입력되었습니다. push를 종료합니다.");
					break;
				}
			push(n);
		}else if(n==2){
			printf("pop한 데이터: %d\n", pop()); 
		}else{
			printf("프로그램을 종료합니다...");
			break;
		}
	}
}
