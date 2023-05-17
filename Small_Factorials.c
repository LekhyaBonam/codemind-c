#include <stdio.h>
#include <stdlib.h>
#include <assert.h>


int main(){
	int i,j,*x,n,val;
	scanf("%d",&n); assert(n!=0);
	x=(int*)malloc(n*sizeof(int)); assert(x!=NULL);

	for(i=0;i<n;i++) scanf("%d",&x[i]); 

		for(i=0;i<n;i++){
			val=1;
			for(j=x[i];j!=0;j--){
				val*=j;
		}
		printf("%d
",val);
			}

	return 0;
}