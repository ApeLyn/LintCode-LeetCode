class Solution {
public:
    /**
     * @param nums: The integer array.
     * @param target: Target number to find.
     * @return: The first position of target. Position starts from 0. 
     */
    int binarySearch(vector<int> &array, int target) {
        // write your code here
        long index = -1, first = 0, mid = 0;
        long last   = array.size() - 1;
        while (first < last){
            mid = (first + last) / 2;
            if (array[mid] < target) first = mid + 1;
            else if (array[mid] > target) last = mid - 1;
            else {
                index = mid;
                break;
            }
        }
        if (array[mid - 1] == target) index = mid -1;
        if (index == -1) return -1;
        else while(array[index] == target) index -= 1;
        return index+1;
    }
};
