/*��Ŀ����
����n��ѧ����������ѧ�š��ɼ����ֱ�����ɼ���ߺͳɼ����ѧ����������ѧ�š�
��������:
ÿ�������������1��������������ʽΪ
  ��1�У�������n
  ��2�У���1��ѧ�������� ѧ�� �ɼ�
  ��3�У���2��ѧ�������� ѧ�� �ɼ�
  ��n+1�У���n��ѧ�������� ѧ�� �ɼ�
����������ѧ�ž�Ϊ������10���ַ����ַ������ɼ�Ϊ0��100֮���һ�����������ﱣ֤��һ�����������û������ѧ���ĳɼ�����ͬ�ġ�*/


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
