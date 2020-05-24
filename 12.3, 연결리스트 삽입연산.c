#include <stdio.h>
#include <stdlib.h>

typedef struct node{
	int data;
	struct node* link; 	
}NODE;

void Insert(NODE* header, int node, int d){
	NODE* insert = header;
	NODE* newnode = (NODE*)malloc(sizeof(NODE));
	newnode->data = d;
	if(header!=NULL){
		while(insert->data != node)	insert=insert->link;
		newnode->link = insert->link;
		insert->link=newnode;
	}else{
		header = newnode;
		newnode->link = NULL;
	}	 
	while(header->data != NULL){
		printf("%d ", header->data);
		header = header->link;
	}
}

void main(){
	NODE* header = NULL;
	int n, d;
	while(1){
		printf("삽입할 위치(의 앞 원소)와 원소를 입력하세요(0 0은 반복종료) : ");
		scanf("%d %d", &n, &d);
		if(n==0 && d==0)	break;
	}
}
