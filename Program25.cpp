//Accept a number from user & return its largst digit

#include<iostream>
using namespace std;

class Display
{
    public:
    int iNo,iDigit,iMax;
    Display()
    {
        this->iNo=0;
        this->iDigit=0;
        this->iMax=0;
    }
    int MaxDigit(int iNo)
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
            iNo=iNo/10;
        }
        return iMax;
    }
};
int main()
{
    int iValue=0,iRet=0;
    cout<<"enter number\n";
    cin>>iValue;
    Display dobj;
    iRet=dobj.MaxDigit(iValue);
    cout<<"Max Digit is:"<<iRet<<endl;
    return 0;
}