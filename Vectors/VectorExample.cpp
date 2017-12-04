#include <iostream>
#include <vector> // to use vectors

using namespace std;

int main ()
{
    vector<string> words;
    
    cout << "Hello. Write in a bunch of words. Press Ctrl + Z and Enter to finish writing those words.\n";
    

    for (string temp; cin >> temp;) //to exit loop use Ctrl + Z
    {
        words.push_back(temp);
        cout << "Number of words: " << words.size() << '\n';
        cin.get();
    }

    system("CLS");

    for (int i = 0; i < words.size(); ++i)
    {
        if (words[i] == "bored" || words[i] == "apathy" || words[i] == "tired")
        {
            words[i] = "Cheer up :)";
        }
         cout << words[i] << ' ';

    }
    
    cout << endl;

}
