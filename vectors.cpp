#include <iostream>
#include <string>
#include <vector>

int main() {
    // initializing vectors
    std::vector<std::string> cheeses({"cheddar", "bellavitano", "brie", "feta", "gouda"});
    
    // adding item with push_back()
    cheeses.push_back("swiss");
    
    // printing first and last item using at and size
    std::cout << "First and last item in list:\n";
    
    int end = cheeses.size() - 1;
    
    std::cout << cheeses.at(0) << "\n";
    
    std::cout << cheeses.at(end) << "\n\n";
    
    // remove last item with pop_back
    cheeses.pop_back();
    
    // print the last item using at
    std::cout << "Last item after pop_back()\n";
    
    int newEnd = cheeses.size() - 1;
    
    std::cout << cheeses.at(newEnd) << "\n\n";
    
    // remove second item using erase
    cheeses.erase(cheeses.begin() + 1);
    
    // print the 2nd item using at
    std::cout << "2nd item after erase:\n" << cheeses.at(1) << "\n\n";


    // change the second item using at
    cheeses.at(1) = "moldy";

    // print the second item using at
    std::cout << "2nd item after change (No not my brie!!!):\n" << cheeses.at(1) << "\n\n";

    // insert an item at index 1 using insert
    cheeses.insert(cheeses.begin() + 1, "Limoncello");

    // print index 1 using at
    std::cout << "2nd item after inserting at index 1:\n" << cheeses.at(1) << "\n\n";


    // for loop to print each item on a new line
    
    return 0;
}