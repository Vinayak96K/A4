#include"MyHeader.h"

//////////////////////////////////////////////////////////////////////////////////////
//  Function Name: iSumFactor
//  Description: Accpets a number and returns the sum of its factors.
//  Input: int[IN]
//  Output: int[OUT]
//  Author: Vinayak Mahendra Patil
/////////////////////////////////////////////////////////////////////////////////////

int iSumFactor(int iNo)
{
    int iAns=0, iCnt=0;

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
                iAns=iAns+iCnt;
            }
        }
        return iAns;
    }   
    else
    {
        return ERR;
    }

}