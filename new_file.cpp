#include <iostream>
#include <chrono>
#include <thread>
using namespace std;

int main(){
    cout << "Goodbye world\n";
    char answer;
    cout << "Do you wish to continue?(y/n)";
    cin >> answer;
    if (answer == 'n')
    {
        cout << "Bummer...";
    }
    else 
    {
    cout << "Goodbye cruel world\n";
    while (1)
    {
        cout << "*BANG*\n";
    }  
    }
    return 0;
}