#include <iostream>

double factorial_Loop(double a){
    double b = 1;
    for (int i = 1; i <= a; i++)
    {
        b = i * b;
    }
    return b;
    
}

int main(){
    double a; std::cout << "Nhap a: "; std::cin>> a;
    std::cout << a <<"!= " << factorial_Loop(a) << std::endl;
    return 0;

}