// Example program
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

vector<int> Selection_Sort(vector<int> vect){
    for (int i = 0; i < vect.size(); i++){
        int min_index = i;
        for (int j = i+1; j < vect.size(); j++){
            if(vect[min_index] > vect[j]){
                swap(&vect[min_index],&vect[j]);
            }
        }
    }
                
    return vect;
}


int main()
{
    vector<int> v = {10,9,8,7,6,5,4,3,2,1};
    cout <<"Array before sorting" << endl;
    print(v);
    cout << "Array after sorting" << endl;
    v = Selection_Sort(v);
    print(v);
}
