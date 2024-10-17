#include<iostream>
using namespace std;
int main()
{
    int n = 5;
    int array[n];
    cout<<"Enter 5 elements "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>array[i];
    }
    int max = array[0];
    for(int i=1;i<n;i++)
    {
        if(array[i]>max)
        max = array[i];
    }
    cout<<"MAX element is "<<max;
    return 0;
}
