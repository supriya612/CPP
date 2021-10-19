//Accept a number from user & check whether its perfect or not

#include<iostream>
using namespace std;

class Perfect
{
    public:
    int iNo;
    Perfect()
    {
        iNo=0;
    }
    bool CheckPerfect(int iNo)
    {
        int iSum=0;
        if(iNo<0)
        {
            iNo=-iNo;
        }
        for(int iCnt=1;iCnt<=iNo/2;iCnt++)
        {
            if((iNo%iCnt)==0)
            {
                iSum=iSum+iCnt;
            }
        }
        if(iSum==iNo)
        {
            return true;
        }
        else{
            return false;
        }
    }
};
int main()
{
    Perfect pobj;
    int iValue=0;
    bool bRet;
    cout<<"Enter number\n";
    cin>>iValue;
    bRet=pobj.CheckPerfect(iValue);
    if(bRet==true)
    {
        cout<<iValue<<"is perfect number"<<"\n";
    }
    else
    {
        cout<<iValue<<"is not perfect number"<<endl;
    }
    return 0;
}