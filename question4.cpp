#include<iostream>
using std::cout;
using std::cin;
using std::endl;

#include<string>
using std::string;
using std::getline;

string ConcatRemove(string s, string t, int k){
    //string indices
    int indiceS = 0, indiceT = 0;
    //necessary operations
    int operacoes = 0;


    if (s.length() > 100){
        cout << "first string too big" << endl;
        return "error";
    } else if (t.length() > 100){
        cout << "second string too big" << endl;
        return "error";
        } else if (k > 100){
        cout << "int number too big" << endl;
        return "error";

    } else {

        //scan string indexes to compare both
        while (indiceS < s.length() && indiceT < t.length()) {
            if (s[indiceS] == t[indiceT]){
                indiceS++;
                indiceT++;
            } else {
                // exit the loop if there is a difference in the strings
                break;
            }
        }

        //calculates the minimum number of necessary operations by adding the number of characters in the two strings and decreasing the
        //number of equal characters
        operacoes = s.length() + t.length() - indiceS - indiceT;

        //if the amount estimated by the user is less than the amount found by the algorithm, it returns "no"
        if (k < operacoes){
            return "no";
        }

        //if the amount estimated by the user is greater than the lengths of the strings, it returns "yes", it is possible to perform the operation
        if (k >= s.length() + t.length()){
            return "yes";
        }

        //if it is possible to delete and add characters, "yes". Includes the deletion case of the string itself
        if ((k - operacoes) % 2 == 0){
            return "yes";
        }

        //returns "no" otherwise
        return "no";
    }
}

//main func
int main(){
    string s, t;
    int k;

    cout << "Write two strings and a int number:" << endl;

    //get two strings
    getline(cin, s);
    getline(cin, t);
    cin >> k;

    string resultado = ConcatRemove(s, t, k);
    //print the result
    cout << resultado;
    return 0;

}
