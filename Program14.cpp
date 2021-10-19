//Accept a number from user & display addition of its factors

#include<iostream>
using namespace std;

class DisplaySum
{
    public:
    int iNo;
    DisplaySum()
    {
        this->iNo=0;
    }
    int FactorsSum(int iNo)
    {
        int iCnt=0,iSum=0;
        if(iNo<0)
        {
            iNo=-iNo;
        }
        for(iCnt=1;iCnt<=iNo/2;iCnt++)
        {
            if((iNo%iCnt)==0)
            {
                iSum=iSum+iCnt;
            }
        }
        return iSum;
    }
};

int main()
{
    int iValue=0,iRet=0;
    cout<<"enter number\n";
    cin>>iValue;
    DisplaySum dobj;
    iRet=dobj.FactorsSum(iValue);
    cout<<"Addition of factors are:"<<iRet<<"\n";
}