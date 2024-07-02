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


void solve(){
    int n ; cin>>n ; 
    vi a(n),b(n) ;
    input(a) ; input(b) ;
    for(int i=0;i<n;i++){
        if(a[i]>b[i]){
            cout<<"NO\n" ; return ;
        }else if(a[i]<b[i]){
            int x =i , y = (i+1)%n ;
            if(!(b[x]<=b[y]+1)){
                cout<<"NO\n" ; 
                return ;
            }
        }
    } 

    cout<<"YES\n" ; 
    return ;
    
}

int main()
{
    int t ;
    cin>>t ;
    while(t--){
        solve() ;

    }
}