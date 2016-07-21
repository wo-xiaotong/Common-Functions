////Determine whether an integer is a palindrome. Do this without extra space.
//
//#include<iostream>
//using namespace std;
//
//class Solution {
//public:
//    bool isPalindrome(int x) {
//        if(x<0)return false;
//
//        bool isPail=true;
//        int base=1;
//        while(x/base>=10){
//            base*=10;
//        }
//
//        int leftDigit=0,rightDigit=0;
//        while(x){
//            leftDigit=x/base;
//            rightDigit=x%10;
//
//            if(leftDigit!=rightDigit){
//                isPail=false;
//                break;
//            }
//            x=x-base*leftDigit;
//            x=x/10;
//            base=base/100;
//        }
//
//        return isPail;
//    }
//};
//
//int main()
//{
//    Solution s;
//    cout<<s.isPalindrome(1001);
//
//    return 0;
//}
