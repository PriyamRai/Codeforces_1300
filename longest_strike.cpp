#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<long long>
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
    int n,k ; cin>>n>>k ;
    map<int,int> mp ; 
    for(int i=0;i<n;i++){
        int a ; cin>>a ; 
        mp[a]++ ;
    }

    int a[200005] ,b=0;
    for(auto i:mp){
        if(i.second>=k){
            a[b++]=i.first ;
        }
    }

    if(b==0){
        cout<<-1<<endl ;return ;
    }

    sort(a,a+b) ;

    int lans=a[0],rans=a[0] ;
    bool c = (b==sizeof(a)/sizeof(a[0])) ;
    
    int l=a[0] ;
    for(int i=1;i<b;i++){
        if(a[i]-a[i-1]!=1){
            l=a[i] ;
        }

        if(a[i]-l>rans-lans){
            lans =l ,rans=a[i] ;
        }
    }
    cout<<lans<<" "<<rans<<endl ;
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

//2 1 8 7 7 3 4 8 2 4 8 5 7 6 4 3 1 1 3 5 5 8 2 9 9 7 5 8 7 10 7 4 1 8 4 3 5 8 5 4 4 6 3 6 7 6 7 4 3 4 7 3 4 1 1 4 7 6 3 2 2 3 3 3 3 8 2 7 6 6 6 7 7 6 6 5 2 6 8 5 6 3 6 3 2 7 3 3 6 4 7 5 3 4 6 3 2 6 7 2 1 9 9 2 1 1 4 7 3 9 4 10 4 5 3 6 8 1 4 4 4 3 2 2 4 2 2 1 1 5 4 3 10 2 7 3 4 1 4 8 9 5 3 1 5 3 5 1 1 5 6 4 4 6 7 9 3 3 4 4 7 7 7 6 3 3 8 7 2 5 4 2 3 3 4 4 5 4 4 3 4 5 4 4 2 3 2 2 1 3 3 6 3 8 3 2 6 5 5 2 1 9 9 8 7 8 6 3 5 10 1 5 3 