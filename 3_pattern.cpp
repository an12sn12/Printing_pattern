#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    ///five column and row print// 

    for (int i = 1; i<=n; i++)
    {
        for (int j = 1; j<=n; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
                                          //*
///pattern 2///                           //**    
 std::cout << "pattern-2" << std::endl;   //***                      //***
    for (int i = 1; i<=n; i++)            //****   
    {                                     //*****
        for (int j = 1; j<=i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
                                          //*****
///pattern 3///                           //****    
 std::cout << "pattern-3" << std::endl;   //***                      //***
    for (int i = 1; i<=n; i++)            //**   
    {                                     //*
        for (int j = i; j<=5; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
                                          // ----*   
///pattern 4///                           // ---**    
 std::cout << "pattern-4" << std::endl;   // --***                      //***
    for (int i = 1; i<=n; i++)            // -****   
    {                                     // *****
        for (int k=n-1;  k>=1; k--)
        {
            cout<<" ";
        }
        for (int j = 1; j<=i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
                                          // *----   
///pattern 5///                           // **---    
 std::cout << "pattern-5" << std::endl;   // ***--                      //***
    for (int i = 1; i<=n; i++)            // ****-   
    {                                     // *****
        for (int j = 1; j<=i; j++)
        {
            cout<<"*";
        }
 for (int k=n-1;  k>=1; k--)
        {
            cout<<" ";
        }
        cout<<endl;
    }
                                          // *----   
///pattern 6///                           // **---    
 std::cout << "pattern-6" << std::endl;   // ***--                      //***
    for (int i = 1; i<=n; i++)            // ****-   
    {                                     // *****
        for (int j = 1; j<=i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
        if (i==n)
        {
             for (int i = 2; i<=n; i++) {           
            for (int j = i; j<=5; j++)
        {
            cout<<"*";
        }
        cout<<endl;
             }
        }                                 
    }
                                           //*   
///pattern 6///                           // **    
 std::cout << "pattern-6" << std::endl;   // ***                      //***
    for (int i = 1; i<=n; i++)            // ****  
    {                                     // *****
        for (int j = 1; j<=i; j++)        // ****
        {                                 // ***
            cout<<"*";                    // **
        }                                 // *  
        cout<<endl;
        if (i==n)
        {
             for (int i = 2; i<=n; i++) {           
            for (int j = i; j<=5; j++)
        {
            cout<<"*";
        }
        cout<<endl;
             }
        }                                 
    }
                                          //     *   
///pattern 7///                           //    **    
 std::cout << "pattern-7" << std::endl;   //   ***                      //***
    for (int i = 1; i<=n; i++)            //  ****  
    {                                     // *****
  for (int j = n-1; j >=1; j--)           //  ****
           {                              //   ***
               cout<<" ";                 //    **  
           }                              //     *
     for (int j = 1; j<=i; j++)          
        {                                
            cout<<"*";                    
        }                                   
        cout<<endl;
        if (i==n)
        {
             for (int i = 2; i<=n; i++) { 
                  for (int j = n-1; j >=1; j--)
           {
               cout<<" ";
           }             
            for (int j = i; j<=5; j++)
        {
            cout<<"*";
        }
        cout<<endl;
             }
        }                                 
    }
    ///V-pattern 8///                               //*        * 
 std::cout << "pattern-8" << std::endl;            // **      ** 
 for (int i = 1; i<=n; i++)                        // ***    *** 
    {                                              // ****  ****
        for (int j = 1; j<=i; j++)                 // **********
        {
            cout<<"*";
        }
 for (int k=n-i;  k>=1; k--) 
        {
            cout<<" ";
        }
         for (int j = 1; j<=i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
       ///prymid -pattern 9///                              
 std::cout << "pattern-9" << std::endl;           // *        *
for (int i = 1; i <=n; i++)                       //***      ***
{                                                //*****    *****
    for (int j = n-i; j>=1; j--)                //*******  *******
    {                                          //******************
        cout<<" ";
    }
    for (int j = 1; j<=(2*i)-1; j++)
    {
        cout<<"*";
    }
    for (int k =(2*n)-(2*i)-1; k>=1; k--)
    {
        cout<<" ";
    }
for (int j = 1; j <=2*i-1; j++)
{
    cout<<"*";
}
cout<<endl;
}
       ///prymid -pattern 10///                  // *                   
 std::cout << "pattern-10" << std::endl;         //***
for (int i = 1; i <=n; i++)                     //*****
{                                              //*******
    for (int j = n-i; j>=1; j--)              //*********
    {
        cout<<" ";
    }
    for (int j = 1; j<=(2*i)-1; j++)
    {
        cout<<"*";
    }
    cout<<endl;
}
/*std::cout << "another for above code" << std::endl;
for (int i = 1; i <=n; i++){
  for (int j = n-i; j>=1; j--){
       cout<<" ";
  }  
  for (int j = 1; j<i; j++){
       cout<<"*";
  }  
   for (int j = 1; j<=i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
}
*/
    /// invert-prymid -pattern 11///                              
 std::cout << "pattern-11" << std::endl;        //*********
for (int i = 1; i <=n; i++)                     // *******
{                                               //  *****
    for (int j = 1; j<=i; j++)                  //   ***
    {                                           //    *
        cout<<" ";
    }
    for (int j = i; j<=2*n-i; j++)
    {
        cout<<"*";
    }
    cout<<endl;
}
    /// invert-prymid -pattern 12///                              
 std::cout << "pattern-12" << std::endl;        //    *
for (int i = 1; i <=n; i++)                     //   **
{                                               //  ***
    for (int j = n-i; j>=1; j--)                // ****     
    {                                           //*****
        cout<<" ";
    }
    for (int j = 1; j<=i; j++)
    {
        cout<<"*";
    }
    cout<<endl;
}
    /// invert-prymid -pattern 13///                              
 std::cout << "pattern-13" << std::endl;         //     *
for (int i = 1; i <=n; i++)                      //    * *
{                                                //   * * *
    for (int j = n-i; j>=1; j--)                 //  * * * *
    {                                            // * * *  * *
        cout<<" ";
    }
    for (int j = 1; j<=i; j++)
    {
        cout<<"* ";
    }
    cout<<endl;
}
   /// invert-prymid -pattern 14///                              
 std::cout << "pattern-14" << std::endl;    //*****
for (int i = 1; i <=n; i++)                 // ****
{                                           //  ***
    for (int j = n-i; j<n; j++)             //   **
    {                                       //    *
        cout<<" ";
    }
    for (int j = n; j>=i; j--)
    {
        cout<<"*";
    }
    cout<<endl;
}
   /// invert-prymid -pattern 15///                              
 std::cout << "pattern-15" << std::endl;    //* * * * *
for (int i = 1; i <=n; i++)                 // * * * *
{                                           //  * * *
    for (int j = n-i; j<n; j++)             //   * * 
    {                                       //    *
        cout<<" ";                        
    }
    for (int j = n; j>=i; j--)
    {
        cout<<"* ";
    }
    cout<<endl;
}
    return 0;
}