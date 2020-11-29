
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
    float b, h, a;

    cout << "Hello, Please enter the base and the height: " << endl;
    cin >> b >> h;

    a = (b * h) / 2;
    cout << "The area of your triangle is: " << a << endl;

    return 0;
}