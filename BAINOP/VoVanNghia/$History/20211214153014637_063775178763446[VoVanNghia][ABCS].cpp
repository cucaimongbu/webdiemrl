#include<bits/stdc++.h>
using namespace std;
const long long mx=100000009;
long long b[mx], a[mx], i, j, k, tam=0;
int main()
{
    freopen("ABCS.INP","r",stdin);
    freopen("ABCS.OUT","w",stdout);
    cin>>a[1]>>a[2]>>a[3]>>a[4]>>a[5]>>a[6]>>a[7];
    for(int i=1;i<=7;i++) b[a[i]]=1;
    sort(a+1,a+7+1);
    for(int i=1;i<=6;i++)
    {
        for(int j=i+1;j<=6;j++)
        {
            for(int k=j+1;k<=6;k++)
            if (b[a[i]+a[j]]==1 && b[a[j]+a[k]]==1 && b[a[i]+a[k]]==1)
            {
                cout<<a[i]<<" "<<a[j]<<" "<<a[k];
                tam=1;
                break;
            }
            if (tam==1) break;
        }
        if (tam==1) break;
    }
}
