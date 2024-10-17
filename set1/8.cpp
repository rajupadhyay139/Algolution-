#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cout<<"Enter size of array : ";
    cin>>n;
    int array[n];
    for(i=0;i<n;i++)
    {
        cin>>array[i];
    }
   
   for(int i=0;i<n;i++)
   {
       int a[n];
       int count = 0;
       for(int j=0;j<n;j++)
       { 
           
          if(array[i]==a[j])
          {
            break;
          }
          if(array[i]==array[j])
           count ++ ;
          if(j == n-1)
          {
            cout<<array[i]<<" = "<<count<<endl;
          }
       }
          a[i] = array[i];
        
   }
   return 0;
}
