#include <stdio.h>
#include <stdlib.h>

int jumpSearch(int arr[], int soPhantu, int searchNumber, int jumpStep){
    int i = 0; 

    while (i <= soPhantu && arr[i] < searchNumber)
    {
        if(arr[i]==searchNumber){
            return i;
        }
        i = i+ jumpStep;
    }
     int j = i;
    for (i = i - jumpStep; i <= j; i++) //Lưu ý i <= j Nếu k sẽ bị mis phần tử arr[j]
    {
        if(arr[i]==searchNumber){
            return i;
        }
    }

    return -1;    
}

int main(){
    int arr[100];
    int soPhantu, searchNumber, jumpStep;
    FILE *file;

    file = fopen("input1.txt", "r");
    if(file == NULL) {
        printf("Loi mo hoac tao file");
        exit(1);
    }

    fscanf (file, "%d", &soPhantu);
    fscanf (file, "%d", &searchNumber);
    fscanf (file, "%d", &jumpStep);
    for (int i = 0; i < soPhantu; i++)
    {
        fscanf(file, "%d", &arr[i]);
    }
    fclose(file);
    printf("searchNumber: %d", searchNumber );
    printf ("Day so: ");
    for (int i = 0; i < soPhantu; i++)
    {
        printf("%d ",arr[i]);
    }


    int result = jumpSearch(arr, soPhantu, searchNumber, jumpStep);
    if (result != -1)
    {
        printf("So can tim o vi tri: %d", result);
    }
    else {printf("Khong tim thay %d trong day so", searchNumber);}



    return 0;
}