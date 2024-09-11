#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    // Initialize random seed
    std::srand(std::time(0));

    std::cout << "Welcome to Math Practice Laboratory!\n\nHow many questions would you like to answer?\n";
    int questions;
    std::cin >> questions;

    // Variables for score keeping
    int correctAnswers = 0;
    int incorrectAnswers = 0;

    for (int i = 0; i < questions; i++) {
        int operation = std::rand() % 5 + 1;
        int num1 = std::rand() % 12 + 1;
        int num2 = std::rand() % 12 + 1;

        // Ensure num2 is not zero for division
        if (operation == 4) { // Division
            num2 = (num2 == 0) ? 1 : num2; // Avoid division by zero
        }

        std::cout << "\nQuestion Number " << i + 1 << ":\n";
        
        double userAnswer;
        double correctAnswer;

        switch (operation) {
            case 1: // Addition
                std::cout << "What is " << num1 << " plus " << num2 << "?\n";
                correctAnswer = num1 + num2;
                break;
            case 2: // Subtraction
                std::cout << "What is " << num1 << " minus " << num2 << "?\n";
                correctAnswer = num1 - num2;
                break;
            case 3: // Multiplication
                std::cout << "What is " << num1 << " multiplied by " << num2 << "?\n";
                correctAnswer = num1 * num2;
                break;
            case 4: // Division
                std::cout << "What is " << num1 << " divided by " << num2 << "?\n";
                correctAnswer = static_cast<double>(num1) / num2;
                break;
            case 5: // Modulus
                std::cout << "What is " << num1 << " modulus " << num2 << "?\n";
                correctAnswer = num1 % num2;
                break;
        }
        
        std::cin >> userAnswer;

        if (userAnswer == correctAnswer) {
            std::cout << "Correct!\n\n";
            correctAnswers++;
        } else {
            std::cout << "Incorrect. The correct answer was " << correctAnswer << ".\n\n";
            incorrectAnswers++;
        }
    }

    // Display final score
    std::cout << "Quiz completed!\n";
    std::cout << "Correct Answers: " << correctAnswers << "\n";
    std::cout << "Incorrect Answers: " << incorrectAnswers << "\n";

    return 0;
}
