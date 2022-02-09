#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
  // Blank line
  cout << endl;
  
  // Declare a vector of integers, and set the size the 3, initially
  vector<int> intVector(3);

  // The three items in the vector are automatically pre-initialized to 0
  // But we can also assign values to items as though they were inside the array
  cout << "Initially, all three values will be 0; however," << endl;
  cout << "I am setting the 3rd element to 2 ... " << endl;
  intVector[2] = 2;  // Set the 3rd item to 2

  // I could just treat this like any old array:
  for (int idx=0; idx<intVector.size(); ++idx)
    cout << "  intVector[" << idx << "] = " << intVector.at(idx) << endl;
//    cout << "  intVector[" << idx << "] = " << intVector[idx] << endl;
  
  cout << "The vector's size:        " << intVector.size() << endl;
  cout << "The vector's capacity:    " << intVector.capacity() << endl;
  cout << "The vector's max_size:    " << intVector.max_size() << endl;

  // Blank Line
  cout << endl;

  // I can also add things to the end:
  cout << "Pushing 314 and 628 on to the end ..." << endl;
  intVector.push_back(314);
  intVector.push_back(628);

  // Declare an iterator (old style)
  vector<int>::iterator item;

  for (item = intVector.begin(); item != intVector.end(); ++item) {
    // We can treat "item" just like the element ...
    // we dont' have to "look it up" in the array
    // But the iterator is just a pointer, so we have to reference
    cout << "  An item in the vector: " << *item << endl;
  }

  // What happened to the size and capacity now?
  cout << "The vector's size:        " << intVector.size() << endl;
  cout << "The vector's capacity:    " << intVector.capacity() << endl;

  // Blank Line
  cout << endl;

  // Erasing an item will cause the items past it to shift up ...
  // But you have to use the iterator, not the index
  cout << "Deleting the second item ..." << endl;
  intVector.erase(intVector.begin()+1);
  
  // There's a newer way to use iterators that's a little cleaner:
  for (int x: intVector)
    cout << "  An item in the vector: " << x <<endl;

   // Blank Line
  cout << endl;

  // We can clear the whole vector out in one go:
  cout << "Clearing the vector ..." << endl;
  
  intVector.clear();
  cout << "The vector's size:        " << intVector.size() << endl;
  cout << "The vector's capacity:    " << intVector.capacity() << endl;

   // Blank Line
  cout << endl;

  // Everything ran okey-dokey, so tell the OS we're good
  return 0;
}
