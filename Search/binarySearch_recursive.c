#include <stdio.h>

//  1 2 3 4 6 7

int binarySearch(int arr[], int soPhantu, int searchNumber, int left, int right){
    if (left == right) {
        if (arr[left] == searchNumber){
            return left;
        }
        else return -1;
    }
    else {
        int mid = (left + right) / 2;
        if(arr[mid]== searchNumber){
            return mid;
        }
        else if (arr[mid] < searchNumber)
        {
            return binarySearch(arr, soPhantu, searchNumber, mid + 1, right);
        }
        else {return binarySearch(arr, soPhantu, searchNumber, left, mid -1);}
        
    }
}

void inputArray(int arr[], int soPhantu){
    printf("Nhap vao cac phan tu trong day: ");
    for (int i = 0; i < soPhantu; i++)
    {
        scanf("%d", &arr[i]);
    }
}

void displayResult(int arr[], int result, int searchNumber){
    if(result == -1) {printf("Khong tim thay %d trong day.\n", searchNumber);}
    else {
        printf("Phan tu can tim o vi tri: %d", result);
    }
}

int main(){
    int soPhantu;
    printf("Nhap vao so phan tu: "); scanf ("%d", &soPhantu);
    if(soPhantu < 1){
        printf("So phan tu khong hop le");
        return 1;
    }
    int arr[soPhantu];
    inputArray(arr, soPhantu);

    int searchNumber;
    printf("Nhap vao so can tim: "); scanf("%d", &searchNumber);
    int left = 0, right = soPhantu - 1;
    int result = binarySearch(arr, soPhantu, searchNumber, left, right);

    displayResult(arr, result, searchNumber);
    
    return 0;
}