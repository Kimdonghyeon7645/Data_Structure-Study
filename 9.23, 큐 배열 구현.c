#include<stdio.h>

void main(){
	const int N=10;
	int arr[N], cho, front = -1, rear = -1;
	while(1){
		printf("큐의 값 : ");
		for(int i= front; i>rear; i--)		printf("%d ", arr[i]); 
		printf("\n실행할 작업을 선택하세요. \n삽입= 1, 삭제= 2, 종료= 3 : ");
		scanf("%d", &cho);
		if(cho==1){
			if(front >= N){
				printf("더이상 삽입할 수 없습니다! \n");
				continue;
			}
			printf("삽입할 값: ");
			scanf("%d", &arr[++front]);
		}else if(cho==2){
			if(front == rear){
				printf("삭제할 값이 없습니다!(큐가 비여있습니다) \n");
				continue;
			}
			printf("삭제된 값: %d\n", arr[++rear]);
		}else if(cho==3){
			printf("프로그램을 종료합니다...");
			break;
		}else	
			printf("지정 외의 값을 입력했습니다! \n");
		printf("\n");
	}
}
