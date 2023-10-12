#include <StringList.h>


StringList::StringList(int inCapacity) {
    capacity_ = inCapacity;
    size_ = 0;
    list_ = new string[capacity_];
}

// Accessor Methods
string StringList::GetString(int idx) const {
    // What if idx <0 or idx >= capacity_ ?  Or size_?
    return list_[idx];
}

int StringList::GetSize() const {
    return size_;
}

int StringList::GetCapacity() const {
    return capacity_;
}

// General Methods
int StringList::PopulateList() {
    string input = "";
    size_ = 0;

    do {
        cout << "Enter a string ('quit' to end): ";
        cin >> input;
        if (input != "quit") {
            list_[size_] = input;
            size_++;
        }  
    } while ( (input != "quit") && (size_ < capacity_) );

    return size_;
}


void StringList::PrintList() const {
    for (int idx=0; idx<size_-1; idx++) {
        cout << list_[idx] << ", ";
    }
    cout << "and " << list_[size_-1] << endl;
}


int StringList::FindInList(string key) const {
    int position = -1;
    int idx=0;

    while ( (idx < size_) && (position == -1) ) {
      if (list_[idx] == key ) position = idx;
      idx++;
    }

    return position;
}
