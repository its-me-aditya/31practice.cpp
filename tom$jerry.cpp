#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        int y;
        cin>>y;
        if(x<y){
            cout<<"YES"<<endl;
            
        }
        else if(x>y){
            cout<<"NO"<<endl;
            
        }
        else if(x==y){
            cout<<"NO"<<endl;
            
        }
    }
	// your code goes here
	return 0;
}
