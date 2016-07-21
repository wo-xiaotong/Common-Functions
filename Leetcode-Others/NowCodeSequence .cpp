//#include<iostream>
//#include<string>
//using namespace std;
//
////NowCoder最近在研究一个数列：
////
////* F(0) = 7
////* F(1) = 11
////* F(n) = F(n-1) + F(n-2) (n≥2)
////
////他称之为NowCoder数列。请你帮忙确认一下数列中第n个数是否是3的倍数。
//
//string isMod3(int n){
//    if(n==0||n==1)
//        return "No";
//    int a=7,b=11;
//    int fn;
//    while(n-->=2){
//        fn=a+b;
//        a=b;
//        b=fn;
//    }
//    return fn%3==0?"Yes":"No";
//}
//
//string isMod3Easy(int n){
//    return (n-2)%4==0?"Yes":"No";
//}
//
//int main()
//{
//
//    int n;
//    while(cin>>n){
//            if(n%4==2)cout<<"Yes";
//            else cout<<"No";
//            cout<<endl;
//    }
//
//    return 0;
//}
