#include <iostream>
#include <utility>


using namespace std;

void sortArray (int *array, int size, bool (*comparision)(int, int));
void displayArray (int *array, int size);
int* dynamicArrayAllocation(int size);
bool ascending (int x, int y);
bool descending (int x, int y);
void inputElements (int *array, int size);

int main ()
{
    int numberMax;
    cout << "How many numbers are you to be inputing in this program?\n";
    cin >> numberMax;

    int *numberArray = dynamicArrayAllocation(numberMax);
    if (numberArray)
        cout << "dynamic Allocation success. memory address: " << numberArray << '\n';
    else
    {
        cerr << "is null ptr.\n";
        return -1;
    }

    inputElements (numberArray, numberMax);


    cout << "\n\nASCENDING SORT: \n\n";
    sortArray (numberArray, numberMax, ascending);

    cout << "\n\nDESCENDING SORT: \n\n";
    sortArray (numberArray, numberMax, descending);


    delete[] numberArray;

}

void sortArray (int *array, int size, bool (*comparision)(int, int))
{
    for (int baseIndex = 0; baseIndex <size; baseIndex++)
    {
        int swapIndex = baseIndex;

        for (int currentIndex = baseIndex + 1; currentIndex < size; currentIndex++)
        {
            if (comparision(array[swapIndex],array[currentIndex]))
            {
                swapIndex = currentIndex;
            }
        }

        swap(array[baseIndex], array[swapIndex]);
    }

    displayArray (array, size);
}

int* dynamicArrayAllocation(int size)
{
    return new int [size];
}

void inputElements (int *array, int size)
{
    cout << "Input " << size << " elements.\n";
    for (int index = 0; index < size; index++)
    {
        cout << "Element " << index + 1 << " : ";
        cin >> array[index];
        cout << '\n';
    }

    cout << "BEFORE SORT: \n\n";
    displayArray (array, size);
}

void displayArray (int *array, int size)
{
    for (int index = 0; index < size; index++)
    {
        cout << array[index] << ' ';
    }

    cin.ignore();
}


bool ascending (int x, int y)
{
    return x > y;
}

bool descending (int x, int y)
{
    return x < y;
}
