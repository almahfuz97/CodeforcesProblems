//
//  496A.cpp
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
    int n;
    cin>>n;
    int b=n;
    
    vector<int> vect,store;
    int p=0;
    while (n--) {
        int a;
        cin>>a;
        vect.push_back(a);
        p++;
    }
    
    int k=1,x=0,z=0;
    if(b>3)
    {
    for (int i=0; i<k; i++) {
        x=0;
        if (k==b-1) break;
        for(int j=1; j<vect.size(); j++)
        {
            if (j!=k)
            {
                if (vect[j]-vect[z]>=x)
                {
                    
                    x= vect[j]-vect[z];
                }
                z=j;
            }

        }
        store.push_back(x);

        z=0;
        k++;
    }
        sort(store.begin(), store.end());
        
        cout<<store[0];
    }
    else cout<<vect[2]-vect[0];
    
 
    return 0;
}
    
