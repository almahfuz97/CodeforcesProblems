//
//  136A.cpp
//  CodeforcesProblems
//
//  Created by Abdullah Al Mahfuz on 15/3/22.
//

#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
#include <map>


using namespace std;
int main()
{
    int t,n,i=1;
    cin>>t;
    
    map<int, int > num;
    
    
    while(t--)
    {
        cin>>n;
        num.insert(pair<int, int>(n,i));
        i++;
    }
    map<int, int>::iterator itr;
    
    for (itr=num.begin(); itr!=num.end(); ++itr) {
        
        auto a=num.end();
        a--;
        
        cout<<itr->second;
        if (a!=itr) {
            cout<<" ";
        }
    }
    
    return 0;
}
