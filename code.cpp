#include <iostream>
using namespace std;

int main()
{
    char input;
    do
    {
        cout << "Do you wish to continue? (y/n)" << endl;
        cin >> input;
    if(input != 'y')
    {
        input = 'y';
        cout << "nope!" << endl;
    }
    }
    while (input == 'y');
    return 0;
}