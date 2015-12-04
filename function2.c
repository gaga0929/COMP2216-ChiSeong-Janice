#include <stdio.h>

void replace_first(int a[], size_t n, int oldint, int newint){
	size_t i;
	int c;
	for(i=0;i<n;i++){
		if(a[i]==oldint){
			a[i] = newint;
			break;
		} 		  
	}
	
}

int main(void){
	int i;
	char a[] = "chiseong oh";
	int b[] = {1,2,3,4,5,1,2};
	replace_first(b,7,2,8);
	for(i=0;i<7;i++)
		printf("%d 	",b[i]);
	printf("\n");
	
	return 0;
}