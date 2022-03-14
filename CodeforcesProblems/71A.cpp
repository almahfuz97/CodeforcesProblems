//
//  71A.cpp
//  CodeforcesProblems
//
//  Created by Abdullah Al Mahfuz on 14/3/22.
//

#include <iostream>
#include <string>

using namespace std;

int main()

{
    int n;
    cin>>n;
    
    string word;
    while (n--)
    {
        cin>>word;
        auto len=word.size();
        
        if (word.size()<=10) {
            cout<<word<<endl;
        }
        else
        {
            cout<<word[0]<<len-2<<word[len-1]<<endl;
        }
    }
    return 0;
}

