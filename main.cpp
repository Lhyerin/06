#include <iostream>
#include <stdio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int get_integer(int y)
{
	printf("값을 입력하세요.");
	scanf("%i",&y);
	return y;
}

int combination(int x, int y, int z)
{   
    int comb;
    comb =x/(y*z);
    return comb;
}


int factorial(int x)
{
	int res=1;
	int i;
	for(i=1;i<=x;i++)
	   res=res*i;
	return res;
}

int main(void)
{
	int n,r,m,k,o,comb;
	n=get_integer(n);
	r=get_integer(r);	
	m=factorial(n);
	k=factorial(n-r);
	o=factorial(r);
	comb=combination(m,k,o);
	printf("%i",comb);

}
