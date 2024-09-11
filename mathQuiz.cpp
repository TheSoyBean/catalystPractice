#include <iostream>

int main() {
    std::cout << "Welcome to Math Practice laboratory!\n\nHow many questions would you like to answer?\n";
    int questions;
    std::cin >> questions;
    
    
    for (int i = 0; i < questions; i++) {
         srand (time(NULL));

        
        int operation = rand() % 5 + 1;
        

        int num1 = rand() % 12 + 1;


        int num2 = rand() % 12 + 1;
        
        std::cout << "\nQuestion Number "<< i + 1 << ":\n";
        
        double answer;
        
        switch(operation){
            case 1:
                std::cout << "What is " << num1 << " plus " << num2 << "?\n";
                std::cin >> answer;
                if(answer == num1 + num2){
                    std::cout << "Correct!\n\n";
                }
                else{
                    std::cout << "Incorrect.\n\n";
                }
                break;
            case 2:
                std::cout << "What is " << num1 << " minus " << num2 << "?\n";
                std::cin >> answer;
                if(answer == num1 - num2){
                    std::cout << "Correct!\n\n";
                }
                else{
                    std::cout << "Incorrect.\n\n";
                }
                break;
            case 3:
                std::cout << "What is " << num1 << " multiplied by " << num2 << "?\n";
                std::cin >> answer;
                if(answer == num1 * num2){
                    std::cout << "Correct!\n\n";
                }
                else{
                    std::cout << "Incorrect.\n\n";
                }
                break;
            case 4:
                std::cout << "What is " << num1 << " divided by " << num2 << "?\n";
                std::cin >> answer;
                if(answer == num1 / num2){
                    std::cout << "Correct!\n\n";
                }
                else{
                    std::cout << "Incorrect.\n\n";
                }
                break;
            case 5:
                std::cout << "What is " << num1 << " modulus " << num2 << "?\n";
                std::cin >> answer;
                if(answer == num1 % num2){
                    std::cout << "Correct!\n\n";
                }
                else{
                    std::cout << "Incorrect.\n\n";
                }
                break;
        }
    }

    return 0;
}