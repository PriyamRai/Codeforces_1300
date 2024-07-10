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


void print(vi v){ 
    int s=v.size() ;
    for(int i=0;i<s;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl ;
}


void solve(){
    int n,k ; cin>>n>>k ; 
    vi v(n) ; 
    input(v) ;
    sort(v.begin(),v.end()) ;
    vi temp ; int a=2*k,w=n-1 ;int s=0 ;
    while(a){
        s+=v[w] ;
        temp.push_back(v[w]) ;w--;a-- ;
    }

    int rem = accumulate(v.begin(),v.end(),0) ;rem-=s ;
    sort(temp.begin(),temp.end()) ;//print(temp) ;
    int i=0,j=temp.size()/2 ;
    while(j<temp.size()){
        if(temp[i]==temp[j]){
            rem++ ;
        }
        i++;j++ ;
    }

    cout<<rem<<endl ; return ;

    
}

int main()
{
    int t ;
    cin>>t ;
    while(t--){
        solve() ;

    }
}
//5 7 3 1 1 1 2 1 3 1 5 1 5 5 5 5 5 4 2 1 3 3 7 2 0 4 2 9 2 1 10 10 1 10 2 7 10 3 