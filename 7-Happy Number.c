#include <stdio.h>
#include <math.h>
#include <string.h>

int nextHappy(int n) {
	int sum = 0;
    int num;
    while (n) {
    	num = n % 10;
    	sum += num * num;
    	n   = n / 10; 
    }
    return sum;
}

bool isHappy(int n) {
    int first = n, second;
    second = nextHappy(first);
    int count=0;
    while (first != second && count<10000) {
    	first  = nextHappy(first);
    	second = nextHappy(second);
    	second = nextHappy(second);
        count++;
    }
    if (count > 9999) printf("long time%d\n", second);
    printf("count: %d\n", count);
    return first == 1;
}

int main() {
	int num = 19;
	if (isHappy(num)) printf("Happy Number");

	else printf("Not A Happy Number");
}