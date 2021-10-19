#include<iostream>
using namespace std;
class Check
{
    public:
    int iNo;
    Check()
    {
        iNo=0;
    }
    ~Check()
    {}
    bool CheckEven(int iNo)
    {
        if(iNo==0)
        {
            return 0;
        }
        if(iNo<0)
        {
            iNo=-iNo;
        }
        if((iNo%2)==0)
        {
            return true;
        }
        else{
            return false;
        }
    }
};


int main()
{
    Check cobj;
    int iValue=0;
    bool bRet=false;
    cout<<"enter number\n";
    cin>>iValue;
    bRet=cobj.CheckEven(iValue);
    if(bRet==true)
    {
        cout<<"Number is even\n";
    }
    else
    {
        cout<<"Number is odd\n";
    }
    return 0;
}