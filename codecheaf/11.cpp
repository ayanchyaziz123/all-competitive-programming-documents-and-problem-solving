#include <stdio.h>

#define min(x,y) ((x<y)? x:y)

int main(void) {
	int t, n, n1;
	scanf("%d", &t);
	
	while (t--) {
	    scanf("%d", &n);
	    n1 = n;
	    int f[n], sum = 0;
	    
	    for (int i = 0; i < n; i++) {
	        scanf("%d", &f[i]);
	    }
	    int fuel = 0;
	    for (int i = 0; i < n; i++) {
	        if (f[i] == 0 && fuel == 0) break;
	        
	        sum+=f[i];
	        fuel+=f[i];
	        fuel++;
	        
	        n = min(fuel,n1);
	        if(fuel>0) fuel--;
	    }
	    
	    printf("%d\n", sum);
	    
	}
	return 0;
}