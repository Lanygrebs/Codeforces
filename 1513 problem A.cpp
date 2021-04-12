#include <bits/stdc++.h>

using namespace std;



void solve(){
    int n,k;
    cin>>n>>k;
    int s;
    s=(n/2)-1+ n%2;
    if (s<k){
        cout<<-1<<endl;
    }
    else{
        cout<<1;
        for(int i=2;i<n;i=i+2)
        {
            if(k){
                cout<<" "<<i+1<<" "<<i;
                k--;
            }
            else
                cout<<" "<<i<<" "<<i+1;

        }
        if(!(n%2))
            cout<<" "<<n;
        cout<<endl;

        }

}


int main(){
    int t;
    cin>>t;
    while(t--)
        solve();
}
