#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
using namespace std ;

void input(vi &v){
    int s=v.size() ;
    for(int i=0;i<s;i++){
        cin>>v[i] ;
    }
}


void print(vi v){ 
    int s=v.size() ;
    for(int i=0;i<s;i++){
        cout<<v[i]<<" ";
    }
 cout<<endl ;
}

ll bsroot(ll x) {
  ll left = 0, right = 2000000123;
  while (right > left) {
      ll mid = (left + right) / 2;
      
      if (mid * mid > x) right = mid;
      else left = mid + 1;
  }
  return left - 1;
}

void solve(){
    ll l,r ; cin>>l>>r ;
    ll a = bsroot(l) , b= bsroot(r) ;
    ll ans = 3ll*(b-a+1ll) ;

    for(int i=0;i<=2;i++){
        if(a*(a+i)<l){
            ans-- ;
        }
    }

    for(int i=0;i<=2;i++){
        if(b*(b+i)>r){
            ans-- ;
        }
    }
    cout<<ans<<endl ; 
    return ;
}
// 5
// 8 19   5
// 8 20
// 119 121 6  10 11 1
// 1 100000000000000000
// 1234567891011 1000000000000000000

int main()
{
    int t ;
    cin>>t ;
    while(t--){
        solve() ;

    }
}