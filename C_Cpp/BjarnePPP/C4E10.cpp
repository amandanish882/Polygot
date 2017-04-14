#include <iostream>
#include <vector>
#include <algorithm>
#include <error.h>
#include <math.h>
using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;

void SieveOfEratosthenes(int n);

int main() {
    try{
        SieveOfEratosthenes(100);
    }
    catch(std::runtime_error e){
        cout<<e.what();
    }
    return 0;
}

void SieveOfEratosthenes(int n){
    vector<bool> prime(n+1);
    std::fill (prime.begin(),prime.end(),true);
    for(int p=2;p*p<=n;++p){
        if(prime[p]==true){
            for(int i=p*2;i<=n;i+=p){
                prime[i]= false;
            }
        }
    }
    for(int i=2;i<=n;++i)
        if(prime[i])
            cout<<i<<" ";
}