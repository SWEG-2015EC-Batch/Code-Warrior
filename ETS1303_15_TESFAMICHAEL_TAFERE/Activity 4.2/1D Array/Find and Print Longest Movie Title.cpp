/* 
Write a program that asks users for five movie titles. Print the longest title.
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
  string movies[5];
  int titleLength = 0;
  // get the movie titles from the user.
  for (int i = 0; i < 5; i++) {
    cout << "Enter movie title " << i + 1 << ": ";
    getline(cin, movies[i]);
    if (movies[i].length() > titleLength) {
      titleLength = i;
    }
  }
  // print the longest movie title.
  cout << "The longest movie: "<<endl;
  cout<<"===================="<<endl;
  cout << "Title: "<<movies[titleLength] << endl;
  cout << "Length: "<<movies[titleLength].length() << endl;
  cout<<"===================="<<endl;

  return 0;
}
