#include <stdio.h>

int main(void) {
	int r,l,i,count,flag;
	char s[501];
	scanf("%d",&r);
	while(r--)
	{
	    flag=0;
	    count=0;
	    scanf("%d",&l);
	    scanf("%s",s);
	    //printf("%s\n",s);
	    for(i=0;i<l;i++)
	    {
	        if(s[i]=='H')
	            count++;
	        else if(s[i]=='T')
	            count--;
	        //printf("count: %d\n",count);
	        
	        //Case: When Tail appears before head or more than one Head appear
	        if(count<0 || count>1)
	        {
	            flag=1;
	            break;
	        }
	    }
	    if(flag)
	        printf("Invalid\n");
	    else
	    {
	        // if case -> Correct Condition and else case -> Corner case when only one Head appears and no Tail
	        if(count==0)
	            printf("Valid\n");
	        else
	            printf("Invalid\n");
	    }
	}
	return 0;
}