#include <iostream>

int main(){
    //Initialized Matrix
    int matrix[3][3] = {
        {1, 2, 3}, 
        {4, 5, 6}, 
        {7, 8, 9}
    };

    // Print the matrix
    std::cout << "Matrix:" << std::endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std:: endl;
    }

    //Adds all values in matrix
    int sum;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            sum += matrix[i][j];
        }
    }

    std::cout << "The sum of all the elements is: " << sum << std::endl;
    return 0;
}