//
//  122A.cpp
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
    int a,arr[]={4,7,47,74,447,474,477,747,774},count=0;
    cin>>a;
    for (int i=0; i<9; i++) {
        if (a%arr[i]==0) {
            count++;
            break;
        }
    }
    if (count>0) {
        cout<<"YES";
        
    }else cout<<"NO";
    return 0;
}

