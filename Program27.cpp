//accept two numbers from user & return the frequency of given digit.

#include<iostream>
using namespace std;

class Frequency
{
    public:
    int iDigit,iCnt,iNo1,iNo2;
    Frequency()
    {
        this->iNo1=0;
        this->iNo2-0;
        this->iCnt=0;
        this->iDigit=0;
    }
    int FrequencyDigit(int iNo1,int iNo2)
    {
        if(iNo1<0)
        {
            iNo1=-iNo1;
        }
        while(iNo1>0)
        {
            iDigit=iNo1%10;
            if(iDigit==iNo2)
            {
                iCnt++;
            }
          iNo1=iNo1/10;
        }
        return iCnt;
    }
};

int main()
{
    int iValue1=0,iValue2=0,iRet=0;
    cout<<"Enter number\n";
    cin>>iValue1;
    cout<<"enter the digit that you want to count\n";
    cin>>iValue2;
    Frequency dobj;
    iRet=dobj.FrequencyDigit(iValue1,iValue2);
    cout<<"the frequency of given digit is :"<<iRet;
    return 0;

}