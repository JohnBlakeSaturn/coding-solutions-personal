#include<iostream>
#include<cstdlib>

using namespace std;

int main(){
    int l[5][5];
    int i = 0, j = 0;
    int a, b;
    while(i<5){
        while(j<5){
            cin>>l[i][j];
            if(l[i][j] == 1){
                a = i+1;
                b = j+1;
            };
            j++;
        };
        i++;
        j = 0;
    };
    cout<<(abs(a - 3) + abs(b - 3));
};
