#include <stdio.h>
#include <stdlib.h>

int linearSearch(int arr[], int soPhantu, int searchNumber){
    for (int i = 0; i < soPhantu; i++)
    {
        if(arr[i]==searchNumber){
            return i;
        }

    }
    return -1;
    
}

int main(){
    int arr[100];
    int soPhantu, searchNumber;
    FILE *file;

    file = fopen("input1.txt", "r");
    if(file == NULL) {
        printf("Loi mo hoac tao file");
        exit(1);
    }

    fscanf (file, "%d", &soPhantu);
    fscanf (file, "%d", &searchNumber);
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


    int result = linearSearch(arr, soPhantu, searchNumber);
    if (result != -1)
    {
        printf("So can tim o vi tri: %d", result);
    }
    else {printf("Khong tim thay %d trong day so", searchNumber);}



    return 0;
}