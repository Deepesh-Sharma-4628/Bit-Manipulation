#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t--){
	    int n;
	    scanf("%d",&n);
	    if(n%4==0)
	    printf("%d",n);
	    
	    else if(n%4==1)
	    printf("1");
	    
	    else if(n%4==2)
	    printf("%d",n+1);
	    
	    else if(n%4==3)
	    printf("0");
	     printf("\n");
	}
	return 0;
}
