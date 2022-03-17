//
//  462A.cpp
//  CodeforcesProblems
//
//  Created by Abdullah Al Mahfuz on 17/3/22.
//

#include <iostream>
#include <string>
#include <map>
#include <sstream>

using namespace std;

int main()
{
 
    int a;
    string s[100];
    cin>>a;
    int x=a;
    int i=0;
    while(a--)
    {
        
         
        cin>>s[i];
        i++;
    }
    int xC=0;
    int oC=0,tmp=0;
    
    for (int k=0; k<x; k++) {
        
        for (int l=0; l<x; l++) {
            xC=0;
            oC=0;
            
            if ((k>0 && k<x-1 &&l>0 && l<x-1)) {
                
                if (s[k][l+1]=='o' ) {
                    oC++;
                }
                if (s[k][l-1]=='o') {
                    oC++;
                }
                
                if (s[k-1][l]=='o') {
                    oC++;
                }
                if (s[k+1][l]=='o') {
                    oC++;
                }
                
                if (oC%2!=0) {
                    tmp=1;
                    break;
                }
                
            }
            
            else if((k==0 && l==0) || (k==0 && l==x-1) || (k==x-1 && l==0)|| (k==x-1 && l==x-1) )
            {
                if (k==0 && l==0) {
                    if (s[k][l+1]=='x') {
                        xC++;
                    }else oC++;
                    
                    if (s[k+1][l]=='x') {
                        xC++;
                    }else oC++;
                    

                }
                else if(k==0 && l==x-1)
                {
                    if (s[k][l-1]=='x') {
                        xC++;
                    }else oC++;
                    
                    if (s[k+1][l]=='x') {
                        xC++;
                    }else oC++;
                    
                }
                else if(k==x-1 && l==0)
                {
                    if (s[k-1][l]=='x') {
                        xC++;
                    }else oC++;
                    
                    if (s[k][l+1]=='x') {
                        xC++;
                    }else oC++;
                }
                else if(k==x-1 && l==k-1)
                {
                    if (s[k-1][l]=='x') {
                        xC++;
                    }else oC++;
                    
                    if (s[k][l-1]=='x') {
                        xC++;
                    }else oC++;
                }
                
                if (oC%2!=0)
                {
                    tmp=1;
                    break;
                    
                }
                            
            }
            
            else{
                
                if (k==0) {
                    if (s[k][l+1]=='x') {
                        xC++;
                    }else oC++;
                    
                    if (s[k][l-1]=='x') {
                        xC++;
                    }else oC++;
                    
                    if (s[k+1][l]=='x') {
                        xC++;
                    }else oC++;
                  
                }
                
                else if(l==0)
                {
                    if (s[k-1][l]=='x') {
                        xC++;
                    }else oC++;
                    
                    if (s[k+1][l]=='x') {
                        xC++;
                    }else oC++;
                    
                    if (s[k][l+1]=='x') {
                        xC++;
                    }else oC++;
                    
                    
                }
                else if(k==x-1)
                {
                    if (s[k][l+1]=='x') {
                        xC++;
                    }else oC++;
                    
                    if (s[k][l-1]=='x') {
                        xC++;
                    }else oC++;
                    
                    if (s[k-1][l]=='x') {
                        xC++;
                    }else oC++;
                }
                else if(l==0)
                {
                    if (s[k-1][l]=='x') {
                        xC++;
                    }else oC++;
                    
                    if (s[k+1][l]=='x') {
                        xC++;
                    }else oC++;
                    
                    if (s[k][l-1]=='x') {
                        xC++;
                    }else oC++;
                }
                
                
                if (oC%2!=0)
                {
                    tmp=1;
                    break;
                }
             
                
            }
            
        }
        if (tmp==1) {
            break;
        }
    }
    
    if (tmp==1) {
        cout<<"NO";
        
    }
    else cout<<"YES";
    
    return 0;
}
