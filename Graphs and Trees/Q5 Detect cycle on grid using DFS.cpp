// https://codeforces.com/contest/510/problem/B
#include <bits/stdc++.h>
using namespace std;
 
#define X 100

const int directionInX[4] = { -1, 0, 1, 0 };
const int directionInY[4] = { 0, 1, 0, -1 };

int N, M;
char A[X][X];
bool isValid(int x, int y)
{
    return x < N && x >= 0 && y < M && y >= 0;
}
 
bool isCycle(int x, int y, char arr[X][X], bool visited[X][X], int parentX, int parentY)
{
    visited[x][y] = true;
 
    for (int k = 0; k < 4; k++) {
        int newX = x + directionInX[k];
        int newY = y + directionInY[k];
        if (isValid(newX, newY) == 1 && arr[newX][newY] == arr[x][y] && 
            !(parentX == newX and parentY == newY)) {
 
            if (visited[newX][newY] == 1) {
                return true;
            }
 
            else {
                bool check = isCycle(newX, newY, arr, visited, x, y);
                if (check == 1)
                    return true;
            }
        }
    }
    return false;
}
 
void detectCycle(char arr[X][X])
{
 
    bool visited[X][X];
 
    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            visited[i][j] = false;
 
    bool cycle = 0;

    for (int i = 0; i < N; i++) {
        if (cycle == true)
            break;
        for (int j = 0; j < M; j++) {
            if (visited[i][j] == 0) {
                cycle = isCycle(i, j, arr, visited, -1, -1);
            }
            if (cycle == true)
                break;
        }
    }
 
    if (cycle == true) {
        cout << "Yes";
    }
    else {
        cout << "No";
    }
}
 
// Driver code
int main()
{
    cin>>N>>M;
    for(int i=0; i<N; i++){
        for(int j=0;j<M; j++) 
            cin>>A[i][j];
    }
    detectCycle(A);
    return 0;
}