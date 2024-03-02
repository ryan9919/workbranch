#include <iostream>
using namespace std;

extern bool is_descending(int array[], int n);

int main(){
    int array[] = {0, 1, 2, 3, 4, 5};
    std::cout << "Array 1 is descending: " << std::boolalpha << is_descending(array, 1) << std::endl;
    return 0;
}