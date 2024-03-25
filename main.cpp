#include "Vector.h"

int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    Vector<int> vector1 = Vector<int>(5, arr);
    std::cout << vector1 << vector1[1] << std::endl;
    Vector<int> vector2 = {1, 7, 3, 4, 6};
    std::cout << vector1 - vector2 << vector1 + vector2 << vector1.findLength() << std::endl << vector1.normalization() << vector1.scalarMultiply(vector2);
    return 0;
}