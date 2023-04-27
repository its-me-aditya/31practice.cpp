#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        int vand=(2*x);
        int y;
        cin>>y;
        int shast=(5*y);
         
        if(vand>shast){
            cout<<"Chocolate"<<endl;
        }
        else if(vand==shast){
            cout<<"Either"<<endl;
        }
        else if(vand<shast){
            cout<<"Candy"<<endl;
        }
    }
	// your code goes here
	return 0;
}
