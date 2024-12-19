
#include <stdio.h>

int bin_search(int x, int v[], int n) {
    int low, high, mid;

    low = 0;
    high = n - 1;
    while (low <= high) {
        mid = (low+high) / 2;
        if (x < v[mid]) {
            high = mid - 1;
        }
        else if (x > v[mid]){
            low = mid + 1;
        }
        else {
            return mid;
        }
    }
    return -1; // No Match
}


int main() {
    int array[] = {1, 3, 8, 15, 23, 32, 44, 57, 68, 79, 91, 103, 116, 123, 135, 148, 162, 176, 183, 197, 210, 225, 239, 254, 267, 281, 297, 303, 318, 332, 345, 360, 375, 390, 406, 419, 433, 449, 462, 477, 491, 507, 521, 536, 549, 562, 576, 589, 604, 617, 633, 647, 661, 676, 690, 705, 718, 732, 746, 761, 774, 790, 803, 817, 831, 846, 859, 875, 888, 903, 916, 930, 944, 958, 972, 986, 1000, 1015, 1029, 1043, 1057, 1072, 1086, 1100, 1114, 1129, 1143, 1157, 1171, 1186, 1200, 1214, 1228, 1243, 1257, 1271, 1285, 1300};
    int wanted = 0;
    printf("Searching for %d. Finded in %d", wanted, bin_search(wanted, array, 100));
}