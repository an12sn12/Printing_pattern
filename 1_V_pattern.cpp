#include<iostream>
using namespace std;
int main()
{
    for (int i = 1; i <=5; i++)
    {
        for (int j = 1; j<= i; j++)
        {
            cout << "*" ;
        }
        for (int k = 5-i; k>=1; k--)
        {
            cout<<" ";
        }
         for (int j = 1; j<= i; j++)
        {
            cout << "*" ;
        }
        cout<<"\n";
    }
   
    return 0;
}