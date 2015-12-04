#include <stdio.h>

size_t find_first(const char s[], int c){
	size_t i=0;
	

	while(s[i]){
		if(s[i]==c)
			return i;
		i++;
	}
	return -1;
}

int main(void){
	char s[] = "chiseong oh";
	
	printf("%d",find_first(s,'o'));
		
	return 0;
	
}