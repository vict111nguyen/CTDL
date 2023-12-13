#include <iostream>
#include <vector>

int linearSearch(const std::vector<int>& arr, int target) {
    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] == target) {
            return i; // Trả về chỉ số nếu tìm thấy
        }
    }
    return -1; // Trả về -1 nếu không tìm thấy
}

int main() {
    std::vector<int> numbers = {3, 9, 4, 2, 7, 5};
    int target = 4;
    int index = linearSearch(numbers, target);
    if (index != -1) {
        std::cout << "Found at index " << index << std::endl;
    } else {
        std::cout << "Not found" << std::endl;
    }
    return 0;
}
