//hash table :It is an array to store a data and one of the type of data structures
//Hash function : it is a function that can be used to map dataset of fixed size which falls into the hash function the values returned by hash function are called hash codes,hash values and hash sum
//Hashing :In hashing ,large keys are converted into small ones by using hash function and then values are stored in data structures are called hash function  

#include <iostream>
#include <math.h>
using namespace std;
#define MAX 1000

bool hashTable[MAX+1][2]; //

bool search(int x){
    if(x>=0){
        if(hashTable[x][0] == 1 ){
            return true;
        }else{
            return false;
        }
    }else{
        x = abs(x);
        if(hashTable[x][1] == 1 ){
            return true;
        }else{
            return false;
        }
    }
}

void insert(int a[], int n){
    for(int i=0;i<n;i++ ){
        if(a[i]>=0){
            hashTable[a[i]][0] = 1;
        }
        else{
            hashTable[abs(a[i])][1] = 1;
        }
    }
}

int main(){
    int arr[] = {-1, 9, 2, -5, 3, 1};
    int n = sizeof(arr)/sizeof(arr[0]);
    insert(arr, n);
    
    int find  = -3;
    if(search(find)){
        cout<<"Element is present"<<endl;
    }else{
        cout<<"Element is not present "<<endl;
    }
    
}
