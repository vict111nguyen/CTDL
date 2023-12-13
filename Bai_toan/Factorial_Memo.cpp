#include <iostream>
#include <vector>

double factorial_Memo(double a){
    static std::vector<int> memno(a+1, 0);  
    if(a <= 1 ){
        return memno[a] = 1;
    }
    
    return memno[a] = a * factorial_Memo(a - 1);
}

int main(){
    double a; std::cout << "Nhap a: "; std::cin>> a;
    std::cout << a <<"!= " << factorial_Memo(a) << std::endl;
    return 0;

}