#include <stdio.h>

void shell_sort(int arr[], const int arr_len) {
    for (int gap = arr_len/2; gap > 0; gap /= 2) {
        for (int i = gap; i < arr_len; i++) {
            for (int j=i-gap; j>=0 && arr[j] > arr[j+gap]; j-=gap) {
                const int temp = arr[j];
                arr[j] = arr[j+gap];
                arr[j+gap] = temp;
            }
        }
    }
}

int main() {
    const int arr[10] = {5,7,4,9,8,3,1,2,6,0};
    shell_sort(arr, 10);
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}