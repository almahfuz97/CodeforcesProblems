//
//  499A.cpp
//  CodeforcesProblems
//
//  Created by Abdullah Al Mahfuz on 18/3/22.
//

#include <iostream>
#include <string>
#include <map>
#include <sstream>
#include <vector>
#include <algorithm>


using namespace std;

int main()
{
    long long n,x,count=0;
    cin>>n>>x;
    vector<long long int>vect;
    long long start,end;
    while(n--)
    {
        cin>>start>>end;
        
            vect.push_back(start);
            vect.push_back(end);
        
    }
    long long int ll=1;
    for (int i=0; i<vect.size()-1; i+=2) {
        
        while(ll+x<=vect[i])
            ll+=x;
        
        count=count+vect[i+1]-ll+1;
        ll=vect[i+1]+1;
        
       
    }
    cout<<count;
    return 0;
}
