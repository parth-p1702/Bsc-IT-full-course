#include <iostream>

void display( int arr[], int n ){
   for ( int i = 0; i < n; i++ ) {
      cout << arr[i] << ", ";
   }
}
void solve( int arr[], int newArr[], int n ){
   int i;
   for ( i = 0; i < n; i++ ) {
      newArr[ i ] = arr [ i ];
   }
}
int main(){
   int arr[] = {9, 15, 24, 28, 20, 6, 12, 78, 2, 12, 78, 44, 25, 115, 255, 14, 96, 84 };
   int n = sizeof( arr ) / sizeof( arr[0] );
    printf("Given array: ");
   display(arr, n);
   int newArray[n] = {0};
   solve( arr, newArray, n );
   printf( "\nArray After copying: ");
   display(newArray, n);
}
