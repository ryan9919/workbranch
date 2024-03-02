#include <iostream>
using namespace std;

extern void two_five_nine(int array[], int n) ;

int main() {
    int array[10] = {1, 2, 5, 9, 9, 2, 9, 9, 5, 2}; 
    int size = sizeof(array) / sizeof(array[0]); 
    two_five_nine(array, size); 
    return 0;
}
