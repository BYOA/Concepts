#include <iostream>
#include <algorithm>


class Solution {
private: //states
    std::string s1;
    std::string s2;
    std::string characterSort(std::string s)
    {
        for (int i = 0; i < s.size();i++)
        {
            int smallest = i;
            for (int current = i + 1; current<s.size();current++)
            {
                if (s[smallest] > s[current])
                {
                    smallest = current;
                }
            }
            std::swap(s[i], s[smallest]);
        }
        return s;
    }
    
    bool isAnagram() 
    {
        if (characterSort(s1) == characterSort(s2))
            return true;
        else
            return false;
    }
public: //behaviours
    Solution()
    {
        std::cout << "Enter string 1: \n";
        std::cin >> s1;
        std::cout << "Enter string 2: \n";
        std::cin >> s2;
    }
    Solution(std::string s): s1{s} //member intializer list
    {
        std::cout << "String 1: " << this->s1 << " is already entered.\nEnter string 2: \n"; //hidden "this"poitner which refers to object (in this case it's only s)
        std::cin >> (*this).s2; //.ie. (*this.s2) == this->s2. this == &s (in this example only as it's the only object defined in code).
    }
    void display()
    {

        if (isAnagram())
        {
            std::cout << s1 << " and " << s2 << " is an anagram. ";
        }
        else
        {
            std::cout << s1 << " and " << s2 << " is NOT an anagram. ";
        }
    }
    ~Solution()//destructor
    {
        std::cout << "\n\nobject is now being destroyed after this sentenance.\n";
    }
};



int main()
{

    Solution s; //only object.
    s.display();

    return 0;
}
