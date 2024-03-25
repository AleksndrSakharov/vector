#include "Vector.h"

int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    Vector<int> vector = Vector<int>(5, arr);
    std::cout << vector << vector[1];
    Vector<int> vector2 = {1, 2, 3, 4, 61, 634, 654, 88, 99};
    std::cout << vector2;
    return 0;
}