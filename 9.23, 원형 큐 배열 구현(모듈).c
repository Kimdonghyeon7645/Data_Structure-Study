#include<stdio.h>
int arr[5], cho, front = 0, rear = 0, i;

void print(){
	printf("큐의 값 : ");
		if(rear!=front){
			for(i= front+1; i<rear && i != front; ++i%5)
				printf("%d ", arr[i%5]);			
		}else
			printf("비여있음");
}
void push(){
	if((rear+1)%5 == front)		printf("더이상 삽입할 수 없습니다! \n");
	else{
		printf("삽입할 값: ");
		scanf("%d", &arr[++rear%5]);
	}
}
void pop(){
	if(front == rear)	printf("삭제할 값이 없습니다!(큐가 비여있습니다) \n");
	else	printf("삭제된 값: %d\n", arr[++front%5]);
} 

void main(){
	while(1){
		print();	
		printf("\n실행할 작업을 선택하세요. \n삽입= 1, 삭제= 2, 종료= 3 : ");
		scanf("%d", &cho);
		if(cho==1)		push();	
		else if(cho==2)		pop();
		else if(cho==3){
			printf("프로그램을 종료합니다...");
			break;
		}else	printf("지정 외의 값을 입력했습니다! \n");
		printf("\n");
	}
}
