#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define pi pair<int,int>
#define speedboost ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std ;

int bit[200005][22] ={0};

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

void compute(){
    for(int i=1;i<=200000;i++){
        int a = i ; int j = 0 ; 
        while(a){
            if(a&1){
                bit[i][j]++ ;
            }
            if(i!=1){
                bit[i][j]+=bit[i-1][j] ;
            }
            j++ ; a>>=1 ;
        }
    }
}


void solve(){

    int l,r ; cin>>l>>r ;
    int ans = -1 ;
    for(int i=0;i<22;i++){
        ans=max(ans,bit[r][i]-bit[l-1][i]) ;
    }
    cout<<(r-l+1)-(ans)<<endl ;
    
}

int main()
{
    int t ;
    cin>>t ;
    compute() ;
    while(t--){
        
        solve() ;

    }
}

//5 1 2 2 8 4 5 1 5 100000 200000 