#include <stdio.h>
#include <stdlib.h>

void swap(int arr[], int x, int y){
    int temp = arr[x];
    arr[x] = arr[y];
    arr[y] = temp;
}

int partition(int arr[], int left, int right){
    //Giá trị pivot bằng giá trị đầu tiên
    int pivot = arr[left];
    int count = 0;
    //Đếm để xác định vị trí của pivot lớn thứ mấy trong day
    for (int i = left; i <= right; i++)
    {
        if(arr[i] < pivot){
            count++;
        }
    }
    int pivotIndex = left + count;
    //Chuyen pivot đến đúng vị trí
    swap(arr, left, pivotIndex);
    int  i = left, j = right;
    while (i < pivotIndex && j>pivotIndex)
    {
        while (arr[i] <= pivot)
        {
            i++;
        }
        while (arr[j] > pivot)
        {
            j--;
        }
        if (i < pivotIndex && j > pivotIndex)
        {
           swap(arr, i, j);
        }
        
    }
    return pivotIndex;
}

void quickSort(int arr[], int left, int right){
    if(left >= right){
        return;
        // Chia  
    }
    int pivot = partition(arr, left, right);
    // Trị:
    quickSort(arr, left, pivot -1);
    quickSort(arr, pivot + 1, right);
}


void printArr(int arr[], int soPhantu){
    printf("Day so sau khi duoc sap xep: ");
    for (int i = 0; i < soPhantu; i++)
    {
        printf("%d ", arr[i]);
    }
    printf ("\n");
}

int main() {
    int soPhantu;
    printf("Nhap vao so phan tu: "); 
    scanf("%d", &soPhantu);

    int arr[soPhantu];
    printf("Nhao vao cac phan tu: ");
    for (int i = 0; i < soPhantu; i++)
    {
        scanf("%d", &arr[i]);
    }
    int left = 0, right = soPhantu - 1;

    quickSort(arr, left, right);
    printArr(arr, soPhantu);

    return 0;
}
