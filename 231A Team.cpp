#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int count=0;
    int arr[3];
    for(int i=0;i<n;i++)
    {
        int c=0;
        for(int j=0;j<3;j++)
        {
            cin>>arr[j];
            if(arr[j]==1)
                c++;
        }
        if(c>=2)
            count++;
    }
    cout<<count<<endl;
}