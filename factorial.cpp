#include <iostream>
using namespace std;

int factorial(int x){
    if (x==0) return 1;
    return x == 1 ? x : x * factorial(x-1);
}

int main(int argc, char const *argv[])
{
    int x;
    cin >> x;

    cout << factorial(x) << "\n";
    return 0;
}