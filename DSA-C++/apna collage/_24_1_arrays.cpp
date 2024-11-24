
// first repeating element
/**
#include <bits/stdc++.h>
using namespace std;

int input(int n, int arr[]){
    for (auto i = 0; i < n; i++)
        cin >> arr[i];
};

int reappear(int n,int arr[]){
    int index[n];
    int i,ans=0;
    for (i = 0; i < n; i++)
        index[i]=-1;

    for (i = 0; i < n; i++){
        if (index[arr[i]]!=-1){
            // cout<<index[arr[i]]<<" "<<arr[i]<<" "<<i<<endl;
            ans=index[arr[i]];
            break;
        }
        index[arr[i]]=i;
    }
    cout<<ans<<endl;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];

    input(n, arr);
    reappear(n, arr);

    return 0;
}
*/

/*
#include <bits/stdc++.h>
using namespace std;

int input(int n, int arr[]){
    for (auto i = 0; i < n; i++)
        cin >> arr[i];
};

int subArray(int n,int arr[],int s){
    int i,j=0,ans=0;
    label:
    for (i = j; i < n; i++){
            ans+=arr[i];
            if(ans==s) break;
            else if(ans>s){
                j++;
                ans=0;
                goto label;
            }
        }
    // cout<<j<<" "<<i<<' '<<ans<<' '<<n<<endl;
    if (ans==s)  {
    for (auto z = j; z <= i; z++)
        cout<<arr[z]<<" ";
    }
    if(j!=i)
    cout<<"\n"<<j+1<<" "<<i+1<<endl;
    else
    cout<<'\n'<<i+1;
}

int main()
{
    int n,s;
    cin >> n>>s;
    int arr[n];

    input(n, arr);
    subArray(n, arr,s);

    return 0;
}
*/

// smalles positive missing number
#include <bits/stdc++.h>
using namespace std;

int input(int n, int arr[])
{
    for (auto i = 0; i < n; i++)
        cin >> arr[i];
};

int missingNum(int n, int arr[])
{
   int check[n];
   for (auto i = 0; i < n; i++)
        check[i]=false;
    for (auto i = 0; i < n; i++)
        check[arr[i]]=true;
    for (auto i = 0; i < n; i++){
        if(check[i]!=true){
            cout<<i;
            break;
        }
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];

    input(n, arr);
    missingNum(n, arr);

    int N;
    cin >> N;

    return 0;
}