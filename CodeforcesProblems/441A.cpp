//
//  441A.cpp
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
    int n,v,count=0,i=0;
    map<int , int> sellerNo;
    
    cin>>n>>v;
    int arr[n+1];

    while(n--)
    {
        int t;
        cin>>t;
        string s;
        getline(cin>>ws,s);
        i++;
        istringstream str(s);
        int elem;
        while (str>> elem) {
            int k=elem;
            sellerNo.insert(pair<int, int>(k,0));
        }
        if (sellerNo.begin()->first<v) {
          
            
            arr[count]=i;

            count++;
            
        }
        
        sellerNo.clear();
        
    }
    
    cout<<count<<endl;
    for(int j=0; j<count; j++)
    {
        cout<<arr[j];
        if (j<count-1) {
            cout<<" ";
        }
    }
    
    return 0;
}
