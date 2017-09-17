#include <iostream>

using namespace std;
void insertionsort(int a[],int n){
	int key,i;
	for(int j = 1; j<=n; j++){
		key = a[j];
		i = j-1;
		while( i >= 0 && a[i] > key){
			a[i+1] = a[i];
			i = i-1;
			a[i+1] = key;
		}
		
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
	insertionsort(a,n-1);
	for(i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	
	
	return 0;
}
