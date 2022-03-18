//
//  276A.cpp
//  CodeforcesProblems
//
//  Created by Abdullah Al Mahfuz on 17/3/22.
//

#include <iostream>
#include <string>
#include <map>
#include <sstream>
#include <vector>

using namespace std;

int main()
{
    long long int n,k,store,tmp=-1000000001;
    cin>>n>>k;
    
    long long int t=n;
    
    while(t--)
    {
        long long int f,b;
        
        cin>>f>>b;
        
        if(b>k)
        {
            store=f-(b-k);
            
            if (tmp<store) {
                tmp=store;
            }
        }else
        {
            store=f;
            if (tmp<store) {
                tmp=store;
            }
        }
    }
    
    cout<<tmp;
    return 0;
}
