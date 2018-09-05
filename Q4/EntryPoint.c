#include"MyHeader.h"

int main(int argc, char const *argv[])
{
    int iValue,iRet;
    printf("Enter a positive integer number:");
    scanf("%d",&iValue);

    iRet=iSumFactor(iValue);
    if(iRet!=ERR)
    {
        printf("Sum of all factors of %d:%d.\n",iValue,iRet);
    }
    else
    {
        printf("ERROR: Incorrect input.\n");
    }

    return 0;
}
