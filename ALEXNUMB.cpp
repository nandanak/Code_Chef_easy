#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    long int N,a,c;
    cin>>t;
    while(t--){
        cin>>N;
        c = N;
        while(c--)
            cin>>a;
            cout<<N*(N-1)/2<<endl;
    }        
	// your code goes here
	return 0;
}
