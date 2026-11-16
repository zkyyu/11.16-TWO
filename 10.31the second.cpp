# include<stdio.h>
int main(){
	int n;
	int a[100][100];
	scanf("%d",&n);
	for (int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	} 
	for(int i =0;i<n;i++){
		int max=a[i][0];
		int lie =0;
		for(int j=1;j<n;j++){
			if(a[i][j]>max){
				max=a[i][j];
				lie=j;
			}
		}
		int flag=1;
		for (int k=0;k<n;k++){
			if(a[k][lie]<max){
				flag=0;
				break;
			}
		}
		if(flag==1){
			printf("\n");
			printf("%d %d",i,lie);
			return 0;
		}
	}
	printf("No");
	return 0;
}
