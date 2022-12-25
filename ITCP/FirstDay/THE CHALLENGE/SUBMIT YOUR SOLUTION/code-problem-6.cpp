#include <iostream>
using namespace std;

int main()
{
    // declaration of array size and the searched element variables.
    int n, s;
    // array declaration.
    int array[n];
    // prompt the user for the size of the array.
    cout << "Type the size of your array: ";
    cin >> n;
    // prompt the user for the array.
    cout << "Type your array:\n";

    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    cout << "Type the element that you searching for:\n";
    cin >> s;

    for (int j = 0; j < n; j++)
    {

        if (s == array[j])
        {
            cout << "the element is found in the index " << j << endl;
        }
    }
    return 0;
}
