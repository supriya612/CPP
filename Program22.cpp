//accept a number from user & return the frequency of entered digit
#include<iostream>
using namespace std;

class Frequency
{
    public:
    int iNo1,iNo2;
    Frequency()
    {
        this->iNo1=0;
        this->iNo2=0;
    
    }
    ~Frequency()
    {}
    int Freq(int iNo1,int iNo2)
    {
        int iDigit=0,iCnt=0;
        if(iNo1<0)
        {
            iNo1=-iNo1;
        }
        if((iNo2<0)||(iNo2>9))
        {
            cout<<"Invalid digits\n";
            return 1;
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
    Frequency fobj;
    cout<<"enter number";
    cin>>iValue1;
    cout<<"enter the digit that you want to search\n";
    cin>>iValue2;
    iRet=fobj.Freq(iValue1,iValue2);
    cout<<"frequency of given digit is:"<<iRet;
    return 0;
}