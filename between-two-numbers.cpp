#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int a, b;

    cin >> a;
    cin >> b;

    if(a>b){
        for (int i = b; i <= a; i++)
        {
            cout << i << " ";
        }
    }else{
        for (int i = a; i <= b; i++)
        {
            cout << i << " ";
        }
    }

    cout << "\n";

    return 0;
}