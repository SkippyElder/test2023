#include <iostream>
#include <unistd.h>
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
    sleep(3);//sleeps for 3 second
    while (1)
    {
        cout << "*BANG*\n";
        sleep(1);
    }  
    }
    return 0;
}