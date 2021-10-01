//Using recursion
#include <iostream>
using namespace std;

int BinarySearch(int elem[], int num, int j, int k)
{
 int mid;

 if (j > k){

  cout << "Not found";
  return 0;

 } else {

  mid = (j + k) / 2;

  if(elem[mid] == num){

   cout << "Index of number is " << mid << "\n";
   return 0;

  } else if (num > elem[mid]) {

   BinarySearch (elem, num, mid+1, k);

  } else if (num < elem[mid]) {

   BinarySearch (elem, num, j , mid-1);
  }
 }


}

int main() {

 int elem[500], num, i, n, j, k;

 cout <<"Enter the total size of array\n";
 cin >> n;

 cout <<"Enter the values in sorted format \n";

 for(i=0; i<n; i++) {

  cin >> elem[i];
 }

 cout <<"Enter the value of whose you need the position \n";
 cin >> num;

 j = 0;
 k = n-1;

 BinarySearch (elem, num, j, k);

 return 0;
}
