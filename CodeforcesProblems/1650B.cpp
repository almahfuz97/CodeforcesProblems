//
//  1650B.cpp
//  CodeforcesProblems
//
//  Created by Abdullah Al Mahfuz on 14/3/22.
//

#include <iostream>
#include <string>
#include <algorithm>
#include <map>
 
using namespace std;
int main() {
   
    long long int n,l,r,a;
    
    cin>>n;
  
    long long int largestValue,temp,stored;
    
    while(n--)
    {
        cin>>l>>r>>a;
        
       // for (long long int i=r; i>=l; i--) {
            temp=(r/a);
            stored=(temp*a)-1;
            if (a>r) {
                cout<<r<<endl;
                
            }
            else if (r%a==a-1) {
                largestValue=(r/a)+(r%a);
                
                cout<<largestValue<<endl;
                
            
            }
            else if(r==l)
            {
                cout<<(r/a)+(r%a)<<endl;
               
            }
            else if(temp*a>l){
                cout<<(stored/a)+(stored%a)<<endl;
                
            }
        else if(temp*a<=l)
        {
            cout<<(r/a)+(r%a)<<endl;
        }
            
        //}
    }
    
    return 0;
}
