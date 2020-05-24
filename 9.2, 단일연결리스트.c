#include<stdio.h>
#include<stdlib.h>

typedef struct NODE{
	int data;
	struct NODE* link;	
}node;

void main(){
	int i = 1;
	node* ptr = (node*)malloc(sizeof(node));
	node* temp = ptr;
	ptr->data = 10; 
	ptr->link = NULL;
	while(1){
		do{
			printf("%d번 연결리스트 값: %d\n", i++, temp->data);
			temp = temp->link;
		}while(temp->link!=NULL);
		temp = ptr;
		printf("\n할 명령을 입력 하세요\n(1: 삽입, 2: 삭제, 3: 종료) : ");
		break;
	}
	free(ptr);
}

//단일 연결리스트 삽입, 삭제:	https://codevkr.tistory.com/49
//단일 연결리스트 출력, 검색: 	https://codevkr.tistory.com/50?category=699626
