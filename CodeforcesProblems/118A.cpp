//
//  118A.cpp
//  CodeforcesProblems
//
//  Created by Abdullah Al Mahfuz on 14/3/22.
//

#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

using namespace std;

int main()

{//"A", "O", "Y", "E", "U", "I"
    
    string word,str=".";
    int temp = 0;
    cin>>word;
    transform(word.begin(), word.end(), word.begin(), ::tolower);
    
    for (int i=0; i<word.size(); i++)
    {
        temp=0;
        if (word[i]!='a' && word[i]!='o' && word[i]!='y' && word[i]!='e' && word[i]!='u' && word[i]!='i' )
        {
            str=str+word[i];
            temp=1;
            if(i<word.size()-1) str=str+".";
        }
        
        

    }
    
    if (temp==0) {
        str.erase(str.size()-1,1);
    }
    cout<<str;
    return 0;
}

