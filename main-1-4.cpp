#include <iostream>
using namespace std;

extern int sum_two_arrays(int array[], int secondarray[], int n);

int main(){
    int array[5] = {4,5,6,7,8};
    int secondarray[5] = {5,6,7,8,9};
    std::cout << "The number is: " << sum_two_arrays(array, secondarray, 5) << std::endl;
    return 0;
}