#include<bits/stdc++.h>
using namespace std;
int main(){
  long long  int i,j,k,m,l,a[1000005],n,t,x,y,q,r;
   long long int  b[100005],c[100006];
   string str;
   cin>>t;
   stack<int> s,st;
   while(t--){
      cin>>k;
      if(k==1){
        cin>>x;
        s.push(x);
      }
      else{
        if(st.empty()==true){
            while(s.empty()==false){
              st.push(s.top());
              s.pop();
            }
        }
        if(st.empty()==false){
          if(k==2){
            st.pop();
          }
          if(k==3){
            cout<<st.top()<<endl;
          }
        }
      }
   }
}
