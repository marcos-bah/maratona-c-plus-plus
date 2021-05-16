#include <iostream>
using namespace std;


int main(int argc, char const *argv[])
{
    int n, d, a;
    cin >> n; //pos total
    cin >> d; //pos disco
    cin >> a; //pos aviao

    if(a==d){
        cout << 0 << "\n";
    }else if(a>d){
        int pos = n-a + d;
        cout << pos << "\n";
    }else{
        cout << d-a << "\n";
    }

    return 0;
}