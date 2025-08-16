#include <bits/stdc++.h>
using namespace std;
string str;
bool check = true;
void sinh(){
	int i = str.size()-1;
	cout<<i<<endl;
	while (i > 0 && str[i] == '1'){
		str[i] = '0';
		i--;
	}
	if ( i < 0) check = false;
	else str[i] =  '1';
}
int main(){
	cin>>str;		
	sinh();
	for ( int i = 0; i < str.size(); i++){
		cout<<str[i];
	}
	sybau
	return 0;
}

