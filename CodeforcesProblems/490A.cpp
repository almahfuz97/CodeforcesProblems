//
//  490A.cpp
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
    int t,a=0,b=0,c=0,sp,ai=0,bi=0,ci=0;
    cin>>t;
    int arr1[t],arr2[t],arr3[t];
    
    for (int i=0; i<t; i++) {
        cin>>sp;
        
        if (sp==1) {
            a++;
            arr1[ai]=i+1;
            ai++;
        }
        else if(sp==2)
        {
            b++;
            arr2[bi]=i+1;
            bi++;
        }
        else if(sp==3)
        {
            c++;
            arr3[ci]=i+1;
            ci++;
        }
    }
    int min=a;
    
    if (b<a && b<=c) {
        min=b;
    }
    else if(c<a && c<=b)
    {
        min=c;
    }
    int z=min;
    
    cout<<min<<endl;
    int i=0;
    while(z>0)
    {
        
        
        cout<<arr1[i]<<" "<<arr2[i]<<" "<<arr3[i]<<endl;
        i++;
        z--;
        
    }
    return 0;
}
