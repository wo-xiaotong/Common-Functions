////Reverse digits of an integer.
////
////Example1: x = 123, return 321
////Example2: x = -123, return -321
//
//#include<iostream>
//#include<string>
//#include<cmath>
//
//using namespace std;
//
//class Solution {
//public:
//    int reverse(int x) {
//        if(x==0)return x;
//
//        long long res=0,temp;
//        int flag;
//        x>0?flag=1:flag=-1;
//        temp=abs(x);
//
//        while(temp%10==0)temp/=10;
//        while(temp){
//                res=res*10;
//                res=res+temp%10;
//                temp/=10;
//        }
//
//        if(flag==1&&res>2147483647)return 0;
//        if(flag==-1&&res>2147483648)return 0;
//
//        return flag==1?(int)res:-(int)res;
//
//    }
//};
//
//int main()
//{
//    Solution s;
//    cout<<s.reverse(-2147483648)<<endl;
//    return 0;
//}
