#include"MyHeader.h"

//////////////////////////////////////////////////////////////////////////////////////
//  Function Name: bChkPrime
//  Description: Returns true if number is a prime number otherwise returns false.
//  Input: int[IN]
//  Output: BOOL[OUT]
//  Author: Vinayak Mahendra Patil
/////////////////////////////////////////////////////////////////////////////////////

BOOL bChkPrime(int iNo)
{
    int iCnt=0;
    if(iNo<=0)
    {
        return ERR;
    }
    if(iNo==1)
    {
        return TRUE;
    }

    if(iNo==2)
    {
        return FALSE;
    }
    for(iCnt=3;iCnt<=iNo/2;iCnt++)
    {
        if(iNo%iCnt==0)
        {
            return FALSE;      
        }
    }

    return TRUE;

}