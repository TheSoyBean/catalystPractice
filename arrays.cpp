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
    int sum = 0;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            sum += matrix[i][j];
        }
    }

    std::cout << "The sum of all the values in matrix is: " << sum << std::endl;

    int average = sum/9;

    std::cout << "The average of the matrix's values: " << average << std::endl;
    

    //Product of all values
    int product = 1;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            product *= matrix[i][j];
        }
    }
    
    std::cout << "The product of all the values in the matrix is: " << product << std::endl;

    return 0;
}