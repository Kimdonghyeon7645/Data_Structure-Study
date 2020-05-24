#include<stdio.h>
#include<stdlib.h>

typedef struct node{
	int day;
	struct node* link; 	
}NODE;

void main(){
	char *arr[8] ={"읎어", "월", "화", "수", "목", "금", "토", "일"};
	NODE d1, d2, d3, d4, d5, d6, d7;
	NODE *week = &d1;
	d1.link = &d2;
	d2.link = &d3;
	d3.link = &d4;
	d4.link = &d5;
	d5.link = &d6;
	d6.link = &d7;
	d7.link = NULL;

	for(int i=1; week!=NULL; i++){
		week->day=i;	//	다시 알아두자!	ptr->a  ==  *(ptr).a 
		week = week->link;
	}
	week=&d1;
	for(int i=1; week!=NULL; i++){
		printf("%s요일\n", arr[week->day]);
		week = week->link;
	}
}
