////Given a non-negative number represented as an array of digits, plus one to the number.
////
////The digits are stored such that the most significant digit is at the head of the list.
//
//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    vector<int> plusOne(vector<int>& digits) {
//        int length=digits.size();
//        bool flag=true;
//
//        for(int index=length-1;index>=0&&flag;index--){
//                if(digits[index]==9){
//                        digits[index]=0;
//                        flag=true;
//                }
//                else {
//                        flag=false;
//                        digits[index]+=1;
//                }
//        }
//
//        if(digits[0]==0)digits.insert(digits.begin(),1);
//
//        return digits;
//
//    }
//};
//
//int main()
//{
//
//    return 0;
//}
