#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int miska=0,borsha=0;
    for(int i=0;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
        if(a>b)
            miska++;
        else if(b>a)
            borsha++;
    }
    if(miska>borsha)
    {
        cout<<"Mishka"<<endl;
    }
    else if(miska<borsha)
    {
        cout<<"Chris"<<endl;
    }
    else{
        cout<<"Friendship is magic!^^"<<endl;
    }
}
