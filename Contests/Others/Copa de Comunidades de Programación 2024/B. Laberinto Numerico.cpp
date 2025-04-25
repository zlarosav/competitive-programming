#include <bits/stdc++.h>

using namespace std;

struct Cell {
  int x, y, steps;
};

bool canMove(int value, int direction) {
  return !(value & (1 << direction));
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int rows, cols; cin >> rows >> cols;
  int startX, startY; cin >> startX >> startY;
  startX--; startY--; 

  vector<vector<int>> laberinto(rows, vector<int>(cols));
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      cin >> laberinto[i][j];
    }
  }

  vector<vector<bool>> visited(rows, vector<bool>(cols, false));
  queue<Cell> q;
  q.push({startX, startY, 0});
  visited[startX][startY] = true;

  int directions[4][2] = {{0, -1}, {-1, 0}, {0, 1}, {1, 0}};
  
  while (!q.empty()) {
    Cell current = q.front();
    q.pop();
    
    int x = current.x;
    int y = current.y;
    int steps = current.steps;

    if ((x == 0 && canMove(laberinto[x][y], 1)) ||
      (x == rows - 1 && canMove(laberinto[x][y], 3)) ||
      (y == 0 && canMove(laberinto[x][y], 0)) ||
      (y == cols - 1 && canMove(laberinto[x][y], 2))) {
      cout << steps << "\n";
      return 0;
    }

    for (int i = 0; i < 4; i++) {
      int nx = x + directions[i][0];
      int ny = y + directions[i][1];
      if (nx >= 0 && nx < rows && ny >= 0 && ny < cols && !visited[nx][ny] && canMove(laberinto[x][y], i)) {
        visited[nx][ny] = true;
        q.push({nx, ny, steps + 1});
      }
    }
  }

  cout << "-1\n";
  return 0;
}
