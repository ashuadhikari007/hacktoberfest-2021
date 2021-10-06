#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter the size of your array"<<endl;
    cin>>n;
    cout<<" please enter your elements"<<endl;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"please enter the element you want to find:"<<endl;
    int x;
    cin>>x;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==x)
        {
            cout<<"Element found at postion :"<<i+1<<endl;
           
            return 0;
        }
    }
    return 1;
}
