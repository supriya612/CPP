//Accept a number from user & display its digits sapearately

#include<iostream>
using namespace std;

class Digits
{
    public:
    int iNo;
    Digits()
    {
        this->iNo=0;
    }
    ~Digits(){}
    void DisplayDigits(int iNo)
    {
        int iDigit=0;
        if(iNo<0)
        {
            iNo=-iNo;
        }
        while(iNo>0)
        {
            iDigit=iNo%10;
            cout<<iDigit<<"\n";
            iNo=iNo/10;
        }
    }
};
int main()
{
    Digits dobj;
    int iValue=0;
    cout<<"enter number\n";
    cin>>iValue;
    dobj.DisplayDigits(iValue);
    return 0;

}