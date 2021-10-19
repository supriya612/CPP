
//Accept a number from user & display factors of that number

#include<iostream>
using namespace std;

class DisplayFactors
{
    public:
    int iNo;
    DisplayFactors()
    {
        iNo=0;
    }
    void Factors(int iNo)
    {
        if(iNo<0)
        {
            iNo=-iNo;
        }
        for(int iCnt=1;iCnt<=iNo/2;iCnt++)
        {
            if((iNo%iCnt)==0)
            {
            cout<<iCnt<<"\n";
        }
        }
    }
};
int main()
{
    int iValue=0;
    cout<<"enter number\n";
    cin>>iValue;
    DisplayFactors fobj;
    fobj.Factors(iValue);
}