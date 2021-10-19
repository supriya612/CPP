//accept a number from user & return number of even digits
#include<iostream>
using namespace std;

class EvenDigits
{
    public:
    int iNo;
    EvenDigits()
    {
        this->iNo;
    }
    ~EvenDigits(){}
     int Even(int iNo)
     {
         int iDigit=0;
         int iCnt=0;
         if(iNo<0)
         {
             iNo=-iNo;
         }
         if(iNo==0)
         {
             return 1;
         }
         while(iNo>0)
         {
             if(((iNo%10)%2)==0)
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
    EvenDigits eobj;
    cout<<"enter number\n";
    cin>>iValue;
    iRet=eobj.Even(iValue);
    cout<<"number of even digits are:"<<iRet<<endl;
    return 0;
}