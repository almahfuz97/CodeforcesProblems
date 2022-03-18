//
//  483A.cpp
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
    long long int l,r;
    cin>>l>>r;
    
    if(r-l>=2)
    {
        if(l%2==0)
        {
            cout<<l<<" "<<l+1<<" "<<l+2;
        }
        else
        {
            if (r-l<=2) {
                cout<<"-1";
            }
            else cout<<l+1<<" "<<l+2<<" "<<l+3;
        }
        
    }else cout<<"-1";
    return 0;
}
