#include <iostream>
using namespace std;

extern int max_element(int array[], int n);

int main(){
    int array[5] = {4,5,6,7,8};
    int secondarray[5] = {5,6,7,8,9};
    std::cout << "The number is: " << max_element(array, 5) << std::endl;
    return 0;
}