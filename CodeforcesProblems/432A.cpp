//
//  432A.cpp
//  CodeforcesProblems
//
//  Created by Abdullah Al Mahfuz on 16/3/22.
//

#include <iostream>
#include <string>
#include <map>
#include <sstream>

using namespace std;

int main()
{
    int n,k,count=0;
    cin>>n>>k;
    
    while(n--)
    {
        int t;
        cin>>t;
        
        if(5-t>=k)
        {
            count++;
        }
        
       
    }
    
    cout<<count/3;
    return 0;
}

