#include<stdio.h>
#include<stdlib.h>

typedef struct _node{
	int data;
	struct node* link;
}node;

node* top=NULL;

void push(int n){
	node* newnode = (node*)malloc(sizeof(node));
	newnode->data=n;
	newnode->link=top;
	top=newnode;
}
int pop(){
	int re = top->data;
	node* temp= top->link;
	free(top);
	top=temp;
	return re;
}

void main(){
	int cho;
	node* head = top;
	printf("연결리스트로 스택 구현 프로그램입니다.\n");
	while(1){	
		printf("어떤 작업을 하시겠습니까? (1: push,  2: pop,  3: exit)\n");
		scanf("%d", &cho);	
		switch(cho){
			case 1:	
				printf("저장할 값을 입력하세요: "); 
				scanf("%d", &cho);	
				push(cho);	
				break;
			case 2: 	
				printf("삭제한 값: %d\n\n", pop());	
				break;
			case 3:
			 	printf("프로그램을 종료합니다...");	
				return; 
				break;
			default:
				printf("제대로 된 값을 입력하십시오\n\n");	
				break;
		} 
		head = top;
		while(head != NULL){
			printf("%d\n", head->data);
			head=head->link;			
		}
	}
	while(head->link != NULL){
			node * del = head;
			head=head->link;
			free(head);
		}
}
