// Hazart Ali
// University Of Scholar
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long i,j,a,n,m,sum;
    while(cin>>n>>m)
    {
        map<long long,long long>toys;
        for(i=0; i<n; i++)
        {
            cin>>a;
            toys[a]++;
        }
        vector<long long>v;
        for(i=1;;i++)
        {
            if(m-i<0)
                break;
            if(toys[i]==0)
            {
                m=m-i;
                v.push_back(i);
            }
        }
        cout<<v.size()<<endl;
        for(i=0; i<v.size(); i++)
            cout<<v[i]<<" ";
    }
    return 0;
}
