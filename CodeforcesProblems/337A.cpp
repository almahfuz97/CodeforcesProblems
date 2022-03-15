//
//  337A.cpp
//  CodeforcesProblems
//
//  Created by Abdullah Al Mahfuz on 15/3/22.
//

#include <iostream>

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
    int n,m,i=0;
    cin>>n>>m;
    int t=m,arr[m];
    
    
    while (t--) {
        int a;
        cin>>a;
        arr[i]=a;
        i++;
    }
    
    mergeSort(arr, 0, m-1);
    
    int temp=10000;
    int k=n-1;
    for (int j=0; j<=m-n; j++) {
            
        if (arr[k]-arr[j]<temp) {
            temp=arr[k]-arr[j];
        }
        k++;

    }
    cout<<temp;
    return 0;
    
}

