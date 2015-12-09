#include <stdio.h>

int addDigits(int num) {
    return 1 + (num - 1) % 9;
}

int main() {
	int num = 1231;
	printf("result: %d", addDigits(num));
}