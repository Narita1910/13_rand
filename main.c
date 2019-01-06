#include  <stdio.h>
#include <stdlib.h>   

int main(int argc, char *argv[])
{
	int count=0,i;
	char str[100];
	int a[3], num, max,x;
	while (fgets(str, sizeof(str), stdin)) {
		a[count]= atoi(str);  
		count++;
		
		if (count==3) {
			x = a[0];
			max = a[1];
			num = a[2];
			for (i = 0; i < num; i++) {
				x = (48271*x)mod(2^31-1);
				x= x / ((0x7fffffff + max - 1) / max) + 1;
				
				printf("%d\n", x);
			}
		}
	}
	return 0;
} 
