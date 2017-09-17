#include <iostream>

using namespace std;
int partition(int a[],int ,int );
void quicksort(int a[],int ,int );


int main(){
	
	int n,i;
	cout<<"Enter number of elements in the array: ";
	cin>>n;
	int a[n];
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	quicksort(a,0,n-1);
	
	for(i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	
	
	return 0;
}
int partition(int a[],int p,int r){
	
	int temp = 0;
	int x = a[p];
	int i = p+1;
	for(int j = p+1;j<=r;j++){
		if(a[j]<=x){
			temp = a[i];
			a[i] = a[j];
			a[j] = temp;
			i = i+1;
		}
	}
	temp = a[i-1];
	a[i-1] = a[p];
	a[p]= temp;
	
	return i+1;
}
void quicksort(int a[],int p,int r){
	if(p<r){
		
		int q = partition(a,p,r);
		quicksort(a,p,q-1);
		quicksort(a,q+1,r);
	}
}







