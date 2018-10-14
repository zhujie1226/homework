#include <QCoreApplication>
#include <iostream>
#include <QList>
#include <QVector>
#include <QDebug>
#include <algorithm>
class Student
{
public:
    int num;
    QString na;
    int score1;
    int score2;
};
bool name(Student A,Student B)
{
    if(A.na<=B.na)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
bool score1(Student A,Student B)
{
    if(A.score1<=B.score1)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
bool score2(Student A,Student B)
{
    if(A.score2<=B.score2)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    class Student A,B,C,D;

        A.num=14031430209;
        A.na="鲁智深";
        A.score1=80;
        A.score2=72;
        B.num=1403140101;
        B.na="林冲";
        B.score1=82;
        B.score2=76;
        C.num=1403140102;
        C.na="宋江";
        C.score1=76;
        C.score2=85;
        D.num=1403140103;
        D.na="武松";
        D.score1=88;
        D.score2=80;
        QList<Student> table;
        table<<A<<B<<C<<D;
        qDebug("原表格");
                for(int i=0;i<4;i++)
        {
            qDebug()<<table.at(i).num<<table.at(i).na<<table.at(i).score1<<table.at(i).score2;
        }
        qDebug("\n");
        std::sort(table.begin(),table.end(),name);
        qDebug("姓名排序\n");
        for(int i=0;i<4;i++)
        {
            qDebug()<<table.at(i).num<<table.at(i).na<<table.at(i).score1<<table.at(i).score2;
        }
        qDebug("\n");
        std::sort(table.begin(),table.end(),score1);
        qDebug("score1排序\n");
        for(int i=0;i<4;i++)
        {
            qDebug()<<table.at(i).num<<table.at(i).na<<table.at(i).score1<<table.at(i).score2;
        }
        qDebug("\n");
        std::sort(table.begin(),table.end(),score2);


        qDebug("score2排序");
        for(int i=0;i<4;i++)
        {
            qDebug()<<table.at(i).num<<table.at(i).na<<table.at(i).score1<<table.at(i).score2;
        }
        qDebug("\n");


    return a.exec();
}
