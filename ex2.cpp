#include <iostream>

using namespace std;

int main()
{
   int num = 0;
   cout << "Digite um numero:"<< endl;
   cin >> num;
   
   for( int i = 0; i<= (num / 2) + 1; i++)
        {
            for ( int j = i + 1; j <= num - i; j++ )
            {
                cout<<("%d ",j);
            }

            cout<<("\n");

            for ( int j = 0; j < (i + 1) * 2; j++ )
              cout<<(" ");
         }
    
    
    return 0;
}

/*

Faça o programa que apresenta a seguinte saída, perguntando ao usuário o número máximo (no exemplo, 9). Este número deve ser sempre ímpar.

1 2 3 4 5 6 7 8 9
   2 3 4 5 6 7 8
      3 4 5 6 7
         4 5 6
            5   

*/
