#include <iostream>
#include "asdf.h"

int main()
{
    int x;
    x = 5;
    
    int y = 2;
    
    std::cout << "Result of strange addition: " << varya::add(x, y) << '\n';
    
    int dogs = 3;
    int cats = 6;
    int animals = varya::add(dogs, cats);
    
    std::cout << "And another one (dogs + cats): " << animals << "\n\n";

    return 0;
}