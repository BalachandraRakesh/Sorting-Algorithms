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

vector<int> Bubble_Sort(vector<int> vect){
    for (int i = 0; i < vect.size()-1; i++){
		bool opt = false;
        for (int j = 0; j < vect.size()-i-1; j++){
            if(vect[j] > vect[j+1]){
                swap(&vect[j],&vect[j+1]);
                opt = true;
            }
        }
		if(opt = false){
			break;
			
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
    v = Bubble_Sort(v);
    print(v);
}
