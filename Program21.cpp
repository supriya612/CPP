//Accept a number from user & display multiplication of digits

#include<iostream>
using namespace std;

class Multi
{
    public:
    int iNo;
    Multi()
    {
        this->iNo=0;

    }
    ~Multi()
    {}
    int MultDigits(int iNo)
    {
        int iDigit=0,iMult=1;
        if(iNo<0)
        {
            iNo=-iNo;
        }
        if(iNo==0)
        {
            return 1;
        }
        while(iNo>0)
        {
            iDigit=iNo%10;
            if(iDigit!=0)
            {
                iMult=iMult*iDigit;
            }
            iNo=iNo/10;
        }
        return iMult;
    }
};
int main()
{
    Multi mobj;
    int iValue=0,iRet=0;
    cout<<"Enter number\n";
    cin>>iValue;
    iRet=mobj.MultDigits(iValue);
    cout<<"Multiplication of digits is :"<<iRet;
    return 0;
}