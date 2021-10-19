//Accept a number from user & display factors of it.

#include<iostream>
using namespace std;

class Demo
{
    public:
    int iNo,iCnt;
    Demo()
    {
        this->iCnt=0;
        this->iNo=0;
    }
    void Factors(int iNo)
    {
        if(iNo<0)
        {
          iNo=-iNo;
        }
        for(iCnt=iNo/2;iCnt>=1;iCnt--)
            {
              if((iNo%iCnt)==0)
              {
                  cout<<iCnt<<endl;
            }
        }
    }
    
};
int main()
{
    int iValue=0;
    cout<<"enter number\n";
    cin>>iValue;
    Demo dobj;
    dobj.Factors(iValue);
    return 0;
}