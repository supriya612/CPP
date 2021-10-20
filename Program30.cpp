//Accept a number from user & display number line till that number.

#include<iostream>
using namespace std;

class Demo
{
    public:
    int iNo,iCnt;
    Demo()
    {
        iNo=0;
        iCnt=0;
    }
     void NumberLine(int iNo)
     {
         if(iNo<0)
         {
             iNo=-iNo;
         }
         for(iCnt=-iNo;iCnt<=iNo;iCnt++)
         {
             cout<<iCnt<<"\t";
         }
     }
};
int main()
{
    int iValue=0;
    cout<<"enter number\n";
    cin>>iValue;
    Demo dobj;
    dobj.NumberLine(iValue);
    return 0;
}