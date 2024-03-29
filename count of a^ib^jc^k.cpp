/*
Count subsequences of type a^i b^j c^k 

Given a string s, the task is to count number of subsequences of the form aibjck, where i >= 1, j >=1 and k >= 1.

Note: Two subsequences are considered different if the set of array indexes picked for the 2 subsequences are different.*/
	
#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int a=0,b=0,c=0;
    	string s;
    	cin>>s;
    	int n=s.length();
    	for(int i=0;i<n;i++){
    	    if(s[i]=='a'){
    	        a=1+2*a;
    	    }
    	    else if(s[i]=='b'){
    	        b=a+2*b;
    	    }
    	    else if(s[i]=='c'){
    	        c=b+2*c;
    	    }
    	}
    	cout<<c<<endl;
	}
	return 0;
}
