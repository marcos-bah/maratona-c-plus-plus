#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n1, n2;
    float media;

    cin >> n1;
    cin >> n2;

    media = (n1*2+n2*3)/5;

    if(media >= 7){
        cout << "Aprovado\n";
    }else if(media < 3){
        cout << "Reprovado\n";
    }else{
        cout << "Final\n";
    }
    return 0;
}
