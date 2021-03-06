/* 
 * File:   main.cpp
 * Author: John Mar Rafael
 *
 * Created on March 16, 2016, 9:02 AM
 */

#include <iostream>

using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float payRate,hrsWrkd, payChk;
    float ovrTime=40; //Where overtime begins
    //Input Values
    cout << "Input Pay Rate ($'s/hr) and Hours worked both dd.dd format" << endl;
    cin >> payRate >> hrsWrkd;
    
    //Map the inputs to the outputs
    payChk=(hrsWrkd < 0)?0:
            (hrsWrkd <= ovrTime)?hrsWrkd*payRate:
            (hrsWrkd <= 98)     ?hrsWrkd*payRate+(hrsWrkd-ovrTime)*payRate:0;
    
    //Output the results
    cout <<"Paycheck = $" << payChk << " for " 
            << hrsWrkd << " hours worked @ $" << payRate << "/hr" << endl;
    
    //Exit Stage Right!
    return 0;
}
