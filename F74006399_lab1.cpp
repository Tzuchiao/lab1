#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int n;
    cout<<"please enter the number\n";
    cin>>n;
    cout<<n;
    do
    {
        if(n%2==1)
        {
            n=3*n+1;
        }
        else
        {
            n=n/2;
        }
        cout<<" "<<n;
    
        
    }while(n!=1);

    return 0;
}

