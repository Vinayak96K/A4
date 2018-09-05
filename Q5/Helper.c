#include"MyHeader.h"

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Function Name: iFactAndNonFactDiff
//  Description: Accepts a number and returns the difference between sum of its factor and sum of its non factor.
//  Input: int[IN]
//  Output: int[OUT]
//  Author: Vinayak Mahendra Patil
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int iFactAndNonFactDiff(int iNo)
{
    int iCnt=0;
    int iFactSum=0,iNonFactSum=0;
    int iDiff;
    
    if(iNo<0)
    {
        iNo=-iNo;
    }
    if(iNo!=0)
    {
        for(iCnt=1;iCnt<=iNo;iCnt++)
        {
            if(iNo%iCnt==0)
            {
                iFactSum=iFactSum+iCnt;
            }
            else
            {
                iNonFactSum=iNonFactSum+iCnt;
            }
        }
        iDiff=iFactSum-iNonFactSum;
        return iDiff;
    }
    else
    {
        return ERR;
    }

}