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

/*

Escreva um programa que leia 3 notas de um aluno e a média das notas dos exercícios realizados por ele. Calcular a média de aproveitamento, usando a fórmula: MA = (N1 + N2*2 + N3*3 + ME)/7. A partir da média, informar o conceito de acordo com a tabela: 

maior ou igual a 9	A
maior ou igual a 7.5 e menor que 9	B
maior ou igual a 6 e menor que 7.5	C
maior ou igual a 4 e menor que 6	D
menor que 4	E

*/
