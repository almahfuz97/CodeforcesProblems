//
//  466A.cpp
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
    int n,m,a,b,totalMride=0,x,rideLeft,tmp=0;
    
    cin>>n>>m>>a>>b;
    rideLeft=n;
    float perR=float(b)/float(m);
    
    
    if(perR<a)
    {

        x=n/m;
        
        totalMride=b*x;
        rideLeft=n-(x*m);
    }
    else
    {

        totalMride=n*a;
        tmp=1;
    }
    
    if (rideLeft*a<=b && tmp!=1) {

        totalMride=totalMride+(rideLeft*a);
    }
    else if(tmp!=1)
    {
        totalMride=totalMride+b;
    }
    
    cout<<totalMride;
    return 0;
}
