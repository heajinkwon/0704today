#include <stdio.h>

void swap (int A, float B);

int main(){
	int a;
	float b;
	printf("int ��a, float�� b�Է� : ");
	scanf("%d %f",&a,&b); 
	swap(a,b);
}

void swap (int a, float b)
{

	int *aa = &a;
	float *bb = &b;
	double temp;
	
	printf("a : %d, b : %f\n",*aa,*bb);
	
	temp = (double)*aa;
	*aa = *bb;
	*bb = temp;
	
		printf("a : %d, b : %f",*aa,*bb);
}
