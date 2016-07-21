////Related to question Excel Sheet Column Title
////Given a column title as appear in an Excel sheet, return its corresponding column number.
////For example:
////    A -> 1
////    B -> 2
////    C -> 3
////    ...
////    Z -> 26
////    AA -> 27
////    AB -> 28
//
//#include<iostream>
//using namespace std;
//
//class Solution {
//public:
//    int titleToNumber(string s) {
//        int sum=0;
//        int length=s.size();
//        for(int i=0;i<length;i++){
//            sum*=26;
//            sum+=(s[i]-'A'+1);
//        }
//
//        return sum;
//    }
//};
//int main()
//{
//    Solution s;
//    cout<<s.titleToNumber("ATZ")<<endl;
//    return 0;
//}
