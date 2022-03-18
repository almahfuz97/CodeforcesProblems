//
//  404A.cpp
//  CodeforcesProblems
//
//  Created by Abdullah Al Mahfuz on 18/3/22.
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
    int t,y;
    cin>>t;
    

    char a;
    map<char,int> m,m2;
    
    for(char i='a';i<='z';i++)
    {
        char a='a';
        m2.insert(pair<char, int>(i,0));
                    
    }
    int tmp=0,count=0;
    string s;
    int abd=0;
    int x=t-1;
    for (int i=0; i<t; i++) {
        s="";

        
        for (int j=0; j<t; j++) {
            cin>>a;
            s+=a;
            m.insert(pair<char, int>(a,1));
            m2[a]++;
        }
        
        if (m.size()==2) {
            tmp++;
        }
        
        
        if(i<=t/2)
        {
            if (s[i]==s[x])
            {
                count++;
                x--;
            }
            else
            {
                abd=1;
                //  break;
            }
        }
        else
        {

            if (s[i]==s[x])
            {
                count++;
                x--;
                
            }
            else
            {
                abd=1;
                //  break;
            }
            
        }
        m.clear();
       
    }
    
    map <char,int>::iterator itr,itr2;
    itr=m2.begin();
    itr2=m2.begin();
    
    ++itr2;
    char g=s[0];
    char h=s[1];
    
  
    int ppp= m2.at(g);
    int ttt= m2.at(h);
    
    int val=0;
    if (ppp!=(t+t-1)) {
        val=1;
    }
    if (ttt!=(t*t)-((t+t)-1)) {
        val=1;
    }
    //ttt=(t*t) - ttt;
 
      if (tmp==t && count==t &&  val==0  ) {
        cout<<"YES";
    }else cout<<"NO";
    return 0;
}
