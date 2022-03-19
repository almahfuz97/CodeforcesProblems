//
//  233A.cpp
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
    int n;
    cin>>n;
 
    vector<int>vect;
    
    if (n%2==0) {
    
    for (int i=1; i<=n; i++) {
        
        vect.push_back(i);
    }
        for (int j=n-1; j>=0; j--) {
            cout<<vect[j];
            
            if (j!=0) {
                cout<<" ";
            }
        }
        
    }
    else cout<<"-1";
    
    
 
    return 0;
}
