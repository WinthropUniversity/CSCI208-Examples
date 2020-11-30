#include<iostream>
#include<sstream>
#include<string>
#include<vector>

using namespace std;

// Recall:  n! = 1 * 2 * 3 * ... * (n-1) * n

/**
 * Return the n! using recursion.
 **/
int factorial(int n) {
  if (n == 1) return 1;
  else        return n * factorial(n-1);
}


/**
 * Return the n! without recursion.
 **/
int factorialNR(int n) {
  int factor = 1;

  while (n > 1) {
    factor *= n;
    n--;
   }

  return factor;
}


/**
 * Return the nth Fibonacci number in the sequence,
 * using recursion.
 **/
int fibonacci(int n) {
  if (n <= 1) return 1;
  else return (fibonacci(n-1) + fibonacci(n-2));
}


/**
 * Return the nth Fibonacci number in the sequence,
 * without using recursion.
 **/
int fibonacciNR(int n) {
  int term1 = 0;
  int term2 = 1;

  for (int idx=0; idx<n; idx++) {
    int tmp = term1 + term2;
    term1 = term2;
    term2 = tmp;
  }

  return term2;
}


/**
 * Take two sorted vectors and merge them to have
 * a single sorted vector.  This is linear in time.
 **/
vector<int> Merge(const vector<int> &list1, const vector<int> &list2) {
  vector<int> mergedlist;
  int idx1 = 0;
  int idx2 = 0;

  while ( (idx1 < list1.size()) || (idx2 <list2.size()) ) {
    // If there are no more numbers is list 1, push list 2
    if (idx1 >= list1.size())
      mergedlist.push_back( list2[idx2++] );

    // If there are no more numbers is list 2, push list 1
    else if (idx2 >= list2.size())
      mergedlist.push_back( list1[idx1++] );

    // Otherwise, if list1's head is smaller, push list 1
    else if (list1[idx1] <= list2[idx2])
      mergedlist.push_back( list1[idx1++] );

    // Otherwise, if list2s head is smaller, push list 2
    else if (list1[idx1] > list2[idx2])
      mergedlist.push_back( list2[idx2++] );

  } // while we're still incrementing at least one idx

  return mergedlist;
}

/**
 * Take a vector of 2 or fewer items, and return a vector in
 * sorted order.
 **/
vector<int> ArrangeTwoItems(const vector<int> &unsortedlist, int begin, int end) {
  vector<int> tmplist;

  // If there's just one item, that's the one
  if (begin == end)
    tmplist.push_back( unsortedlist[0] );

  // Otherwise, if the first item is lowest, keep the order
  else if (unsortedlist[begin+0] <= unsortedlist[begin+1]) {
    tmplist.push_back( unsortedlist[begin+0] );
    tmplist.push_back( unsortedlist[begin+1] );
  }

  // Otherwise, swap the order
  else if (unsortedlist[begin+0] > unsortedlist[begin+1]) {
    tmplist.push_back( unsortedlist[begin+1] );
    tmplist.push_back( unsortedlist[begin+0] );
  }

  return tmplist;
}


vector<int> MergeSort(const vector<int> &unsortedlist, int begin, int end) {
  int n = (end - begin + 1);
  vector<int> sortedlist;

  // If there are at most two items, just order them
  if (n <= 2)
    sortedlist = ArrangeTwoItems(unsortedlist, begin, end);

  // Otherwise, recursively merge sort, then merge the lists
  else
    sortedlist = Merge( MergeSort(unsortedlist, begin, (begin+end)/2),
                        MergeSort(unsortedlist, 1+(begin+end)/2, end) );

  return sortedlist;
}


// Here is an example of traversing a binary tree
//Node *BintreeFind(Node *current, string key) {
//  if (current == NULL)   return NULL;
//
//  else if (current->GetKey() < key)  return BintreeFind(current->GetLeft());
//  else if (current->GetKey() == key) return current;
//  else if (current->GetKey() > key)  return BintreeFind(current->GetRight());
//}



int main() {
  int n;

  cout << endl << " --- Factorial Example --- " << endl;

  cout << "Give me a number: ";
  cin >> n;
  cout << "n! = " << factorial(n) << endl;
  //cout << "n! = " << factorialNR(n) << endl;

  cout << endl << " --- Fibonacci Example --- " << endl;

  cout << "Which number in the Fibonacci seqence do you want? ";
  cin >> n;
  cout << "The " << n << " number in the Fibonacci sequence is " << fibonacci(n) << endl;
  //cout << "The " << n << " number in the Fibonacci sequence is " << fibonacciNR(n) << endl;


  cout << endl << " --- Mergesort Example --- " << endl;

  vector<int> unsorted;
  unsorted.push_back(10);
  unsorted.push_back(8);
  unsorted.push_back(5);
  unsorted.push_back(13);
  unsorted.push_back(9);
  unsorted.push_back(19);
  unsorted.push_back(17);
  unsorted.push_back(12);

  cout << "Unsorted: ";
  for (int x : unsorted)
    cout << "  " << x;
  cout << endl;

  vector<int> sorted = MergeSort(unsorted, 0, unsorted.size()-1);

  cout << "Sorted:  ";
  for (int x : sorted)
    cout << "  " << x;
  cout << endl;

  // Program completed successfully
  return 0;
}
