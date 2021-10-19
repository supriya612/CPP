#include<iostream>
using namespace std;

class Display
{
    public:
    int iNo;
    Display()
    {
        iNo=0;
    }
    ~Display()
    {
        cout<<"inside destructor\n";
    }
    int DisplaySum(int iNo)
    {
        if(iNo==0)
        {
            return 0;
        }
        if(iNo<0)
        {
            iNo=-iNo;
        }
        
        int iSum=0;
        for(int iCnt=1;iCnt<=iNo;iCnt++)
        {
            iSum=iSum+iCnt;
        }
        return iSum;
    }
};
int main()
{
    Display dobj;
    int iValue1=0,iRet=0;
    cout<<"enter number\n";
    cin>>iValue1;
    iRet=dobj.DisplaySum(iValue1);
    cout<<"Addition of numbers is: "<<iRet<<"\n";
    return 0;
}