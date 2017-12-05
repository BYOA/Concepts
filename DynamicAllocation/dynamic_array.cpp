#include <iostream>
#include <algorithm> // for std::sort

int main ()
{
    int length;
    std::cout << "This program will allow you to sort names in alphabetical order.\n";
    std::cout << "How many names do you wish to enter?";
    std::cin >> length;


    std::string *names = new(std::nothrow) std::string[length];
    if (!names) //if nullptr
    {
     // Do error handling here
        std::cout << "Could not allocate memory. Please close the program and try again.";
        return 0;
    }

    for (int i = 0; i < length; i++)
    {
        std::cout << "Please write name " << i + 1 << ": ";
        std::cin >> names[i]; //dererces pointer, meaning values can be added in.
        std::cout << std::endl;
    }

    //sorting characters in alphabetical order
    std::sort(names, names + length); //std:: sort (first range, last range)

    std::cout << "The names in order are:\n";
        for (int i = 0; i < length; i++)
    {
        std::cout << "Name " << i + 1 << ": " << names[i] << std::endl;

    }

    delete[] names; //this allows the memory allocated to the program to be deallocated and to be allowed to be used as memory for other applications in the operating system.
    return 0;

}
