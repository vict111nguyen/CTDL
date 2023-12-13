#include <stdio.h>

void swap(int arr[], int x, int y) {
    int temp = arr[x];
    arr[x] = arr[y];
    arr[y] = temp;
}

int partition(int arr[], int left, int right) {
    // Choose the rightmost element as the pivot
    int pivot = arr[right];
    int i = left - 1;

    for (int j = left; j <= right - 1; j++) {
        if (arr[j] <= pivot) {
            i++;
            swap(arr, i, j);
        }
    }

    // Place the pivot element in its correct position
    swap(arr, i + 1, right);
    return i + 1;
}

void quickSort(int arr[], int left, int right) {
    if (left < right) {
        // Partition the array and get the index of the pivot
        int pivotIndex = partition(arr, left, right);

        // Recursively sort the elements before and after the pivot
        quickSort(arr, left, pivotIndex - 1);
        quickSort(arr, pivotIndex + 1, right);
    }
}

void printArr(int arr[], int soPhantu) {
    printf("Day so sau khi duoc sap xep: ");
    for (int i = 0; i < soPhantu; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int soPhantu;
    printf("Nhap vao so phan tu: ");
    scanf("%d", &soPhantu);

    int arr[soPhantu];
    printf("Nhap vao cac phan tu: ");
    for (int i = 0; i < soPhantu; i++) {
        scanf("%d", &arr[i]);
    }
    int left = 0, right = soPhantu - 1;

    quickSort(arr, left, right);
    printArr(arr, soPhantu);
    return 0;
}
