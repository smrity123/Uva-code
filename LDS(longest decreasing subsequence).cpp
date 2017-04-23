#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,k;
    cin>>t;
    for(k=1; k<=t; k++)
    {
        int i,j,a[100],n,mx=1,c=1;
        cin>>n;
        for(i=1; i<=n; i++)
        {
            cin>>a[i];
        }
        for(i=1; i<n; i++)
        {
            c=1;
            int p;
            p=a[i];
            for(j=i+1; j<=n; j++)
            {
                if(p>a[j])
                {
                    c=c+1;
                    p=a[j];
                }
            }
// cout<<c<<endl;
            if(mx<=c)
            {
                mx=c;
            }

        }
        cout<<mx<<endl;
    }
    return 0;
}
