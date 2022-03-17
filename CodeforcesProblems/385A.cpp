//
//  385A.cpp
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
    int t,ret;
    
    vector<int>vect;
    
    cin>>t>>ret;
    int x=t;
    
    while(t--)
    {
        int b;
        cin>>b;
        
        vect.push_back(b);
        
    }
    int max=0,store=0,store2=0 ;
    
    for(int i=0; i<vect.size()-1; i++)
    {
        if (vect[i]-vect[i+1]>max)
        {
            max=vect[i]-vect[i+1];
            store=vect[i];
            store2=vect[i+1];
            
        }
    }
    if (store-store2-ret>0) {
        cout<<store-store2-ret;
    }
    else cout<<"0";
    
    return 0;
}

