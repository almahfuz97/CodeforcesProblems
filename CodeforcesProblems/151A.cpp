//
//  115A.cpp
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
    // n, k, l, c, d, p, nl, np
    
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    
    int totalL=k*l;
    int totalLime=c*d;
    
    int mil=totalL/(nl*n);
    int salt=p/(np*n);
    totalLime=totalLime/n;
    
    int min=mil;
    
    if (salt<=mil && salt<=totalLime) {
        min=salt;
    }
    else if(totalLime<=salt && totalLime<=mil)
    {
        min=totalLime;
    }
    
    cout<<min;
    return 0;
}
