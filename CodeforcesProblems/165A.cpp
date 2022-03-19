//
//  165A.cpp
//  CodeforcesProblems
//
//  Created by Abdullah Al Mahfuz on 19/3/22.
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
    int t,b1=0,s1=0,b2=0,s2=0,count=0;
    cin>>t;
    vector<int>xvect;
    vector<int>yvect;
    
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        xvect.push_back(a);
        yvect.push_back(b);
    }
    
    for (int i=0; i<xvect.size(); i++) {
        for (int j=0; j<yvect.size(); j++) {
            
            if (i!=j)
            {
                
                if (xvect[j]==xvect[i])
                {
                    if (yvect[j]>yvect[i]) {
                        b1++;
                    }
                    else if(yvect[j]<yvect[i]) s1++;
                }
                else if (yvect[j]==yvect[i])
                {
                    if (xvect[j]>xvect[i]) {
                        b2++;
                    }
                    else if(xvect[j]<xvect[i]) s2++;
                }
                
            }
        }
        
        if (b1>=1 && b2>=1 && s1>=1 && s2>=1) count++;
        
        b1=s1=b2=s2=0;
    }
    cout<<count;
    return 0;
}
