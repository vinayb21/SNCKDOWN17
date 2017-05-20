#include <stdio.h>
#include <iostream>
using namespace std;

int main() {
	int n,l,i,c;
	scanf("%d",&n);
	while(n--){
	    scanf("%d",&l);
    	int a[l]={0};
	    for(i=0;i<l;i++){
    	    scanf("%d",&a[i]);
    	}
	   	if(l%2==0){
	   	    printf("no\n");
	   	}
	   	else{
    	    if(a[0]==1){
        	    c=0;
        	    for(i=0;i<l/2;i++){
        	        if(i+1==a[i]){
        	            c++;
        	        }
        	    }
        	    for(i=l/2;i<l;i++){
        	        if(l-i==a[i]){
        	            c++;
        	        }
        	    }
        	    if(c==l){
        	        printf("yes\n");
        	    }
        	    else{
        	        printf("no\n");
        	    }
    	    }
    	    else{
    	        printf("no\n");
	   	    }
	   	}
	}
	return 0;
}
