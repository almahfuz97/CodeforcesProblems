//
//  469A.cpp
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
    map<int, int> pass;
    
    int level,xPass,yPass;
    cin>>level;
    cin>>xPass;
    
    string x,y;
    getline(cin >> ws,x);
    
    cin>>yPass;
    getline(cin>>ws,y);
        
    for (int i=0; i<x.size(); i++) {
        
        int p=0;
        istringstream a(x);
        
        while(a >> p)
        {
            pass.insert(pair<int, int>(p, 1));

        }
        
        
    }
    for (int i=0; i<y.size(); i++) {
        
        int z=0;
        istringstream b(y);
        while(b >> z)
        {
            pass.insert(pair<int, int>(z, 1));

        }
        
    }
    pass.erase(0);
    
    if(pass.size()==level) cout<<"I become the guy.";
    else cout<<"Oh, my keyboard!";
    return 0  ;
}
