#include <stdio.h>
#include <stdlib.h>

void insertionSort(int arr[], int soPhantu){
    for (int i = 1; i < soPhantu; i++)
    {
        int j=i;
        while (j>0 && arr[j]<= arr[j-1])
        {
            int temp = arr[j-1];
            arr[j-1]= arr[j];
            arr[j] = temp;
            j = j -1;
        }  
    } 
}
// 1  4 2 1 0 -> 1 4 2 1 0 -> 1 2 4 1 0 -> 1 2 1 4 0 -> 1 1 2 4 0 > 1 1 2 0 4
// chọn một giá trị tại vị trí thứ 2 (arr[1]) -> dịch dần đến cuối:
// So sánh giá trí đó với số trước đó, nếu k đúng là tăng dần -> đổi lại, và lặp lại vòng từ đó về giá trị đầu

void insertionSort2(int arr[], int soPhantu){
    for (int i = 1; i < soPhantu; i++)
    {
        int key = arr[i];
        int j= i-1;
        while (j>=0 && arr[j]> key)
        {
            arr[j+1]= arr[j];
            j= j -1;
        }  
        arr[j+1]=key;
    } 
}
// 1 4 3 2 5 
//key = 4 -> k thay đổi
// key = 3 -> qua vòng While: 1 4 4 2 5 -> 1 3 4 2 5
//key =2 -> qua vong while lần 1: 1 3 4 4 5 -> lần 2: 1 3 3 4 5 ->  1 2 3 4 5
// sử dụng một giá trị key = phần tử thứ i
// so sánh lần lượt các phần tử phía trước nó, nếu giá trị lớn hơn key -> chèn key vào vị trị đó và đẩy phần phía sau xuống

int main(){
    int soPhantu;
    

    FILE *file;
    file = fopen("input.txt", "r");
    if(file == NULL){
        printf("error!");
        exit(1);
    }
    fscanf(file, "%d", &soPhantu);

    int arr[soPhantu];
    for (int i = 0; i < soPhantu; i++)
    {
        fscanf(file, "%d", &arr[i]);
    }
    fclose(file);

    insertionSort2(arr, soPhantu);
    printf ("Ta co day so sau khi sap xep: ");
    for (int i = 0; i < soPhantu; i++)
    {
        printf("%d ", arr[i]);
    }
    
    return 0;
}