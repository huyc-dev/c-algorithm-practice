//非递归二分搜索算法的实现
 
#include <stdio.h>
 
int binarySearch(int arr[], int left, int right, int target) {
	printf("===== 查找目标值：%d =====\n", target);
	while (left <= right) {
		int mid = left + (right - left) / 2;
		printf("left=%d, right=%d, mid=%d, arr[mid]=%d\n", left, right, mid, arr[mid]);
		if (arr[mid] == target) {
			printf("找到目标值！返回索引：%d\n\n", mid);
			return mid;
		}else if (arr[mid] < target) {
			printf("arr[mid] < target → left = mid + 1 = %d\n", mid + 1);
			left = mid + 1;
		}else {
			printf("arr[mid] > target → right = mid - 1 = %d\n", mid - 1);
			right = mid - 1;
		}
	}
	printf("未找到目标值返回 -1\n\n");
	return -1;
}
 
int main() {
	int arr[] = { 2,4,6,8,10 };
	int n = sizeof(arr) / sizeof(arr[0]);
	int target = 6;
	int result = binarySearch(arr, 0, n - 1, target);
 
	target = 8;
	result = binarySearch(arr, 0, n - 1, target);
 
	target = 1;
	result = binarySearch(arr, 0, n - 1, target);
	
 
	target = 11;
	result = binarySearch(arr, 0, n - 1, target);
 
	target = 5;
	result = binarySearch(arr, 0, n - 1, target);
 
	return 0;
}
