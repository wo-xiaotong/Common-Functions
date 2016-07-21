////write your own sqrt
//#include<iostream>
//using namespace std;
//
//class Solution {
//public:
//    double mySqrt(int x) {
//       if(x<=0)return 0;
//       float exp=0.000001;
//       double begin=0;
//       double end=x;
//       double res=(begin+end)/2;
//       while(res*res-x>exp||res*res-x<-exp){
//           if(res*res<x)begin=res;
//           else end=res;
//           res=(begin+end)/2;
//       }
//
//       return res;
//    }
//    int mySqrt2(int x) {
//        if(x<=1)return x;
//       int begin=0;
//       int end=x;
//       int res;
//       while((end-begin)>1){
//           res=begin+(end-begin)/2;
//           if(res==x/res)return res;
//           if(res<x/res)begin=res;
//           else end=res;
//       }
//
//       return begin;
//    }
//};
//int main()
//{
//
//	return 0;
//}
