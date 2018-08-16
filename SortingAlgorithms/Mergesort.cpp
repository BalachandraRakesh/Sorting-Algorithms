// Merge_Sort Algorithm
#include <iostream>
#include <string>
#include <vector>
using namespace std;

void swap(int *x,int *y){
    int temp =*x;
    *x = *y;
    *y = temp;
}

void print(vector<int> vect)
{
    int i;
    for (i=0; i < vect.size(); i++)
        cout << vect[i] << " " ;
    cout << endl;
}

vector<int> Merge_Sort(vector<int> vect){
    if(vect.size() > 1){
        int mid = vect.size()/2;
        vector<int> lefthalf,righthalf;
        for(int i = 0; i < mid; i++){
            lefthalf.push_back(vect[i]);
        }
        for(int i = mid; i < vect.size(); i++){
            righthalf.push_back(vect[i]);
        }
        lefthalf = Merge_Sort(lefthalf);
        righthalf = Merge_Sort(righthalf);
        int i = 0;int j = 0;int k =0;
        while(i < lefthalf.size() && j < righthalf.size()){
            if(lefthalf[i] < righthalf[j]){
                vect[k] = lefthalf[i];
                i += 1;
            }
            else {
                    vect[k] = righthalf[j];
                    j += 1;
                    
            }
            k += 1;
        }
        while(i < lefthalf.size()){
            vect[k] = lefthalf[i];
            i += 1;
            k += 1;
        }
        while(j < righthalf.size()){
            vect[k] = righthalf[j];
            j += 1;
            k += 1;
        }
        
    }
    return vect;
}
int main(){
    vector<int> v = {10,9,8,7,6,5,4,3,2,1,100,45,67,123,53,765,12,89};
    cout <<"Array before sorting" << endl;
    print(v);
    v =Merge_Sort(v);
    cout <<"Array after sorting" << endl;
    print(v);
}
