#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int a, b, c, d;

    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;

    if(a==(b+c+d) && (b+c)==d && b==c){
        cout << "S\n";
    }else{
        cout << "N\n";
    }

    return 0;
}