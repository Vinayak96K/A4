#include"MyHeader.h"

int main(int argc, char const *argv[])
{
    int iValue;
    BOOL bRet=TRUE;

    printf("Enter a number:");
    scanf("%d",&iValue);

    bRet=bChkPrime(iValue);
    if(bRet==TRUE)
    {
        printf("%d is a prime number.\n",iValue);
    }
    else if(bRet==FALSE)
    {
        printf("%d is not a prime number.\n",iValue);
    }
    else
    {
        printf("ERROR: Incorrect input.\n");
    }

    return 0;
}
