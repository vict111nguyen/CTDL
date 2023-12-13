#include <stdio.h>

typedef struct Result 
{
    int sum;
    int start_pos;
    int end_pos;
} result;

int Sum(int arr[], int start_pos, int end_pos){
    int sum = 0;
    for (int i = start_pos; i <= end_pos; i++)
    {
        sum += arr[i];
    }
    return sum; 
}

result maxSumSubarray(int arr[], int soPhantu){
    result rs;
    rs.sum = arr[0];
    rs.start_pos= 0;
    rs.end_pos = 0;

    for (int i = 0; i < soPhantu; i++)
    {
        int currentSum = 0;
        for (int j = i; j < soPhantu; j++)
        {
            currentSum += arr[j];
            // int currentSum = Sum(arr, i, j);
            if(rs.sum < currentSum){
                rs.sum = currentSum;
                rs.start_pos = i;
                rs.end_pos = j;
            }
        }   
    }
    return rs;
}

int main(){
    int soPhantu;
   
    printf("Nhap vao so phan tu: "); scanf("%d", &soPhantu);

    printf("Nhap vao day so: ");
    int arr[soPhantu];
    for (int i = 0; i < soPhantu; i++)
    {
        scanf("%d", &arr[i]);  
    }
    result rs;
    rs = maxSumSubarray(arr, soPhantu);
    printf("Tong lon nhat cua mot day con: %d\n", rs.sum);
    printf("Day do bat dau tu  vi tri %d va ket thuc o vi tri %d\n", rs.start_pos, rs.end_pos);

    return 0;
}


