#include <bits/stdc++.h>
using namespace std;

int main() {
int N;
cin>>N;
vector<int>v(N);
for(int i=0;i<N;i++)cin>>v[i];
sort(v.begin(),v.end(),greater<int>());
int q=N/4;
vector<int>v2;
int P=accumulate(v.begin(),v.begin()+q,0);
v2.push_back(P);
int Q=accumulate(v.begin()+q,v.begin()+2*q,0);
v2.push_back(Q);
int R=accumulate(v.begin()+2*q,v.begin()+3*q,0);
v2.push_back(R);
int S=accumulate(v.begin()+3*q,v.end(),0);
v2.push_back(S);
int max=*max_element(v2.begin(),v2.end());
int min=*min_element(v2.begin(),v2.end());
int diff= abs(max-min);
cout<<diff<<endl;
}
