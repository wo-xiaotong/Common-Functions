//#include<iostream>
//#include<string>
//using namespace std;
//
////NowCoder������о�һ�����У�
////
////* F(0) = 7
////* F(1) = 11
////* F(n) = F(n-1) + F(n-2) (n��2)
////
////����֮ΪNowCoder���С������æȷ��һ�������е�n�����Ƿ���3�ı�����
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
