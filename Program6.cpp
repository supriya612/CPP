#include<iostream>
using namespace std;

class Display
{
    public:
    int iNo;
    Display()
    {
        iNo=0;
    }
    ~Display()
    {

    }
    bool CheckDivisible(int iNo)
    {
        if(iNo==0)
        {
            return 0;
        }
        if(iNo<0)
        {
            iNo=-iNo;
        }
        if(((iNo%3)==0)&&((iNo%5)==0))
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
    int iValue=0;
    bool bRet;
    Display dobj;
    cout<<"enter number\n";
    cin>>iValue;
    bRet=dobj.CheckDivisible(iValue);
    if(bRet==true)
    {
        cout<<"Number is divisible by 3 & 5"<<"\n";
    }
    else
    {
        cout<<"Number is not divisible by 3 & 5";
    }
    return 0;
}