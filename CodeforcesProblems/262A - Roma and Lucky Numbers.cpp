//
//  262A - Roma and Lucky Numbers.cpp
//  CodeforcesProblems
//
//  Created by Abdullah Al Mahfuz on 20/3/22.
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
 
    long long n,k,len,count2=0;
    string s;
    
    cin>>n>>k;
    while (n--) {
        cin>>s;
        long long count=0;
        len=s.length();
        for (int i=0; i<len; i++) {
            if (s[i]=='4' || s[i]=='7') {
                count++;
            }
        }
        if(count<=k) count2++;
        
    }
    cout<<count2;
    return 0;
}
