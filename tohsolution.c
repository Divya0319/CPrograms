#include<stdio.h>
	void toh(int n, char x, char y, char z, int* invocations){
		(*invocations)++;
		if(n>1)
		{
			toh(n-1, x,z,y,invocations);
			printf("\nMove top of %c to %c using %c", x,y,z);
			toh(n-1, z,y,x,invocations);
		}
		else if(n==1) printf("\nMove top of %c to %c using %c",x,y,z);	
	}
void main(){
int n;
int invocations=0;
printf("Enter number of discs:");
scanf("%d", &n);
toh(n,'x','y','z',&invocations);
printf("\nNumber of invocations of toh()=%d\n", invocations);
}
