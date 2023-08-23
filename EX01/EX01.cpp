#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[]){
    //argc is the number of strings given to this program
    //argv is the array of strings
    cout<<"Hello, World!"<<endl;
   int x = 3;
   cout<<"The number x is " <<x<<endl;
   cout<<"Please give me a number for y: ";
   int y;
//    cin>>y;
//    cout<<"y is: "<<y<<endl;

   /*Data types are
   int, float, double, bool, and char*/

   bool blah = true; //can be a number. Note booleans are actually ints (0 is false, everything else is true)
   if (blah){
    //if is same as java
    cout<<"It is true"<<endl;
   }
   else{
    cout<<"It is false"<<endl;
   }

   int a = 0; //sometimes C++ does not treat "int a" as a is 0. Initialize to something

   //You can convert a double to an int without casting
   double b = 5.3;
   int c = b; 
   cout<<"b is " <<b<<"\n"<<"c is "<<c<<endl;

   string name = "Armaan c"; //starts with lowercase s
//    cout<<string name<<endl;
   //Strings don't work as you think they do. Look up functions such as substring

   //C++ have arguments. Don't worry about syntax but know this is how to use it.
   cout<<"You gave "<<argc<<" arguments and they are: "<<endl;
   for (int i = 0; i < argc; i++) {
    cout<<argv[i]<<endl;
   }
   //Most of the time you will take command line arguments rather than cin
   //thing above is an array, use vectors instead
   //Here's why
   int daArray[] = {2,4,56,7};
   cout<<"number at position 4 is "<<daArray[4]<<endl;
   //When you make an array, C++ allocates that amout of memory, and no room for size

   //Instead use vectors which are like ArrayLists.

   vector<int> foo; //vector called foo
   foo.push_back(53);  //adds 53 to the vector
   foo.push_back(5);  //adds 53 to the vector. 53,5
   cout<<foo.at(0)<<endl;
   cout<<foo[0]<<endl;
   foo.size();
   foo.pop_back(); //gets rid of the last item
   foo[1] = 28;
   foo.erase(foo.begin()+1); //removes the element at position 1
   cout<<"The Vector currently has: "<<endl;
   for (unsigned int i = 0 ; i < foo.size(); i++){ 
      cout<<foo[i]<<endl;
   }
   
}
