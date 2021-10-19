//accept a number from user & display its in reverse order

#include<iostream>
using namespace std;

class Display
{
   public:
   int iNo,iRev,iDigit;
   Display()
   {
       this->iNo=0;
       this->iDigit=0;
       this->iRev=0;
   }
   int ReverseNumber(int iNo)
   {
       while(iNo>0)
       {
           iDigit=iNo%10;
           iRev=(iRev*10)+iDigit;
           iNo=iNo/10;
       }
       return iRev;
   }
};

int main()
{
    int iValue=0,iRet=0;
    cout<<"Enter number\n";
    cin>>iValue;
    Display dobj;
    iRet=dobj.ReverseNumber(iValue);
    cout<<"Reverse number is:"<<iRet<<endl;
    return 0;
}
