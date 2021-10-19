#include<iostream>
using namespace std;

class DisplayPower
{
   public:
    int iNo1,iNo2;
    DisplayPower()
    {
        iNo1=0;
        iNo2=0;
    }
    int Power(int iNo1,int iNo2)
    {
        if((iNo1==0)&&(iNo2==0))
        {
            return 0;
        }
        if((iNo1<0)&&(iNo2<0))
        {
            iNo1=-iNo1;
            iNo2=-iNo2;
        }
        int iMult=1;
        for(int iCnt=1;iCnt<=iNo2;iCnt++)
        {
            iMult=iMult*iNo1;
        }
        return iMult;
    }
};
int main()
{
    int iValue1=0,iValue2=0,iRet=0;
    cout<<"enter two numbers\n";
    cin>>iValue1>>iValue2;
    DisplayPower dobj;
    iRet=dobj.Power(iValue1,iValue2);
    cout<<"Result is:"<<iRet<<"\n";
    return 0;
}