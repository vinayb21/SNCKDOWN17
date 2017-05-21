 #include <stdio.h>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t,n,q,i,j,s,c;
    scanf("%d",&t);
    while(t--){
        scanf("%d%d",&n,&q);
        int k[n];
        for(i=0;i<n;i++)
            scanf("%d",&k[i]);
        sort(k,k+n);
        /*sorted here*/
        for(i=0;i<n;i++)
            k[i]+=i;
            /*unki position add karne se unki neeche wale (lesser lenght ki snakes) ko kha sakta h, wo add ho jayega*/
        while(q--){
            scanf("%d",&s);
            c=0;
            for(i=0;i<n;i++){
                if(k[i]>=s){/*jaise hi kisi element ki size given s se badi ho, break loop immidiately and count those
                that will be of lenght greater than s*/
                    printf("%d\n",(n-i));
                    c=1;
                    break;
                }
            }
            if(c==0)
                printf("0\n");
        }
    }
	return 0;
}

/*yaar tle aa rhi h*/
/*ek baar dono submission check kar le*/
