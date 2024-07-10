#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define pair pair<int,int>
using namespace std ;

void input(vi &v){
    int s=v.size() ;
    for(int i=0;i<s;i++){
        cin>>v[i] ;
    }
}


void print(vi &v){ 
    int s=v.size() ;
    for(int i=0;i<s;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl ;
}

ll lcm(ll a,ll b){
    ll a1 = (ll)(a)*(ll)(b) ;
    return (a1)/(__gcd(a,b)) ;
}


void solve(){
    ll n ; cin>>n ; 
    ll lc = 1 ; 
    
    for(int i=1;i<=n;i++){
        cout<<i<<" ";
    }
    cout<<endl ;return ;
}

int main()
{
    int t ;
    cin>>t ;
    while(t--){
        solve() ;

    }
}