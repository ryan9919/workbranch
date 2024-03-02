#include <iostream>
using namespace std;

extern int array_sum(int[], int);

int main(){
    int array[5] = {4,5,6,7,8};
    int secondarray[5] = {5,6,7,8,9};
    std::cout << "The number is: " << array_sum(array, 5) << std::endl;
    return 0;
}