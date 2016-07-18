class Solution {
public:
	vector<int> spiralOrder(vector<vector<int>>& matrix) {
		vector<int>ret;
		int m = matrix.size();
		if (m == 0)return ret;
		int n = matrix[0].size();

		so(matrix, 0, 0, m - 1, n - 1, ret);
		return ret;
	}

	void so(vector<vector<int>>& matrix, int beginI, int beginJ, int m, int n, vector<int>&ret){
		if (m<0 || n<0)return;
		if(m==0){
		    for(int i=beginJ;i<=beginJ+n;i++)ret.push_back(matrix[beginI][i]);
		    return ;
		}
		if(n==0){
		    for(int i=beginI;i<=beginI+m;i++)ret.push_back(matrix[i][beginJ]);
		    return ;
		}

		for (int j = beginJ; j <= beginJ + n; j++)ret.push_back(matrix[beginI][j]);
		for (int i = beginI + 1; i <= beginI + m; i++)ret.push_back(matrix[i][beginJ + n]);
		for (int j = beginJ + n - 1; j >= beginJ; j--)ret.push_back(matrix[beginI + m][j]);
		for (int i = beginI + m - 1; i >= beginI + 1; i--)ret.push_back(matrix[i][beginJ]);
		so(matrix, beginI + 1, beginJ + 1, m - 2, n - 2, ret);
	}
};
