////Rotate an array of n elements to the right by k steps.
////For example, with n = 7 and k = 3, the array [1,2,3,4,5,6,7] is rotated to [5,6,7,1,2,3,4].
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//class Solution {
//public:
//    void rotate(vector<int>& nums,int k){
//        k=k%nums.size();
//        vector<int>::iterator iter1,iter2,iter3;
//        iter1=nums.begin();
//        iter3=nums.end();
//        iter2=iter3-k;
//
//        reverse(iter1,iter2);
//        reverse(iter2,iter3);
//        reverse(iter1,iter3);
//    }
//
//     void rotate2(vector<int>& nums,int k){
//       std::rotate(nums.begin(),nums.begin()+nums.size()-k,nums.end());
//    }
//};
//
//void print(int& m){
//    cout<<m<<" ";
//}
//
//int main()
//{
//    int a[]={1,2,3,4,5,6,7,8};
//    vector<int>v(a,a+8);
//
//    Solution s;
//    s.rotate(v,2);
//
//    for_each(v.begin(),v.end(),print);
////    for(int i=0;i<v.size();i++)
////        cout<<v[i]<<" ";
//    return 0;
//}
