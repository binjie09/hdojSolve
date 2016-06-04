#include <iostream>
using namespace std;
char mp[101][101];
int n,startX,startY,endX,endY;

void bfs(int x, int y,int step){
    if()
}

int main(){

    cin >> n;
    for(int i = 0; i < n; i++)
    for(int j = 0; j < n; j++){
        cin >> mp[i][j];
        if(mp[i][j] == 'A'){
            startX = i;
            startY = j;
        }else if(mp[i][j] == 'B'){
            endX = i;
            endY = j;
        }
    }
    bfs(0);
}
