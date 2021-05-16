#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int x;
    cin >> x;

    for (int i = 1; i <= 10; i++)
    {
        cout << x << " * " << i << " = " << i*x << "\n";
    }
    return 0;
}