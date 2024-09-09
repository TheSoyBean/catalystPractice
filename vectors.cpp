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
    
    // print the 2nd item using at
    
    // change the second item using at
    
    // print the second item using at
    
    // insert an item at index 1 using insert
    
    // print index 1 using at
    
    // for loop to print each item on a new line
    
    return 0;
}