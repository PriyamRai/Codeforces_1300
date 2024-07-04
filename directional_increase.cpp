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


void solve(){
    int n ; cin>>n ; 
    vi v(n) ; 
    input(v) ;
    while(!v.empty()&&v.back()==0){
        v.pop_back() ;
    }
    if(v.size()==0){
        cout<<"YES\n" ; 
        return ;
    }
    if(v.size()==1){
        cout<<"NO\n" ;
        return ;
    }
    if(v[0]<=0||v.back()>0){
        cout<<"NO\n" ; 
        return ;
    }

    ll lst = 0 ; 
    for(int i=v.size()-1;i>0;i--){
        lst = (lst-v[i]) ;
        if(lst<=0){
            cout<<"NO\n" ; return ;
        }
    }

    if(lst==v[0]){
        cout<<"YES\n" ;
        return ;
    }

    cout<<"no\n" ;return ;
}

int main()
{
    int t ;
    cin>>t ;
    while(t--){
        solve() ;

    }
}