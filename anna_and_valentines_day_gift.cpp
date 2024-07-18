#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define pi pair<int,int>
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
        cout<<v[i]<<" " ;
    }
    cout<<endl ;
}


int trailing_zeroes(string s){

    int ans=0 ,i=s.size()-1;
    while(i>=0&&s[i]=='0'){
        ans++;i--;
    } 

    return ans ;
}
/*
9 2 2 14 2 3 5 9 56 1 4 10 1 2007 800 1580 4 5 5000 123 30 4 10 10 6 4 6 2 3 1 10 9 10 7 1 1 6 1 1 10 8 9 1 2 9 10 10 2 10 2 4 5 10 10 10 10 
*/
void solve(){
    int n,m ; 
    cin>>n>>m ;
    vi v(n) ;
    vi zeroes_count ;int totallength = 0 ;
    for(int i=0;i<n;i++){
        int a ; cin>>a ; 
        string s = to_string(a) ;totallength+=s.size() ;
        zeroes_count.push_back(trailing_zeroes(s)) ;
    }

    sort(zeroes_count.begin(),zeroes_count.end(),greater<int>()) ;
    int cant_save = 0 ;
    for(int i=0;i<zeroes_count.size();i+=2){
        cant_save+=zeroes_count[i] ;
    }

    int lenrem = totallength-cant_save ;
    if(lenrem>=m+1){
        cout<<"Sasha\n" ;
    }else{
        cout<<"Anna\n" ; 
    }

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