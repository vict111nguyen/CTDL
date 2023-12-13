#include <stdio.h>
#include <stdbool.h>



void printHoanvi(int arr[], int size){
    for (int i = 1; i < size + 1; i++)
    {   
        printf("%d", arr[i]);
    }
    printf ("\n");
    
    
}

void hoanVi(int arr[], bool check[], int k, int size){
    for (int i = 1; i <= size; i++)
    {
        if(!check[i]){
            arr[k] = i;
            if(k == size){
                printHoanvi(arr, size);
            }
            else {
                check[i]= true;
                hoanVi(arr, check, k+1, size);
                check[i] = false;
            }
        }
        
    }
    
}

int main(){
    int size;
    printf("Ban muon liet ke hoan vi cua: "); scanf("%d", &size);
    int arr[size + 1];
    bool check[size + 1];
    for (int  i = 1; i < size +1 ; i++)
    {
        
        check[i] = false;
        /* code */
    }
    int k = 1;


    hoanVi(arr, check, k, size);


    return 0;
}
