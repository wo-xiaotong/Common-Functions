//class Solution {
//public:
//    bool searchMatrix(vector<vector<int>>& matrix, int target) {
//        int m=matrix.size();
//        if(m==0)return false;
//        int n=matrix[0].size();
//        
//        int mid,left=0,right=m*n-1;
//        while(left<=right){
//            mid=left+(right-left)/2;
//            if(target==matrix[mid/n][mid%n])return true;
//            if(target>matrix[mid/n][mid%n])left=mid+1;
//            else right=mid-1;
//        }
//        
//        return false;
//    }
//};