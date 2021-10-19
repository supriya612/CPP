//accept a number from user & check whether its palindrome or not.
#include<iostream>
using namespace std;

class Demo
{
    public :
    int iNo;
    int iDigit,iRev,iTemp;
    Demo()
    {
        this->iNo=0;
        this->iRev=0;
        this->iDigit=0;
        this->iTemp=0;
    }
    bool CheckPalindrome(int iNo)
    {
        if(iNo<0)
        {
            iNo=-iNo;
        }
        iTemp=iNo;
        while(iNo>0)
        {
            iDigit=iNo%10;
            iRev=(iRev*10)+iDigit;
            iNo=iNo/10;
        }
        if(iRev==iTemp)
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
    Demo dobj;
    cout<<"enter number\n";
    cin>>iValue;
    bRet=dobj.CheckPalindrome(iValue);
    if(bRet==true)
    {
        cout<<"Number is palindrome\n";
    }
    else
    {
        cout<<"Number is not palindrome\n";
    }
   return 0;
}