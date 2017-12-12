/*requires pointer to a pointer to work*/

#include <iostream>

using namespace std;

int main ()
{
    int numberofrows, numberofcolumns;
    cout << "Enter the number of rows you'd like your array to have.\n";
    cin >> numberofrows;
    cout << "\nEnter the number of columns you'd like your array to have.\n";
    cin >> numberofcolumns;


    char **matrix;
    
    matrix = new char*[numberofrows];
    for (int i = 0; i <numberofrows; i++)
    {
        matrix[i] = new char [numberofcolumns];
    }

    system("CLS");
    for (int x = 0; x < numberofrows; x++)
    {
        for (int y = 0; y <numberofcolumns; y++)
        {
            matrix[x][y] = '.';
            cout << ' ' << matrix[x][y] << ' ';
        }
        cout << '\n';
    }



        for (int count = 0; count < numberofcolumns; ++count)
            {
                delete[] matrix[count];
            }
        delete[] matrix; // this needs to be done last

    return 0;
}
