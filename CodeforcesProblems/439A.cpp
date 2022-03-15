//
//  439A.cpp
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
    int song,minutes;
    cin>>song;
    cin>>minutes;
    int arr[song];
    
    int sum=0;
    
    for (int i=0; i<song; i++) {
        int a;
        cin>>a;
        sum+=a;
        arr[i]=a;
    }
    
    int restime=(song-1)*10;
    int minuteLeft=minutes-restime;
    
    if (minuteLeft<sum) {
        cout<<"-1";
    }
    else{
        
        minuteLeft=minuteLeft-sum;
        
        cout<<(minuteLeft+restime)/5;
    }
    
    
    
    
}
