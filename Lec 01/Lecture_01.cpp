#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter two integers: ";
    cin >> a >> b;
    cout << "The sum is " << a + b << std::endl;

    int c;
    cout << "Enter an Integer: compilerPath";
    cin >> c;
    
    cout << c++ << " " << --c << " " << --c << " " << ++c << " " << c++ << std::endl;

    int d;
    cout << "Enter an Interger: ";
    cin >> d;

    if (d % 2 == 0)
    {
        cout << d << " is even";
    }
    else
    {
        cout << d << " is odd";
    }

    return 0;
}
