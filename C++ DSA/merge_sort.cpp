#include <iostream>
using namespace std;

void merge(int a[], int l, int m, int r) {
    int i=l, j=m+1, k=0, temp[r-l+1];
    while(i<=m && j<=r) temp[k++] = (a[i]<a[j]) ? a[i++] : a[j++];
    while(i<=m) temp[k++] = a[i++];
    while(j<=r) temp[k++] = a[j++];
    for(i=0;i<k;i++) a[l+i]=temp[i];
}

void mergeSort(int a[], int l, int r) {
    if(l<r) {
        int m=(l+r)/2;
        mergeSort(a,l,m);
        mergeSort(a,m+1,r);
        merge(a,l,m,r);
    }
}

int main() {
    int a[]={5,2,8,4,1}, n=5;
    mergeSort(a,0,n-1);
    for(int x:a) cout<<x<<" ";
}
