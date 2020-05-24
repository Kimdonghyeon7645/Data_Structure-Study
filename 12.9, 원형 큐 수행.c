#include <stdio.h>
#include<cursor.h>
#define MAX 8

int isFull(int r, int f);	//	큐가 가득찼는지 검사하는 함수 (48~55행) 
int isEmpty(int r, int f);	//	큐가 비었는지 검사하는 함수	(57~63행) 
void QueueNumberPrint(char Queue[], int i, int j);	 //	큐의 숫자를 출력하는 함수(QueuePrint()에서 씀)  
void QueuePrint(char Que[]);	//	큐를 시각적으로 보이게 하는 함수 (81~96행) 

void main(){
	char ch, Queue[MAX] = {0};	// ch = 원소 입력받는 변수, Queue[MAX] = 말이필요없다. 
	int rear = 0, front = 0;	// rear, front = 꼬다리 인덱스 값 저장 변수; 
	
	while(1){
		QueuePrint(Queue);	//큐 출력하는 함수 
		printf("rear = %d / front = %d", rear, front);
		printf(" 입력할 값: ");
		scanf("%c", &ch);
		if(ch == 10){	//	이상한문자(엔터키) 예외처리
			clrscr();
			printf("※상태: 인식할 수 없는 문자입니다!\n\n");
			continue;
		}
		getchar();	
		if(ch=='9')	break;	//exit(반복문 탈출!) 
		else if(ch=='0'){	//Pop(원소 삭제) 
			if(isEmpty(rear, front)){	//큐 비어있는지 검사 함수
				clrscr();
				printf("※상태: 삭제한 값: %c\n\n", Queue[front+1]); 
				front = (front+1)%MAX;
				Queue[front]=0;
			}
		}else{				//Push(원소 삽입) 
			if(isFull(rear, front)){	//큐 꽉차있는지 검사 함수
				rear = (rear+1)%MAX;
				Queue[rear]=ch;
				clrscr();
				printf("※상태: 삽입한 값: %c\n\n", ch);
			}
		}	
	}
	printf("\n프로그램이 퇴근합니다...");
}


int isFull(int r, int f){
	if((r+1)%MAX!=f)	return 1; 
	else{
		clrscr();
		printf("※상태: Queue가 꽉찼습니다(삽입불가)\n\n");
		return 0;
	}
}

int isEmpty(int r, int f){
	if(r%MAX!=f)	return 1;
	else{
		clrscr();
		printf("※상태: Queue가 비었습니다(삭제불가)\n\n");
		return 0;
	}	
}

void QueueNumberPrint(char Queue[], int i, int j){
	if(i<=j){
		for(int k = i; k<=j; k++){
			printf("│");
			Queue[k]!=0 ?  printf(" %c", Queue[k]) : printf("  ");
			printf("│ ");
		}
	}else{
		for(int k = i; k>=j; k--){
			printf("│");
			Queue[k]!=0 ?  printf(" %c", Queue[k]) : printf("  ");
			printf("│ ");
		}
	}
}

void QueuePrint(char Que[]){
	printf("아무 문자를 입력하면 원소가 저장(push)됩니다.\n");
	printf("0 입력 : 원소를 삭제(pop)합니다.\n");
	printf("9 입력 : 프로그램을 종료합니다."); 
	printf("\n┌──┐ ┌──┐ ┌──┐\n");	
	QueueNumberPrint(Que, 0, 2);
	printf("\n└-0┘ └-1┘ └-2┘ \n");
	printf("┌──┐      ┌──┐ \n");
	QueueNumberPrint(Que, 7, 7);
	printf("     ");
	QueueNumberPrint(Que, 3, 3);
	printf("\n└-7┘      └-3┘\n"); 
	printf("┌──┐ ┌──┐ ┌──┐\n");	
	QueueNumberPrint(Que, 6, 4);
	printf("\n└-6┘ └-5┘ └-4┘\n"); 
}
