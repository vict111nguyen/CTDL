#include <stdio.h>

int luyThua(int a, int n){
    int p = 1;
    int i = 0;
    while ( i < n -2 )
    {
        i = i + 2;
        p = p * a * a;
    }
    if(n%2 == 0) {p=p*a*a;}
    else p = p * a;
    
    return p;
}

int main(){
    int a, n;
    printf("Nhap: a, n: ");
    scanf("%d %d", &a, &n);

    printf("%d^%d=%d", a, n, luyThua(a,n));
    return 0;
}