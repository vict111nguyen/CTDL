//Giải bai toán Fibonacci băng các cách khác nhau:
// Bài toán Fibonacci yêu cầu tính số Fibonacci thứ n trong dãy Fibonacci, 
// trong đó số Fibonacci đầu tiên và thứ hai là 0 và 1, 
// và số tiếp theo được tính bằng tổng của hai số trước đó trong dãy. 
//1. Đệ quy
#include <iostream>
#include <vector>
#include <time.h>

std::vector<int> memo(100, -1);

double fibonacci(double n){
    if(memo[n] != -1){
        return memo[n];
    }
    else if (n <= 1)
    {
        return memo[n] = n;
    }
    return memo[n] = fibonacci(n - 1) + fibonacci(n - 2);
    
}
//memo[4] = f(3) + f(2) = 3
//memo[3] = f(2) + f(1) = 2
//memo[2] = f(1) + f(0) = memo[1] + memo[0] = 1;
//memo[1] 
int main(){
    double Fibo;
    double a; std::cout << "Nhap a: "; std::cin>> a;
    clock_t start, end;
    double CPU_time_used;

    start = clock();
    Fibo = fibonacci(a);
    std::cout << "F(" << a << ") = " << Fibo << std::endl;
    end = clock();

    CPU_time_used = (end - start) / CLOCKS_PER_SEC * 1000;
    std::cout << "CPU_time_used = " << CPU_time_used;

    return 0;
}