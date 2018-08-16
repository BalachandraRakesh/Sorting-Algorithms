// Counting_Sort Algorithm
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

vector<int> Counting_Sort(vector<int> vect){
    vector<int> counter;
    for(int i = 0; i < vect.size();i++){
        counter.push_back(0);
    }
    for (int i = 0;i < vect.size();i++){
        counter[vect[i]] += 1;
    }
    int a= 0;
    for(int i = 0; i < counter.size(); i++){
        while(0 < counter[i]){
            vect[a] = i;
            a += 1;
            counter[i] -=1 ;
        }
    }
    return vect;
}

    
int main(){
    vector<int> v = {1,2,3,4,5,6,7,8,9,6,6,6,3,3,4,4,4,4,4,2,2,2,2,7,7,8,4,6,6,6,6,6,2,2,3,5,6,7,1,3,4,5,8,9,9,4,5,3,1,4,6,2,1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 7};
    cout <<"Array before sorting" << endl;
    print(v);
    v =Counting_Sort(v);
    cout <<"Array after sorting" << endl;
    print(v);
}
