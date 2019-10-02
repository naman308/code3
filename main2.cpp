
#include<bits/stdc++.h>
using namespace std;
int main()
{
  string str;
  cin>>str;
  int n;
  cin>>n;
  set<int>v[27];
  for(int i=0;i<str.size();i++)
  {
    v[str[i]-'a'].insert(i);
  }
  for(int i=0;i<n;i++)
  {
    int a,b;
    cin>>a>>b;
    if(a==1)
    { char c;
       cin>>c;
       char rt=str[b-1];
        v[rt-'a'].erase(b-1);
        v[c-'a'].insert(b-1);
        str[b-1]=c;      
    }
    else
    {
           int  c;
           cin>>c;
           int count=0;
             for(int j=0;j<27;j++)
             {   
                  auto it=v[j].lower_bound(b-1);
                  if(it!=v[j].end()&&*(it)<=c-1)
                     count++;
              }
               cout<<count<<endl;
    }
  //  cout<<str<<endl;
  }
}

