#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int main(){
	int a;
	scanf("%d" ,&a);
	assert(a>1 && a<=10);
	int data [a][a];
	for (int i = 0; i<a ;i++){
		for(int j=0; j<a;j++){
		scanf("%d", &data[i][j]);
	}
	}
	int boy, girl, max, i, j;
	for(int k=0; k<a; k++){
		boy=0;
		girl=0;
		max=0;
		for(i=0;i<a;i++){
			for(j<0;j<a;j++)
			if(max<data[i][j])
			max = data[i][j];
		}
		for(i=0;i<a;i++){
			for(j=0;j<a;j++){
				if(data[i][j]==max){
					boy=i;
					girl=j;
					printf("boy %d pair with girl %d\n",(boy+1), (girl+1) );
					
				}
			}
		}
		for(i=0;i<a;i++){
			for(j=0;j<a;j++)
			if(i == boy || j== girl)
			data[i][j]=0;
		}
	}
}
