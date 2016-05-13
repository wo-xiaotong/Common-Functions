////Given an array of integers, find if the array contains any duplicates.
////Your function should return true if any value appears at least twice in the array,
////and it should return false if every element is distinct.
//
//#include<iostream>
//#include<vector>
//#include<algorithm>
//
//using namespace std;
//
//class Solution {
//public:
//    bool containsDuplicate(vector<int>& nums) {
//        bool containFlag = false;
//        if(nums.size() == 0)return containFlag;
//
//        vector<int>::iterator begin_iter = nums.begin(),end_iter = nums.end();
//        sort(begin_iter,end_iter);
//
//        for(vector<int>::iterator it=++begin_iter;it!=end_iter;it++){
//            if(*it == *(it-1))containFlag = true;
//        }
//
//        return containFlag;
//
//    }
//};
//
//int main()
//{
//    Solution s;
//    vector<int>a;
//
//    cout<<s.containsDuplicate(a);
//    return 0;
//}
