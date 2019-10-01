#include <iostream>

using namespace std;

int main()
{
    double n1, n2, n3, media, ma = 0;
    cout<<"Digite a primeira nota:" << endl;
    cin >> n1;
    cout<<"Digite a segunda nota:" << endl;
    cin >> n2;
    cout<<"Digite a terceira nota:" << endl;
    cin >> n3;
    cout << "Digite a media dos exercicios:" << endl;
    cin >> media;
    
    cout << endl;
    
    ma = (n1+ n2*3 + n3*3 + media) / 7;
    
    if(ma >= 9){
        cout << "Nota A";
    }else if(ma >= 7.5 && ma < 9){
        cout << "Nota B";
    }else if(ma >= 6 && ma < 7.5){
        cout << "Nota C";
    }else if(ma >= 4 && ma < 6){
        cout << "Nota D";
    }else if(ma < 4){
        cout << "Nota E";
    }

    return 0;
}
