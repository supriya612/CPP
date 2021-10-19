//Accept a number from user & return its smallest Digit.

#include<iostream>
using namespace std;

class Demo
{
    public:
    int iDigit,iMin;
    Demo()
    {
        iDigit=0;
        iMin=9;
    }
    int MinDigit(int iNo)
    {
        if(iNo<0)
        {
            iNo=-iNo;
        }
        while(iNo>0)
        {
            iDigit=iNo%10;
            if(iDigit<iMin)
            {
                iMin=iDigit;
            }
            iNo=iNo/10;
        }
        return iMin;
    }
};
int main()
{
    int iValue=0,iRet=0;
    Demo dobj;
    cout<<"enter number\n";
    cin>>iValue;
    iRet=dobj.MinDigit(iValue);
    cout<<"smallest Digit is:"<<iRet;
    return 0;
}