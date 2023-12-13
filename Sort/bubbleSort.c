#include <stdio.h>
#include <stdlib.h>

void bubbleSort(int arr[], int soPhantu){
    for (int i = 0; i < soPhantu - 1; i++)
    {
        for (int j = 0; j < soPhantu -1; j++)
        {
            if(arr[j]> arr[j+1]){
                int temp = arr[j];
                arr[j]= arr[j+1];
                arr[j+1]=temp;
            };
        }
        
    } 
}



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

    bubbleSort(arr, soPhantu);
    printf ("Ta co day so sau khi sap xep: ");
    for (int i = 0; i < soPhantu; i++)
    {
        printf("%d ", arr[i]);
    }
    
    return 0;
}