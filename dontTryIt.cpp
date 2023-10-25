#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Give me a number: ";
    cin >> num;
    int i = 1;
    do
    {
        cout << num/i;
        i++;
    } while (1);
    
    return 0;
}