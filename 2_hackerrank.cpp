#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            int min=i<j?i:j;
            cout<<n-min+1;
        }
        for (int k  = n-1; k>=1; k--)
        {
            int min=i<k?i:k;
             cout<<n-min+1;
        }
        cout<<endl;
    }
       for (int i = n-1; i >=1; i--)
    {
        for (int j = 1; j <= n; j++)
        {
            int min=i<j?i:j;
            cout<<n-min+1;
        }
        for (int k  = n-1; k>=1; k--)
        {
            int min=i<k?i:k;
             cout<<n-min+1;
        }
        cout<<endl;
    }
    return 0;
}