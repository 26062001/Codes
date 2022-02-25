#include<stdio.h>

int CountEvenDigit(int iNo)
{
	int iDigit=0,Count=0;
	while(iNo!=0)
	{
		iDigit=iNo%10;
		if(iDigit%2==0)
		{
			Count++;
			printf("%d\t",iDigit);
		}
		printf("\n");
		iNo=iNo/10;
	}
	return Count;
}
int main()
{
	int iValue=0,iRet=0;
	printf("Enter Number\n");
	scanf("%d",&iValue);
	printf("The Even Digit is:\n");
	
	iRet=CountEvenDigit(iValue);
	printf("The Number of Even Digit is:%d\n",iRet);
	
	return 0;
}
