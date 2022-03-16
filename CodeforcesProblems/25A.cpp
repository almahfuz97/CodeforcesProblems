//
//  25A.cpp
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
    int n,even=0,odd=0,i=1;
    map<int,int> random;
    cin>>n;
    while (n--) {
        int t;
        cin>>t;
        
        if (t%2==0) {
            even++;
            random.insert(pair<int, int>(1,i));
            
            
        }
        else
        {
            odd++;
            random.insert(pair<int, int>(2,i));
        
        }
        i++;
    }
    
    if (odd>even) {
        cout<<random.begin()->second;
    }
    else
    {
        auto a=random.end();
        a--;
        cout<<a->second;
    }
    return 0;
}
