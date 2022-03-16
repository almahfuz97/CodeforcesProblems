//
//  330A.cpp
//  CodeforcesProblems
//
//  Created by Abdullah Al Mahfuz on 16/3/22.
//

#include <iostream>
#include <string>
#include <map>
#include <sstream>

using namespace std;

int main()
{
    int c,r,count=0,count2=0;
    string row,coloum;
    cin>>c>>r;
    char arr[c];
    map<int,int> rMap;
    map<int, int> cMap;
    
    map<int, int>:: iterator itr;
    map<int, int>:: iterator itr2;
    
    for(int j=0; j<r; j++)
    {
        cMap.insert(pair<int, int>(j,0));

    }
    
    for(int j=0; j<c; j++)
    {
        rMap.insert(pair<int, int>(j,0));

    }
    
    for(int i=0; i<c;i++)
    {
        count=0;
        //count2++;
        for(int j=0; j<r; j++)
        {
            //count2=0;
            cin>>arr[j];
            
            if (arr[j]=='.') {
                count++;
                rMap[i]=count;
                
            }
            if (arr[j]=='.') {
                //count2++;
                
                cMap[j]=cMap[j]+1;
                
                //cout<<"hamaise "<<cMap.at(j)<<" : "<<cMap.at(j)+1<<endl;

                
            }
            
        }
       
        
    }
    int maxCell=0;
    int b=0;
    for ( itr=rMap.begin(); itr!=rMap.end(); ++itr) {
        
        if (itr->second==r) {
            maxCell+=r;
            b++;
        }
    }
    
    for ( itr2=cMap.begin(); itr2!=cMap.end(); ++itr2) {
        
        if (itr2->second==c) {
            maxCell+=c-b;
        }
    }
    
    cout<<maxCell;
   
    return 0;
}
