//
//  112A.cpp
//  CodeforcesProblems
//
//  Created by Abdullah Al Mahfuz on 15/3/22.
//

#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>


using namespace std;
int main()
{
    string first,second;
    int temp=0;
    
    cin>>first>>second;
    
    transform(first.begin(), first.end(), first.begin(), ::tolower);
    transform(second.begin(), second.end(), second.begin(), ::tolower);
    
    for (int i=0; i<first.size(); i++) {
        if (first[i]==second[i]) {
            temp=0;
            continue;
            
        }
        else if(first[i]>second[i])
        {
            temp=1;
            break;
        }
        else
        {
            temp=-1;
            break;
        }
        
    }
    cout<<temp;
    
    
    return  0;
}
