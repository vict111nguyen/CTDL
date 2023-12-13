#include <stdio.h>

void thapHanoi(int n, char a, char b, char c){
    if(n == 1){
        printf("Chuyen dia %d tu cot %c sang cot %c.\n", n, a, c);
    }
    else{
        thapHanoi(n-1, a, c, b);
        printf("Chuyen dia %d tu cot %c sang cot %c.\n", n, a, c);
        thapHanoi(n-1, b, a, c);
    } 
}


int main(){
    char a = 'A', b = 'B', c = 'C';
    int n;
    printf("Nhap vao so tang cua thap: ");
    scanf("%d", &n);
    thapHanoi(n, a, b, c);

    return 0;
}