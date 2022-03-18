//
//  378A.cpp
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
    int a,b;
    
    cin>>a>>b;
    
    int t=6;
    int p=t;
    int first=0,draw=0,second=0;
    
    while (t>0) {
        int x=abs(a-p);
        int y=abs(b-p);
        
        if (x<y) {
            first++;
        }
        else if(x==y)
        {
            draw++;
        }
        else second++;
        t--;
        p--;
    }
    
    cout<<first<<" "<<draw<<" "<<second;
    
    return 0;
}
