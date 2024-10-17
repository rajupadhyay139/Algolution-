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
    for(i=0;i<n;i++)
    {
        for(j=0;j<i;j++)
        {
        
           if(array[i]==array[j])
           break; 
        }
         if(i==j)
           cout<<array[i];
    }
    return 0;
}
