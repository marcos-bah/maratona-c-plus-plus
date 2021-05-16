#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int x[10];

    for (int i = 0; i < 10; i++)
    {
        cin >> x[i];
    }

    for (int i = 9; i >= 0; i--)
    {
        cout << x[i] << "\n";
    }
    return 0;
}