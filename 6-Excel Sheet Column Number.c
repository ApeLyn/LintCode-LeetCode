#include <stdio.h>
#include <math.h>
#include <string.h>

int titleToNumber(char* s) {
    int sum=0,i;
    for (i=strlen(s); i--; i>0) {
    	 sum += pow(26,strlen(s)-i-1) * (s[i] - 'A' + 1);
    }
    return sum;
}

int main() {
	char* s = "AB";
	int result;
	result = titleToNumber(s);
	printf("result: %d", result);
}