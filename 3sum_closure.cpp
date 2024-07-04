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
        cout<<v[i];
    }
 cout<<endl ;
}


void solve(){
    int n; cin>>n ;
    vi v(n) ,v1,v2 ;input(v);
    for(int i=0;i<n;i++){
        if(v[i]==0){
            v2.push_back(0);
        }else{
            v1.push_back(v[i]) ;
        }
    }

    if(v1.size()>4){
        cout<<"NO\n";return ;
    }
    if(v2.size()>=2){
        v1.push_back(0); v1.push_back(0);
    }else{
        if(v2.size()!=0){
            v1.push_back(0) ;
        }
    }

    sort(v1.begin(),v1.end()) ;
    for(int i=0;i<v1.size();i++){
        for(int j=i+1;j<v1.size();j++){
            for(int k=j+1;k<v1.size();k++){
                bool ok = false;
				for (int l = 0;l<v1.size();l++) {
					if (v1[i] + v1[j] + v1[k] == v1[l]) {
                        ok = true;
                    }
				}
				if (!ok) {
                    cout << "NO\n"; return;
                }
            }

        }
    }
    cout<<"YES\n";return ;
}

int main()
{
    int t ;
    cin>>t ;
    while(t--){
        solve() ;

    }
}