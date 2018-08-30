int removeDuplicates(int* nums, int numsSize) {
 int *p=nums,len=1,i=1,j=1; 
  if(numsSize==0)len=0;
  while(j<numsSize&&numsSize>0)
    {
    //    if (*p!=*(p+i)&&*p<*(p+i))
        if(*p!=*(p+i))
        {
        	nums[len++]=*(p+i);
        	printf("nums[len]=%d \n",*(p+i));
        	PRINT_NUMS(nums,numsSize);
        	p=p+i;
        	i=0;
		}	
		i++,j++;
		
    }
    return len;
}
