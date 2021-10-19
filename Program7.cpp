#include<iostream>
using namespace std;

class Div
{
    public:
    int iNo1,iNo2;
    Div()
    {
        iNo1=0;
        iNo2=0;
    }
    ~Div()
    {

    }
    bool CheckDiv(int iNo1,int iNo2)
    {
        if((iNo1==0)&&(iNo2==0))
        {
            return 0;
        }
        if((iNo1<0)&&(iNo2<0))
        {
            iNo1=-iNo1;
            iNo2=-iNo2;
        }
        if((iNo1%iNo2)==0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
int main()
{
    int iValue1=0,iValue2=0;
    bool bRet=false;
    cout<<"Enter two numbers\n";
    cin>>iValue1>>iValue2;
    Div obj;
    bRet=obj.CheckDiv(iValue1,iValue2);
    if(bRet==true)
    {
        cout<<iValue1<<"is divided by"<<iValue2<<endl;

    }
    else
    {
        cout<<iValue1<<"is not divided by"<<iValue2<<"\n";
    }
    return 0;
}