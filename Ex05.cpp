#include <stdio.h>

int binary_search_recursive(int arr[], int low, int high, int x) {
    if (high >= low) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == x)
            return mid;

        if (arr[mid] > x)
            return binary_search_recursive(arr, low, mid - 1, x);

        return binary_search_recursive(arr, mid + 1, high, x);
    }

    return -1;
}

void performBinarySearch() {
    int arr[] = {1, 3, 5, 17, 27};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 17;
    int result = binary_search_recursive(arr, 0, n - 1, x);
    if(result == -1){
    	printf("Phan tu khong ton tai\n");
	} else{
		 printf("Vi tri phan tu duoc tim thay la: %d\n", result);
	} 
}

int main(void) {
    performBinarySearch();
    return 0;
}

