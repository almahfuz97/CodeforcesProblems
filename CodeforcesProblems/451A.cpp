//
//  441A.cpp
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
    
    int n,m,tmp,count=0;
    cin>>n>>m;
    
    tmp=n*m;
    while (tmp>0) {
        count++;
        tmp=tmp-(n+m-1);
        n--;
        m--;
        
    }
    if (count%2!=0) {
        cout<<"Akshat";
    }else cout<<"Malvika";
    return 0;
}
