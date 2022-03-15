//
//  337A.cpp
//  CodeforcesProblems
//
//  Created by Abdullah Al Mahfuz on 15/3/22.
//

#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
#include <map>


using namespace std;

void merge(int arr[],int l,int mid,int r)
{
    int temp[r];
    int i=l;
    int k=l;
    int j=mid+1;
   // int temp[r];
    
    while (i<=mid && j<=r) {
        if (arr[i]<arr[j]) {
            temp[k]=arr[i];
            i++;k++;
        }
        else{
            temp[k]=arr[j];
            j++;k++;
        }
    }
    while (i<=mid) {
        temp[k]=arr[i];
        i++;k++;
    }
    while (j<=r) {
        temp[k]=arr[j];
        j++;k++;
    }
    
    for (int i=l; i<=r; i++) {
        arr[i]=temp[i];
        
    }
    
}


void mergeSort(int arr[],int l, int r)
{
    int mid;
    if(l<r)
    {
        mid=(l+r)/2;
        mergeSort(arr, l, mid);
        mergeSort(arr, mid+1, r);

        merge(arr, l, mid, r);
        
    }
   
}

int main()
{
    int n,m;
    cin>>m;
    int len=m;
    int t=m;
    int f[m],i=0;
    
    while(t--)
    {
        cin>>n;
        f[i]=n;
        i++;
    }
    
    mergeSort(f, 0, m-1);
   
    for (int i=0; i<m; i++) {
     
        
        cout<<f[i]<<" ";
    }
    cout<<endl;

    return 0;
}
