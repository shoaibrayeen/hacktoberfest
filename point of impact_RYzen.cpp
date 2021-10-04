#include<bits/stdc++.h>
using namespace std;
struct node
{
  int pos;
  int x,y;
}ti,tg;

int main(){
  int t;
  cin>>t;

  while(t--){

    int n,k,a,b;
    cin>>n>>k>>a>>b;

    if(a==b){
      cout<<n<<" "<<n<<endl;
      continue;
    }

    if(b>a){
      vector<node> v;
      int c=b-a;
      ti.pos=0; ti.x=0; ti.y=c;
      v.push_back(ti);
      ti.pos=1; ti.x=n-c; ti.y=n;
      v.push_back(ti);
      ti.pos=2; ti.x=n; ti.y=n-c;
      v.push_back(ti);
      ti.pos=3; ti.x=c; ti.y=0;
      v.push_back(ti);
      
      
      int r=k%4;

        tg=v[r];
        cout<<tg.x<<" "<<tg.y<<endl;
          continue;

    }

    if(a>b){
      vector<node> v;
      int c=a-b;
      ti.pos=0; ti.x=c; ti.y=0;
      v.push_back(ti);
      ti.pos=1; ti.x=n; ti.y=n+(-1)*c;
      v.push_back(ti);
      ti.pos=2; ti.x=n+(-1)*c; ti.y=n;
      v.push_back(ti);
      ti.pos=3; ti.x=0; ti.y=c;
      v.push_back(ti);
      
      
      int r=k%4;
        tg=v[r];
        cout<<tg.x<<" "<<tg.y<<endl;
        continue;
      

    }



  }


  return 0;
}