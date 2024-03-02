#include <iostream>
using namespace std;

extern double array_mean(int [], int ); 

int main(){
    int array[5] = {4,5,6,7,8};
    int secondarray[5] = {5,6,7,8,9};
    std::cout << "The number is: " << array_mean(array, 5) << std::endl;
    return 0;
}