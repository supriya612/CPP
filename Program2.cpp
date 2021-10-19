#include<iostream>
using namespace std;
class Demo
{
    public:
    int iNo1,iNo2;
    Demo()
    {
        iNo1=0;
        iNo2=0;
    }
    ~Demo()
    {
        cout<<"Inside destructor\n";
    }
    int Maximum(int iNo1,int iNo2)
    {
        if(iNo1>iNo2)
        {
            return iNo1;
        }
        else
        {
            return iNo2;
        }
    }
};

int main()
{
    int iValue1=0,iValue2=0,iRet=0;
    cout<<"enter two numbers\n";
    cin>>iValue1>>iValue2;
    Demo dobj;
    iRet=dobj.Maximum(iValue1,iValue2);
    cout<<"Maximum number is:"<<iRet<<endl;
    return 0;
}