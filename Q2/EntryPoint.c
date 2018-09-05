#include"MyHeader.h"

int main(int argc, char const *argv[])
{
    int iValue=0;
    BOOL bRet=TRUE;
 
    printf("Enter a positive integer number:");
    scanf("%d",&iValue);

    bRet=bChkPerfect(iValue);
    if(bRet==TRUE)
    {
        printf("%d is a perfect number.\n",iValue);
    }
    else if(bRet==FALSE)
    {
        printf("%d is not a perfect number.\n",iValue);
    }
    else
    {
        printf("ERROR: Incorrect input.\n");
    }

    return 0;
}
