#include <stdio.h>	

int n;
int search(int angka, int daftarAngka[]){
	if(angka<daftarAngka[0] || angka>daftarAngka[n-1]){
		return 0;
	}
	int left = 0;
	int right = n-1;
	while(left<=right){
		int mid=(left+right)/2;
		if(angka>daftarAngka[mid]){
			left=mid+1;
		}
		else if(angka<daftarAngka[mid]){
			right=mid-1;
		}
		else if(angka==daftarAngka[mid]){
			return mid;
		}
		else if(left==right){
			return 0;
		}
	}
	return 0;
}

int main(){
	int q;
		scanf("%d", &n);
		int a[n],b;
		int jawaban=0;
		for(int i=0;i<n;i++){
			scanf("%d", &a[i]);
		}
		scanf("%d", &b);
		
		for(int i=1;i<n;i++){
			for(int j=i;j>0 && a[j]<a[j-1];j--){
				int temp=a[j];
				a[j]=a[j-1];
				a[j-1]=temp;
			}
		}
			
			
	for(int i=0;i<n;i++){
		printf("%d ", a[i]);
	}
	printf("\n");	
	printf("%d\n", search(b,a));
	return 0;
}
