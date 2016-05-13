/*题目描述
读入n名学生的姓名、学号、成绩，分别输出成绩最高和成绩最低学生的姓名和学号。
输入描述:
每个测试输入包含1个测试用例，格式为
  第1行：正整数n
  第2行：第1个学生的姓名 学号 成绩
  第3行：第2个学生的姓名 学号 成绩
  第n+1行：第n个学生的姓名 学号 成绩
其中姓名和学号均为不超过10个字符的字符串，成绩为0到100之间的一个整数，这里保证在一组测试用例中没有两个学生的成绩是相同的。*/


#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;

class Info{
    private:
    string name;
    string id;
    int score;
    public:
    Info(string name,string id,int score){
        this->name=name;
        this->id=id;
        this->score=score;
    }
    int getScore(){return this->score;}
    string getName(){return this->name;}
    string getId(){return this->id;}
};

bool cmpInfo(Info A,Info B){
    return A.getScore()>B.getScore();
}

int main()
{
    string name,id;
    int n,score;
    vector<Info>infos;
    cin>>n;
    while(n--){
        cin>>name>>id>>score;
        Info a(name,id,score);
        infos.push_back(a);
    }

    sort(infos.begin(),infos.end(),cmpInfo);
    cout<<(*infos.begin()).getName()<<" "<<(*infos.begin()).getId()<<endl;
    cout<<(*(--infos.end())).getName()<<" "<<(*(--infos.end())).getId();


    return 0;
}
