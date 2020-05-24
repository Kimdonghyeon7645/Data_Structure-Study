#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
	int data;
	struct Node* link;
}node;
node* top = NULL;
node* front = NULL;
node* rear = NULL;

void push(){
	int n;
	printf("입력할 값: ");
	scanf("%d", &n);
	node* Nnode = (node*)malloc(sizeof(node));
	Nnode->link = NULL;
	Nnode->data = n;
	if(front){
		rear->link = Nnode;
		rear = Nnode;
	}else{ 
		top = front = rear = Nnode;
	}
}
void pop(){
	if(front){
		node* temp = front;
		front = front->link;
		free(front);  
	}else{
		printf("삭제할 수 없습니다!(큐가 비였습니다) ");
	}
}
void exitpg(){
	printf("프로그램을 종료합니다..");
	while(top==NULL){
		node* temp = top;
		top = top->link;	
		free(temp);
	}
}

void main(){
	int i;
	while(1){
		printf("큐: ");
		while(top!=NULL){
			printf("%d ", top->data);
			top = top->link;
		}	
		printf("\n실행할 명령을 입력하세요. \n1=삽입, 2=삭제, 3=종료 : ");
		scanf("%d", &i);
		if(i==1)	push();
		else if(i==2)	pop();
		else if(i==3)	exitpg();
		else	printf("지정되지 않은 값 입니다!"); 
	}	
}
