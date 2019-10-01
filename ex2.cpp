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
