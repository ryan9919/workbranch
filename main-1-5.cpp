#include <iostream>
using namespace std;

extern int count_evens(int number);

int main(){
    int array[5] = {4,5,6,7,8};
    int secondarray[5] = {5,6,7,8,9};
    std::cout << "The number is: " << count_evens(5) << std::endl;
    return 0;
}