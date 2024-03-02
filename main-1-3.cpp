#include <iostream>
using namespace std;

extern int num_count(int array[], int n, int number);

int main(){
    int array[5] = {4,5,6,7,8};
    int secondarray[5] = {5,6,7,8,9};
    std::cout << "The number is: " << num_count(array, 5, 5) << std::endl;
    return 0;
}