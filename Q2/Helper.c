#include"MyHeader.h"

//////////////////////////////////////////////////////////////////////////////////////
//  Function Name: bChkPerfect
//  Description: Returns true if nubmer is a perfect number otherwise it returns false.
//  Input: int[IN]
//  Output: BOOl[OUT]
//  Author: Vinayak Mahendra Patil
/////////////////////////////////////////////////////////////////////////////////////

BOOL bChkPerfect(int iNo)
{
    int iCnt=0;
    int iAns=0;
    if(iNo<=0)
    {
        return ERR;
    }

    for(iCnt=1;iCnt<=iNo/2;iCnt++)
    {
        if(iNo%iCnt==0)
        {
            iAns=iAns+iCnt;
        }
    }

    if(iNo==iAns)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }

}