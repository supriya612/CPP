//Accept a number from user & return the difference between largest & smallest digit.

#include<iostream>
using namespace std;

class DifferenceX
{
    public :
    int iNo,iDigit,iMin,iMax;
    DifferenceX()
    {
        this->iDigit=0;
        this->iMax=0;
        this->iMin=9;
        this->iNo=0;
    }
    int Difference(int iNo)
    {
        if(iNo<0)
        {
        iNo=-iNo;
        }
        while(iNo>0)
        {
            iDigit=iNo%10;
            if(iDigit>iMax)
            {
                iMax=iDigit;
            }
            if(iDigit<iMin)
            {
                iMin=iDigit;
            }
            iNo=iNo/10;
        }
        return iMax-iMin;
    }
};
int main()
{
    int iValue=0,iRet=0;
    cout<<"Enter number\n";
    cin>>iValue;
    DifferenceX dobj;
    iRet=dobj.Difference(iValue);
    cout<<"Difference between largest & smallest digit is:"<<iRet;

    return 0;
}
