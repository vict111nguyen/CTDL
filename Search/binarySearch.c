#include <stdio.h>
#include <stdlib.h>

int binarySearch(int arr[], int soPhantu, int searchNumber){
    int left = 0, right = soPhantu -1;
    while (left <= right)
    {
        int mid = (left + right)/2;
        if (arr[mid] == searchNumber){
            return mid;
        }
        else if (arr[mid] > searchNumber){
            right = mid -1;
        }
        else left = mid +1;
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
    for (int i = 0; i < soPhantu; i++)
    {
        fscanf(file, "%d", &arr[i]);
    }
    fclose(file);
    printf("searchNumber: %d\n", searchNumber );
    printf ("Day so: ");
    for (int i = 0; i < soPhantu; i++)
    {
        printf("%d ",arr[i]);
    }
    printf ("\n");


    int result = binarySearch(arr, soPhantu, searchNumber);
    if (result != -1)
    {
        printf("So can tim o vi tri: %d\n", result);
    }
    else {printf("Khong tim thay %d trong day so\n", searchNumber);}



    return 0;
}