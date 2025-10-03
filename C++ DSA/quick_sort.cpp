#include <iostream>
using namespace std;

int partition(int a[], int l, int r) {
    int p=a[r], i=l-1;
    for(int j=l;j<r;j++) if(a[j]<p) swap(a[++i],a[j]);
    swap(a[i+1],a[r]);
    return i+1;
}

void quickSort(int a[], int l, int r) {
    if(l<r) {
        int pi=partition(a,l,r);
        quickSort(a,l,pi-1);
        quickSort(a,pi+1,r);
    }
}

int main() {
    int a[]={5,2,8,4,1}, n=5;
    quickSort(a,0,n-1);
    for(int x:a) cout<<x<<" ";
}
