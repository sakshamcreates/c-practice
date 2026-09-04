#include<iostream>
 using namespace std;

    int totalChaiServed(int chai[],int size){
    int total = 0;
 for (int i = 0; i < size; i++)
 {
    total += chai[i];
 }
 return total;
    }
int main(){
    int ChaiServed[7] = {50,60,90,23,56,45,89};

    int total = totalChaiServed(ChaiServed,7);

      cout << "Total chai served: " << total << endl;
      
    return 0;
 }