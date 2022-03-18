//
//  255A.cpp
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
    int n,x=1,y=2,z=3;
    int sum=0,sum2=0,sum3=0;
    cin>>n;
    
    for(int i=1 ; i<=n; i++)
    {
        int a;
        cin>>a;
        
        if (i==x) {
            sum+=a;
            x+=3;
        }
        else if (i==y) {
            sum2+=a;
            y+=3;
        }
        else if (i==z) {
            sum3+=a;
            z+=3;
        }
    }
    
    if (sum>sum2 && sum>sum3)  cout<<"chest";
    if (sum2>sum && sum2>sum3) cout<<"biceps";
    if(sum3>sum && sum3>sum2) cout<<"back";
    
    
}
