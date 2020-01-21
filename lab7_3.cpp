//status = "ONE-NIGHT-STAND";
#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main(){
    string status;
    int age;
    cout << "Enter Age : ";
    cin >> age;

    if(age<=20){
        
        int hight;
        cout << "Enter Hight : ";
        cin >> hight;
        
        if(hight <=160 ){
            status = "UNFRIEND";
        }else{
            if(hight < 175){
                status = "FRIEND";
            }else{
                int money1;
                cout << "Enter Property : ";
                cin >> money1;
                
                if(money1 >69*pow(10,6)){
                    status = "MARRIED";
                }else{
                    status = "ONE-NIGHT-STAND";
                }
            }
        }
    }else{
        if(age <30){
            int money2;
            cout << "Enter Property : ";
            cin >> money2;

            if(money2 > 10000000){
                status = "BEST FIREND";
            }else{
                status = "UNFRIEND";
            }
        }else{
            status = "UNFRIEND";
        }
    }

    cout << status ;
    return 0;
}