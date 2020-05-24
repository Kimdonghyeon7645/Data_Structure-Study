#include<stdio.h>

void main(){
	char oper[40]={0}, a[100]={0};
	int n = 0, nn = 0;	//n은 연산자 배열 인덱스, nn은 괄호 시작 인덱스  
	printf("중위식을 후위식으로 바꾸는 프로그램입니다. \n\n중위식을 입력하세요: ");
	scanf("%s", a);
	for(int i = 0; a[i] != '\0'; i++){
		if((a[i]>='0' && a[i]<='9') || (a[i]>='a' && a[i]<='z') || (a[i]>='A' && a[i]<='Z'))
			printf("%c", a[i]);	// 숫자거나 문자면 킵  
		else if(a[i]=='+' || a[i]=='-' || a[i]=='*' || a[i]=='/'){	// 연산자(사칙연산자)면  	
			if(nn>0){	//괄호 안이면 
			 	while(((a[i]=='+' || a[i]=='-') && nn>n) || ((a[i]=='*' || a[i]=='/') && ((oper[nn-1]=='*' || oper[nn-1]=='/') || nn-1==n))) 
					printf("%c", oper[--nn]);
				oper[nn++] = a[i];	// 연산자 배열에 넣어주기
			}else{	//괄호 없으면
				while(((a[i]=='+' || a[i]=='-') && n!=0) || 	// +, -인데 배열에 값있으면 
				((a[i]=='*' || a[i]=='/') && (oper[n-1]=='*' || oper[n-1]=='/')))	// *, /인데 배열에 *, / 있으면  
					printf("%c", oper[--n]);	// 연산자 배열값을 모두 비움 
				oper[n++] = a[i];	// 연산자 배열에 넣어주기					
			}
		}else if(a[i]=='(')	nn=n;
		else if(a[i]==')'){
			while(nn<n)
				printf("%c", oper[--n]);
			nn=0;	
		}
	}
	while(n>0)
		printf("%c", oper[--n]);
}
