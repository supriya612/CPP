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
    ~Factorial()
    {}
    int Fact(int iNo)
    {
        int iCnt=0,iMult=1;
        if(iNo<0)
        {
            iNo=-iNo;
        }
            
        for(iCnt=1;iCnt<=iNo/2;iCnt++)
        {
            iMult=iMult*iCnt;
            cout<<iMult<<endl;
        }
        return iMult;
    }
};
int main()
{
    int iValue=0,iRet=0;
    Factorial fobj;
    cout<<"Enter number\n";
    cin>>iValue;
    iRet=fobj.Fact(iValue);
    cout<<"Factorial is"<<"\n"<<iRet;
    return 0;

}