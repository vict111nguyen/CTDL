#include <stdio.h>
#include <stdlib.h>

void selectionSort(int arr[], int soPhantu){
    for (int i = 0; i < soPhantu - 1; i++)
    {
        int i_min = i;
        int value_min = arr[i];
        for (int j = i; j < soPhantu; j++)
        {
            if(arr[j]<value_min) {
                value_min = arr[j];
                i_min = j;
            };
            
        }
        arr[i_min] = arr[i];
        arr[i] = value_min;
    } 
}
//3 0 1 5 2
//Duyệt dãy từ vị trí i -> cuối, chọn một giá trị là i_min và value_min = arr[i_min]
// khi có giá trị nào < value_min -> value_min = giá trị đó, i_min = vị trí đó,
// duyệt cho đến cuối cùng -> tìm đọc value_min cuối cùng và i_min cuối cùng
// -> đổi chỗ giá trị min đó với vị trí i


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

    selectionSort(arr, soPhantu);
    printf ("Ta co day so sau khi sap xep: ");
    for (int i = 0; i < soPhantu; i++)
    {
        printf("%d ", arr[i]);
    }
    
    return 0;
}