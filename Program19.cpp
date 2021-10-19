//accept a number from user & return number of even digits

#include<iostream>
using namespace std;

class Demo
{
    public:
    int iNo;
    Demo()
    {
        this->iNo=0;
    }
    ~Demo(){}
    int EvenDigits(int iNo)
    {
        int iDigit=0;
        int iCnt=0;
        if(iNo<0)
        {
            iNo=-iNo;
        }
        while(iNo>0)
        {
            iDigit=iNo%10;
            if((iDigit%2)==0)
            {
                iCnt++;
            }
            iNo=iNo/10;
        }
        return iCnt;
    }
};
int main()
{
    int iValue=0,iRet=0;
    cout<<"enter number\n";
    cin>>iValue;
    Demo dobj;
    iRet=dobj.EvenDigits(iValue);
    cout<<"number of even digits are:"<<iRet<<endl;
    return 0;
}