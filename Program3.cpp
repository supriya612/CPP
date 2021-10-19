#include<iostream>
using namespace std;
class Display
{
    public:
    int iNo1,iCnt;
    Display()
    {
        iNo1=0;
        iCnt=0;
    }
    ~Display()
    {}
    void DisplayNumbers(int iNo1)
    {
        if(iNo1==0)
        {
            return;
         }
         if(iNo1<0)
         {
             iNo1=-iNo1;
         }
         for(iCnt=1;iCnt<=iNo1;iCnt++)
         {
             cout<<iCnt<<"\n";
         }
    }
};
int main()
{
    Display dobj;
    int iValue1=0;
    cout<<"enter number\n";
    cin>>iValue1;
    dobj.DisplayNumbers(iValue1);
    return 0;
}