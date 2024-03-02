#include <iostream>
using namespace std;

extern bool is_ascending(int array[], int n);

int main(){
    int array[] = {0, 1, 2, 3, 4, 5};
    std::cout << "Array 1 is descending: " << std::boolalpha << is_ascending(array, 1) << std::endl;
    return 0;
}