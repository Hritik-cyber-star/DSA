#include<iostream>
using namespace std;
int main()
{
    int n ;
    cin>>n;
    int row=1;

    while (row<=n)
    {
      int col=1;
      int value=row;
      while (col<row*2)
      {
        // cout<<value<<" ";
        // value++;
        // col++;
        cout<<col;
        col++;
      }
      cout<<"\n";
      row++;
    
    } 
}    