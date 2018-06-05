#include <stdio.h>


int main(){
	int i,j,a,b,n,m, e[101][101], book[101], cur;
	
	int que[101], head,tail;
	
	scanf("%d %d", &n, &m);
	
	for (i=1;i<=n;i++)
	{
		for(j=1;j<=m;j++){
			if(i==j) e[i][j] ==0;
			else
			e[i][j] = 99999;
			
		}
	}
	
	for (i=1;i<=m;i++)
	{
		scanf("%d %d", &a, &b);
		e[a][b] =1;
		e[b][a] =1;
	}
	head =1;
	tail =1;
	que[head]=1;
	tail++;
	book[head] = 1;
	while(head<tail){
		cur = que[head];
		for(i=1;i<=n;i++){
			if(e[cur][i] ==1 && book[i] ==0){
				
				book[i] = 1;
				que[tail] = i;
				tail++; 
			}
			if(tail>n){
				break;
			} 
		}
		head++;
	}
	for(i=1;i<head;i++){
		printf("%d", que[i]);
	}
	getchar();getchar();
	return 0;

}

