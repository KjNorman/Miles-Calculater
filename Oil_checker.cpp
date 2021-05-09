#include <iostream>
#include <ctime>

using namespace std;


int main() {

    time_t tt;            // declaring argument for time ()
    struct tm * ti;       // declaring variable to store retturn value of local time
    time (&tt);           // applying time
    ti = localtime(&tt);  // using local time
    cout << asctime(ti);  // displaying time

    cout << "Created by Kristofer Norman"       << endl;
    cout << "Hello! Want to know when the next" << endl;
    cout << "time you need your oil changed?"   << endl;


    int miles;
    cout << "Please enter your vehicle milage: ";
    cin  >> miles;

    cout << "Change oil at: " << endl;
    for (int count = 5000 ; miles <= 350000; miles = miles + 5000) {
    cout << miles << " miles" << endl;

    }
    return 0;
}


