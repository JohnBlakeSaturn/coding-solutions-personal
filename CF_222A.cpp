#include<iostream>

using namespace std;

int main(){
    int n, k;
    cin>>n>>k;
    int m = n;
    int a, cont = 1, prev;
    cin>>prev;
    m--;
    while(m--){
        cin>>a;
        if(a==prev){
            cont++;
        }else{
            cont = 1;
        }
        prev = a;
    }
    //cout<<n;
    //cout<<cont;
    int ans = (cont+k>n)?n-cont:-1;
    cout<<ans;
}
