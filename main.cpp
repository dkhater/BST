// Sample driver
// EE 312 Fall 2018
//
// The BST should work for any data type or object.
// Other user created objects must have the << operator overloaded for
// output.
//

#include <iostream>
#include <fstream>
#include "BST312.h"


using namespace std;

template <typename T>
void print(vector<T> vec){
    for(int i = 0 ; i < vec.size() ; i++){
        cout << vec[i] << endl;;
    }
}

int main() {

    ifstream inFile;
    inFile.open("test.txt");

    BST_312<string> bst;

    string s;
    inFile >> s;
    while (inFile) {;
        cout << "inserting ... " << s << endl;
        bst.insertItem(s);
        inFile >> s;
    }

    cout << "postorder traversal is " << endl;
    print(bst.postOrderTraversal());
    cout << endl;

    cout << "preorder traversal is " << endl;
    print(bst.preOrderTraversal());
    cout << endl;

    cout << "inorder traversal is " << endl;
    print(bst.inOrderTraversal());
    cout << endl;

    cout << "Remove items " << endl;
    cout << "number of nodes in tree before delete is " << bst.countNodes() << endl;
    s = "f";
    bst.deleteItem(s);
    print(bst.postOrderTraversal());
    cout << endl;
    cout << "number of nodes in tree after delete is " << bst.countNodes() << endl;
    cout << endl;

    cout <<"Add items" << endl;
    cout << "number of nodes in tree before addition is " << bst.countNodes() << endl;
    s = "tree";
    bst.insertItem(s);
    print(bst.preOrderTraversal());
    cout << endl;
    cout << "number of nodes in tree after addition is " << bst.countNodes() << endl;
    cout << endl;

    cout <<"Check if the word "<< s << " is in the BST" << endl;
    s = "tree";
    print(bst.preOrderTraversal());
    bool x = bst.isItemInTree(s);
    if (x == false){
        cout << s << " is false" << endl;
    }
    else {
        cout << s << " is true" << endl;
    }
    cout << endl;

    s = "happy";
    cout <<"Check if the word "<< s << " is in the BST" << endl;
    print(bst.preOrderTraversal());
    x = bst.isItemInTree(s);
    if (x==false){
        cout << s << " is false" << endl;
    }
    else {
        cout << s << " is true" << endl;
    }
    cout << endl;

    cout << "Remove items " << endl;
    cout << "number of nodes in tree before delete is " << bst.countNodes() << endl;
    s = "tree";
    bst.deleteItem(s);
    print(bst.preOrderTraversal());
    cout << endl;
    cout << "number of nodes in tree after delete is " << bst.countNodes() << endl;
    cout << endl;

    cout <<"Check if the word "<< s << " is in the BST" << endl;
    s = "tree";
    print(bst.preOrderTraversal());
    x = bst.isItemInTree(s);
    if (x == false){
        cout << s << " is false" << endl;
    }
    else {
        cout << s << " is true" << endl;
    }
    cout << endl;

    cout <<"make tree empty" << endl;
    bst.makeEmpty();
    cout << "number of nodes in tree after delete is " << bst.countNodes() << endl;
    cout << endl;

    cout <<"Add items" << endl;
    cout << "number of nodes in tree before addition is " << bst.countNodes() << endl;
    s = "tree";
    bst.insertItem(s);
    print(bst.preOrderTraversal());
    cout << endl;
    cout << "number of nodes in tree after addition is " << bst.countNodes() << endl;
    cout << endl;

}

