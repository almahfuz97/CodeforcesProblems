//
//  456A.cpp
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
    int t;
    map<int,int> store,store2;
    cin>>t;
    int x=t,tmp=0;
    
    while (t--) {
        int a,b;
        cin>>a>>b;
        
        store.insert(pair<int, int >(a,b));
        store2.insert(pair<int,  int>(b,a));
    }
    map<int, int>:: iterator itr;
    map<int, int>:: iterator itr2;
    
    itr=store.begin();
    itr2=store2.begin();
    
    while (x--) {
        
        if (itr->first != itr2->second)
        {
            tmp=1;
            break;
        }
        itr++;
        itr2++;
    }
    if (tmp==1)
        cout<<"Happy Alex";
    else cout<<"Poor Alex";
    return 0;
}
