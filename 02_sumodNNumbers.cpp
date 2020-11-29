#include <iostream>
using namespace std;

int main()
{
    int n, sum;

    cout << "Hello, Please enter n: " << endl;
    cin >> n;

    sum = n * (n + 1) / 2;
    cout << "The sum is : " << sum << endl;

    return 0;
}