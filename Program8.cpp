#include<iostream>
using namespace std;

class Table
{
    public:
    int iNo,iCnt;
    Table()
    {
        iNo=0;
        iCnt=0;
    }
    void DisplayTable(int iNo)
    {
        if(iNo<0)
        {
            iNo=-iNo;
        }
        if(iNo==0)
        {
            return ;
        }
        for(iCnt=1;iCnt<=10;iCnt++)
        {
            cout<<iNo*iCnt<<"\n";
        }
    }
};

int main()
{
    Table tobj;
    int iValue=0;
    cout<<"enter number\n";
    cin>>iValue;
    tobj.DisplayTable(iValue);
    return 0;
}