#include"MyHeader.h"

//////////////////////////////////////////////////////////////////////////////////////
//  Function Name: iLargestFactor
//  Description: Accepts a number and returns its largest factor.
//  Input: int[IN]
//  Output: int[OUT]
//  Author: Vinayak Mahendra Patil
/////////////////////////////////////////////////////////////////////////////////////

int iLargestFactor(int iNo)
{
    int iCnt=0;
    int iAns=0;

    if(iNo<0)
    {
        iNo=-iNo;
    }
    if(iNo!=0)
    {
        for(iCnt=1;iCnt<=iNo/2;iCnt++)
        {
            if(iNo%iCnt==0)
            {
                iAns=iCnt;
            }
        }
        return iAns;
    }
    else
    {
        return ERR;
    }

}