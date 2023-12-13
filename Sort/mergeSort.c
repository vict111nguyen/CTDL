#include <stdio.h>
#include <stdlib.h>


void merge(int arr[], int left, int right, int mid){
    //tao ra 2 mang trai va phai tam thoi
    int len_left = mid + 1 - left;
    int len_right = right - mid;
    int arrLeft[len_left];
    int arrRight[len_right];
    //copy du lieu vao 2 mang tam thoi
    for (int i = 0; i < len_left; i++)
    {
        arrLeft[i] = arr[i + left]; 
    }
    for (int i = 0; i < len_right; i++)
    {
        arrRight[i] = arr[i + mid +1];
    }

    //Ghep 2 mang lai voi nhau
    int i_left = 0, i_right = 0;
    int k = left;
    while (i_left < len_left && i_right < len_right)
    {
        if (arrLeft[i_left] <= arrRight[i_right]) 
        {
            arr[k] = arrLeft[i_left];
            i_left++;
        }
        else{
            arr[k] = arrRight[i_right];
            i_right++;
        }
        k++;
        
    }

    //copy nhung phan con lai ben trai chua duoc dua vao
    while (i_left< len_left)
    {
        arr[k]= arrLeft[i_left];
        i_left++;
        k++;
    }
    //copy nhung phan con lai ben phai chua duoc dua vao
    while (i_right< len_right)
    {
        arr[k]= arrRight[i_right];
        i_right++;
        k++;
    }

}

void mergeSort(int arr[], int left, int right){
    if (right >left){
        int mid = (left + right)/2;
        mergeSort(arr, left, mid);
        mergeSort(arr, mid +1, right);
    
        merge(arr, left, right, mid); 
    }
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

    mergeSort(arr, left, right);
    printArr(arr, soPhantu);
    return 0;
}


