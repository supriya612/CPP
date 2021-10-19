//Accept a number from user & check whether its prime or not

#include<iostream>
using namespace std;

class Prime
{
    public:
    int iNo;
    Prime()
    {
        this->iNo=0;
            }
    ~Prime()
    {}
    bool CheckPrime(int iNo)
    {
        int  iCnt=0;
        if(iNo<0)
        {
            iNo=-iNo;
        }
        for(iCnt=2;iCnt<=iNo/2;iCnt++)
        {
            if((iNo%iCnt)==0)
            {
                break;
            }
        }
        if(iCnt==(iNo/2)+1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
int main()
{
    int iValue=0;
    bool bRet;
    cout<<"Enter number\n";
    cin>>iValue;
    Prime pobj;
    bRet=pobj.CheckPrime(iValue);
    if(bRet==true)
    {
        cout<<"Number is prime"<<iValue<<endl;
    }
    else
    {
        cout<<"number is not prime"<<iValue<<endl;
    }
    return 0;
}
