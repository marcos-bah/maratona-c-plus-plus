#include <iostream>
using namespace std;

// BVBPBVBPBVBP -> true
// BVPBVPBVPBVP -> false

int main(int argc, char const *argv[])
{
    int n1, n2, n3, n4;
    cin >> n1 >> n2 >> n3 >> n4;


    if (n1==n4 || n1==n2 || n3==n4 || n2==n3){
        cout << "F\n";
    }else{
        cout << "V\n";
    }
    
    return 0;
}