#include <stdio.h>

typedef struct Result{
    int lenMax;
    int start_pos;
    int end_pos;
} result;

result maxIncrease(int arr[], int soPhantu){
    result rs;
    rs.start_pos = 0;
    rs.end_pos = 0;
    
    int lenMax = 1;
    for (int i = 0; i < soPhantu; i++)
    {
        int j = i;
        int len = 1;
        while (arr[j+1] >= arr[j] && j < soPhantu -1)
        {
            len = len +1;
            if (lenMax < len){
                lenMax = len;
                rs.lenMax = lenMax;
                rs.start_pos = i;
                rs.end_pos = j + 1;
            }
            j++;
        }
        
    }
    return rs; 
}

int main(){
    int soPhantu;
    printf("Nhap vao so phan tu: "); scanf("%d", &soPhantu);

    int arr[soPhantu];
    printf("Nhap vao cac phan tu cua day: ");
    for (int i = 0; i < soPhantu; i++)
    {
        scanf("%d", &arr[i]);
    }

    result rs = maxIncrease(arr, soPhantu);
    printf("Do dai lon nhat ma cac phan tu trong day tang: %d\n", rs.lenMax);
    printf("Vi tri bat dau: %d va vi tri ket thuc: %d", rs.start_pos, rs.end_pos);

    return 0;
}