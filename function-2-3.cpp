#include <iostream>

void two_five_nine(int array[], int n) {
    if (n < 1) {
        std::cout << "2:0;5:0;9:0;" << std::endl; 
        return;
    }

    int num_twos = 0, num_fives = 0, num_nines = 0;

    for (int i = 0; i < n; i++) {
        if (array[i] == 2) 
        {
            num_twos++;
        } else if (array[i] == 5) 
        {
            num_fives++;
        } else if (array[i] == 9)
        {
            num_nines++;
        }
    }

    std::cout << "2:" << num_twos << ";5:" << num_fives << ";9:" << num_nines << ";" << std::endl;
}
