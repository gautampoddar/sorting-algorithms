#include <iostream>

using namespace std;

void merge(int a[],int p,int q,int r){
	int i,j,k;
	int n1 = q - p +1;
	int n2 = r - q;
	
	int la[n1+1],ra[n2+1];
	
	for(i = 0;i<n1;i++){
		la[i]=a[p+i];
	}
	for(j = 0;j <n2;j++){
		ra[j]=a[q+1+j];
	}
	i=0; j = 0;
	la[n1] = 999999;
	ra[n2] = 999999;
	
	for(k = p ;k <=r;k++){
		
		if(la[i] <= ra[j]){
			a[k] = la[i];
			i = i+1;
		}
		else{
			a[k] = ra[j];
			j = j+1;
		}
	}
}
void mergesort(int a[],int p,int r){
	
	if(p<r){
		
		int q = (p+r)/2;
		mergesort(a,p,q);
		mergesort(a,q+1,r);
		merge(a,p,q,r);
	}
}


int main() {
	
	int n,i;
	cout<<"Enter number of elements in the array: ";
	cin>>n;
	int a[n];
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	mergesort(a,0,n-1);
	for(i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	
	return 0;
}
