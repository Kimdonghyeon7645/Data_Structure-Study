#include<stdio.h>

int main(){
    int c;
    double a, b, x;
    scanf("%lf %lf %d", &a, &b, &c);
    x=a/b;
    x*=pow(10, c);
	x+=0.5;
	x=floor(x);
	x/=pow(10, c);
	printf("%.*lf", c, x);
}
