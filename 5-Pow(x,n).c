#include <stdio.h>

double myPow(double x, int n) {
    if (n==0) return 1.0;
    if (n<0) {
    	return n%2 == 0 ? myPow(x*x,n/2) : 1/x*myPow(x,n+1);
    }
    if (n>0) {
    	return n%2 == 0 ? myPow(x*x,n/2) : x*myPow(x,n-1);
	}
}

int main() {
	double result, x=34.00515;
	int n=-3;
	result = myPow(x,n);
	printf("result: %f",result);
}