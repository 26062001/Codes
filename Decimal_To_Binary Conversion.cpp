#include<iostream>
using namespace std;

int Binary(int iNo)
{
    int iDigit=0,iPower=1,iRes=0;
    while(iNo!=0)
    {
        iDigit=iNo%2;
        iRes=iRes+(iDigit*iPower);
        iPower=iPower*10;
        iNo=iNo/2;
    }
    return iRes;
}
int main()
{
    int iValue=0,iRet=0;
    
    cout<<"Enter the Decimal Number"<<endl;
    cin>>iValue;
    
    iRet=Binary(iValue);
    cout<<"Binary Number is:"<<iRet<<endl;
    
    return 0;
}
