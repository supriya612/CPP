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
        int iCnt=0;
        if(iNo<0)
        {
            iNo=-iNo;
        }
        for(iCnt=1;iCnt<iNo;iCnt++)
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
    printf("enter number\n");
    scanf("%d",&iValue);
    DisplayFactors dobj;
    dobj.Factors(iValue);
    return 0;
}