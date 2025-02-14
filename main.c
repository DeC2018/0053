#include <stdio.h>

int maxSubArray(int* nums, int numsSize) {
    int maxSum = nums[0];
    int maxSumSoFar = 0;

    for (int i = 0; i < numsSize; i++) {
        maxSumSoFar += nums[i];
        if (maxSum < maxSumSoFar) {
            maxSum = maxSumSoFar;
        }
        if (maxSumSoFar < 0) {
            maxSumSoFar = 0;
        }
    }

    return maxSum;
}

int main() {
    int nums1[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int nums2[] = {1};
    int nums3[] = {5, 4, -1, 7, 8};

    int size1 = sizeof(nums1) / sizeof(nums1[0]);
    int size2 = sizeof(nums2) / sizeof(nums2[0]);
    int size3 = sizeof(nums3) / sizeof(nums3[0]);

    printf("Input: nums = [-2,1,-3,4,-1,2,1,-5,4]\nOutput: %d\n", maxSubArray(nums1, size1));
    printf("Input: nums = [1]\nOutput: %d\n", maxSubArray(nums2, size2));
    printf("Input: nums = [5,4,-1,7,8]\nOutput: %d\n", maxSubArray(nums3, size3));

    return 0;
}
