#include <iostream>
using namespace std;
int vis[1000],a[1000],b[1000];
int n = 0;
void print(int cur){
    if(cur == n){
        for(int i = 0; i <= n; i++)
            cout << b[i] <<" "<<endl;
        return;
    }
    for(int i = 1; i <= n; i++){
        if(!vis[i]){
            b[cur] = i;
            vis[i] = 1;
            print(cur++);
            vis[i] = 0;
        }
    }
}

int main(){
    cin >> n;
    print(0);
}
