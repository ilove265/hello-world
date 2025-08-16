#include <iostream>
using namespace std;
int main(){
	int n; cin>>n;
	int x,k;
	cin>>x>>k;
	int a[n + 1];
	for ( int i = 0; i < n+1; i++){
		if ( i == k-1 ) {
			a[i] = x;
			continue;	
		}
		cin>>a[i];
	}
	for ( int i = 0; i < n+1; i++){
		cout<<a[i]<<" ";
	}
	gg;
	return 0;
}

