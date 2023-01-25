#include <iostream>
using namespace std;

//main func
int main()
{
    //loop until 100
    for(int n = 0; n <= 100; n++){
        if (n%3 == 0 && n%5 == 0) {
            // if the number is divisible by 3 and 5
            cout << "FooBaa" << endl;
        } else if (n%3 == 0) {
            // if the number is divisible by 3
            cout << "Foo" << endl;
        } else if (n%5 == 0) {
            // if the number is divisible by 5
            cout << "Baa" << endl;
        } else {
            cout << n << endl;
        }
    }
    return 0;
}
