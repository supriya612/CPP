//Accept N numberfs from user & display it on screen

#include<iostream>
using namespace std;
class Array
{
    public:
    int *ptr;
    int iLength;
    Array(int no)
    {
     iLength=no;
     ptr=new int[iLength];
    }
    ~Array()
    {
        delete[]ptr;
    }
void Accept()
{
    int i=0;
    cout<<"Enter the elements\n";
    for(i=0;i<iLength;i++)
    {
        cin>>ptr[i];
    }
}
void Display()
{
    int i=0;
    cout<<"elements from array\n";
    for(i=0;i<iLength;i++)
    {
        cout<<ptr[i]<<"\n";
    }
}
};
int main()
{
    int iSize=0;
    
    cout<<"enter the size of array\n";
    cin>>iSize;
     Array *obj=NULL;
    obj=new Array(iSize);
    obj->Accept();
    obj->Display();
    delete obj;
    return 0;
}