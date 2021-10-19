//Accept a number from user & return its factorial

#include<iostream>
using namespace std;

class Factorial
{
    public:
    int iNo;
    Factorial()
    {
        iNo=0;
            }
    int Fact(int iNo)
    {
        int iMult=1;
        if(iNo<0)
        {
            iNo=-iNo;
        }
        while(iNo>0)
        {
            iMult=iMult*iNo;
            iNo--;
        }
        return iMult;
    }
};

int main()
{
    int iValue=0,iRet=0;
    Factorial fobj;
    cout<<"enter number\n";
    cin>>iValue;
    iRet=fobj.Fact(iValue);
    cout<<"Factorial is:"<<"\n"<<iRet;
    return 0;
}