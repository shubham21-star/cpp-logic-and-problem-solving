#include <iostream>
using namespace std;

void calculateBill(){
    int unit;
    float amount=0, total;
    string customerName,meterID;

    cout<< "\n============================================\n";
    cout<< "           ELECTRICITY BILL SYSTEM           \n";
    cout<< "============================================\n";

    cout<< "Enter customer name: ";
    cin.ignore(); 
    getline(cin, customerName);

    cout<< "Enter meter ID: ";
    getline(cin, meterID);

    cout<< "Enter the number of units consumed: ";
    cin>> unit;
    
    cout<< "\n--------------------------------------------\n\n";

    // Bill calculation
    if (unit > 500) {
        amount = unit*2;
    }
    else if (unit > 400) {
        amount = unit*4;
    }
    else if (unit > 300) {
        amount = unit*6;
    }
    else if (unit > 200) {
        amount = unit*8;
    }
    else if (unit > 100) {
        amount = unit*10;
    }
    else {
        amount = unit*1;
    }

    // fixed meter charge
    total = amount + 100.0;

    // Display Bill Summary
    cout<< "\n--------------------------------------------\n";
    cout<< "            BILL SUMMARY  \n";
    cout<< "--------------------------------------------\n";
    cout<< "Customer Name      : " << customerName<< endl;
    cout<< "Meter ID           : " << meterID<< endl;
    cout<< "Units Consumed     : " << unit<< " units\n";
    cout<< "Energy Charges     : RS." << amount<< endl;
    cout<< "Meter Charge       : RS.100.00\n";
    cout<< "--------------------------------------------\n";
    cout<< "Total Amount Payable: RS." << total<< endl;
    cout<< "--------------------------------------------\n";
    cout<< "         Thank you! Save Electricity \n";
    cout<< "============================================\n";
}

int main(){
    calculateBill();
    return 0;
}