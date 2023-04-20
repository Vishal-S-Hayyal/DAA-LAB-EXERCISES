
#include <bits/stdc++.h>
using namespace std;
#define ROW 3
#define COL 3

int dRow[] = { 0, 1, 0, -1 };
int dCol[] = { -1, 0, 1, 0 };

bool isValid(bool vis[][COL],
			int row, int col)
{
	if (row < 0 || col < 0
		|| row >= ROW || col >= COL)
		return false;

	if (vis[row][col])
		return false;

	return true;
}

void DFS(int row, int col,
		int grid[][COL],
		bool vis[][COL])
{

	stack<pair<int, int> > st;
	st.push({ row, col });
	while (!st.empty()) {
		pair<int, int> curr = st.top();
		st.pop();
		int row = curr.first;
		int col = curr.second;

		if (!isValid(vis, row, col))
			continue;
		vis[row][col] = true;

		cout << grid[row][col] << " ";

		for (int i = 0; i < 4; i++) {
			int adjx = row + dRow[i];
			int adjy = col + dCol[i];
			st.push({ adjx, adjy });
		}
	}
}

int main()
{
	int grid[ROW][COL] = { { -1, 2, 3 },
						{ 0, 9, 8 },
						{ 1, 0, 1 } };

	bool vis[ROW][COL];
	memset(vis, false, sizeof vis);

	DFS(0, 0, grid, vis);

	return 0;
}
