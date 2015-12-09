#include <stdio.h>

void moveZeroes(int* nums, int numsSize) {
	int place = 0;
	for (int i = 0; i < numsSize; i++) {
		if (nums[i] != 0) {
			nums[place] = nums[i];
			place++;
		}
	}
	
	for (int i = numsSize; i > place; i--) {
		nums[i - 1] = 0;
	}
}
