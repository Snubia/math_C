#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int u, v, a;
    float speed;

    cout << "Hello, Please enter three numbers " << endl;
    cin >> u >> v >> a;
    speed = (v * v - u * u) / (2 * a);
    cout << "Speed is: " << speed << endl;
    return 0;
}