#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> v(n);
        int ans=0;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        for(int i=0;i<n-1;i++) 
        {
            if(v[i]==0)
            continue;
            if(v[i]!=v[i+1])
            {
                if(v[i]!=0 and v[i+1]!=0)
                {
                    ans+=2;
                    v[i+1]=min(v[i],v[i+1]);
                }
                else if(v[i]==0 and v[i+1]!=0)
                {
                    ans+=1;
                    v[i+1]=0;
                }
                else if(v[i+1]==0 and v[i]!=0)
                {
                    ans+=1;
                    v[i]=0;
                }
            }
            else
            {
                if(v[i]!=0)
                {
                    ans+=1;
                    v[i]=0;
                }
            }
        }
        cout<<ans<<endl;
    }
}