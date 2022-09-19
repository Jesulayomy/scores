#include <iostream>

using namespace std;

int main()
{
    /* Arrays */
    int marks2[2][4];

    cout << "Enter Layo's scores... " << endl;

    cin >> marks2[0][0] >> marks2[0][1] >> marks2[0][2] >> marks2[0][3] ;

    cout << "Now Enter Emmanuel's Scores" << endl ;

    cin >> marks2[1][0] >> marks2[1][1] >> marks2[1][2] >> marks2[1][3] ;

    if (marks2[0][0] > marks2[1][0]) {

        cout << "Emmanuel Scored Lower in math. ";

    } else { cout <<"Layo scored Lower in math. "<< endl; }

    if (marks2[0][1] > marks2[1][1] ) {

        cout << "Emmanuel Scored Lower in English. ";

    } else { cout << "Layo Scored Lower in English" << endl ;}



    return 0;
}
