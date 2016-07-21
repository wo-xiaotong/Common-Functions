//class Solution {
//public:
//	int numIslands(vector<vector<char>>& grid) {
//		int sizeI = grid.size();
//		if (sizeI == 0)return 0;
//		int sizeJ = grid[0].size();
//		int count = 0;
//
//		for (int i = 0; i<sizeI; i++)
//		for (int j = 0; j<sizeJ; j++){
//			if (grid[i][j] == '1'){
//				searchAround(grid, i, j, sizeI, sizeJ);
//				count++;
//			}
//		}
//
//		return count;
//	}
//
//	void searchAround(vector<vector<char>>& grid, int i, int j, int sizeI, int sizeJ){
//		grid[i][j] = '2';
//		if (i - 1 >= 0 && grid[i - 1][j] == '1')searchAround(grid, i - 1, j, sizeI, sizeJ);
//		if (i + 1<sizeI && grid[i + 1][j] == '1')searchAround(grid, i + 1, j, sizeI, sizeJ);
//		if (j - 1 >= 0 && grid[i][j - 1] == '1')searchAround(grid, i, j - 1, sizeI, sizeJ);
//		if (j + 1 <= sizeJ && grid[i][j + 1] == '1')searchAround(grid, i, j + 1, sizeI, sizeJ);
//	}
//};