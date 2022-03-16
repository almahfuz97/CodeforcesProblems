//
//  510A.cpp
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
    int n,m,count=0;
    cin>>n>>m;
    
    for(int i=1; i<=n; i++)
    {
        
        if(i%2!=0)
        {
            for (int j=1; j<=m; j++) {
                cout<<"#";

            }
            cout<<endl;
            count++;
        }
        else
        {
            if (count%2!=0) {
                for(int j=1;j<=m; j++)
                {
                    if(j<m) cout<<".";
                    else  cout<<"#";
                }
                cout<<endl;
              
               
            }
            else{
                
                for(int j=1;j<=m; j++)
                {
                    if(j==1) cout<<"#";
                    else  cout<<".";
                }
                cout<<endl;
                
            }
        }
        
    }
    return 0;
}

