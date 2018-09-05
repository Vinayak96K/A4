#include"MyHeader.h"

int main(int argc, char const *argv[])
{
    int iValue=0;
    int iRet;

    printf("Enter a positive integer number:");
    scanf("%d",&iValue);

    iRet=iLargestFactor(iValue);
    if(iRet!=ERR)
    {
        printf("The largest factor of %d is %d other than %d.\n",iValue,iRet,iValue);
    }
    else
    {
        printf("ERROR: Incorrect input.\n");
    }

    return 0;
}
