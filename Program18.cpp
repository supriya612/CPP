//accept a number from user & display sum of its digits
#include<iostream>
using namespace std;

class Digits
{
    public:
    int iNo=0;
    Digits()
    {
        this->iNo=0;
    }
    ~Digits()
    {}
    int SumDigits(int iNo)
    {
        int iDigit=0,iSum=0;
        if(iNo<0)
        {
            iNo=-iNo;
        }
        while(iNo>0)
        {
        iDigit=iNo%10;
        iNo=iNo/10;
        iSum=iSum+iDigit;
    }
    return iSum;
    }

};
int main()
{
    int iValue=0,iRet=0;
    Digits dobj;
    cout<<"enter number\n";
    cin>>iValue;
    iRet=dobj.SumDigits(iValue);
    cout<<"Addition of digits is:"<<iRet<<"\n";
    return 0;
}