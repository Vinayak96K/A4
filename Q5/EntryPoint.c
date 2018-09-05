#include"MyHeader.h"

int main(int argc, char const *argv[])
{
    int iValue=0;
    int iRet;
    printf("Enter a positive integer number:");
    scanf("%d",&iValue);

    iRet=iFactAndNonFactDiff(iValue);

    if(iRet!=ERR)
    {
        printf("Difference between summation of factors and non-factors of %d:%d\n",iValue,iRet);
    }
    else
    {
        printf("ERROR: Incorrect input.\n");
    }

    return 0;
}
