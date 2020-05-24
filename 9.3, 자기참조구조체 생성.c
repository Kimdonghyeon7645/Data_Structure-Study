#include<stdio.h>
#include<stdlib.h>

typedef struct node{
	int data;
	struct node* link;
}NODE;
//	자기참조 구조체 

NODE* getnode(){
	NODE *temp = (NODE*)malloc(sizeof(NODE));
	temp->data = 0;
	temp->link = NULL;
	return temp;
}
void main(){
	printf("노드 생성 프로그램입니다.\n");
	NODE *new_node = getnode();
	printf("new_node = %d\n", new_node);
//	new_node는 포인터 변수, 주소값(가리키는 노드의 시작주소 값)을 저장
 
	printf("&new_node->data = %d\n", &new_node->data);
//	&new_node -> data == & (new_node -> data)

	printf("new_node->data = %d\n", new_node->data);
//	new_node -> data == (*new_node).data
}
