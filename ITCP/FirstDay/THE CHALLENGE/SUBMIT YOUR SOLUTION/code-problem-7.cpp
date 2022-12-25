#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
    string S;
    cout << "Type your string : ";
    // get user input
    cin >> S;
    // converting a string to an integer.
    int X = stoi(S);
    // the integer data type has a 4 byte or 2
    if (sizeof(X) == 2 || sizeof(X) == 4)
    {
        cout << "The value of the integer : " << X << endl;
    }
    else
    {
        cout << "Bad string";
    }
    return 0;
}
