/**
*@ Siti Munizaiyanah binti Bahaman
*@ Matric No: 2116492
*@ Lab #6 Section 4
*/

#include <iostream>

using namespace std;

int largestIndex(int list[], int listSize);  

int main()  

{  

   int alpha[10] = { 3, 5, 7, 20, 50, 13, -10, 50, 11, 10 };

   cout << "The index of the last occurrence of the largest element in the array is " << largestIndex(alpha, 10) << endl;  

   return 0; }

int largestIndex(int list[], int listSize) {

 

   int largestIndex = 0;  

   

   for (int counter = 1; counter < listSize; counter++)

       if (list[counter] >= list[largestIndex])

           largestIndex = counter;

   return largestIndex;

}
