#include<bits/stdc++.h>
using namespace std;
string s;
long long int d,maxx,i;
int main()
{
    freopen("REPETITIONS.inp","r",stdin);
    freopen("REPETITIONS.out","r",stdout);
    getline(cin,s);
    d=1;
    maxx=0;
    for(i=1;i<=s.size();i++)
    {
        if(s[i]==s[i+1]) d++;  else {maxx=max(maxx,d); d=1;}
    }
    cout<<maxx;

}
