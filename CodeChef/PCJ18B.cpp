
// Link to CodeChef problem: https://www.codechef.com/problems/PCJ18B
// Runtime: 0.00s
// Memory: 5.3M


#include <iostream>
using namespace std;

int solve(int z){
    int ans = 0;
    for(int i=0; i<z; i++){
        if(i%2==0){
            ans+=(z-i)*(z-i);
        } else{
            continue;
        }
    }
    return ans;
}

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    cout<<solve(n)<<endl;
	}
	return 0;
}
