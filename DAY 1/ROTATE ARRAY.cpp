/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* plusOne(int* digits, int digitsSize, int* returnSize){
    int i,*ans,j,c=1;
    for(i=0;i<digitsSize;i++)
    {
        digits[i]=digits[i]+c;
        if(digits[i]>10)
        {
            c=digits[i]/10;
            digits[i]=digits[i]%10;
        }
        else
        {
            c=0;
        }
    }
    i=0;
    if(c==0)
    {
        ans=(int *)malloc(digitsSize*sizeof(int));    
    }
    else
    {
        ans=(int *)malloc((digitsSize+1)*sizeof(int));
        ans[i]=c;
        i++;;
    }
    for(j=0;j<digitsSize;j++,i++)
    {
        ans[i]=digits[i];
    }
    return ans;
}
