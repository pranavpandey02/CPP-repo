#include<iostream>
using namespace std;
int main ()
{
 int arr[] = {1,2,3,2,5};
 for(int i=0;i<5; ++i)
 {
   bool unique = true;
   for(int j=0;j<5;j++)
     {
       if(arr[i]==arr[j] && i!=j)
    { 
           unique = false;
           break;  
    }
        }
     if(unique)
      {
          cout<<arr[i];
       }
    }
 } 