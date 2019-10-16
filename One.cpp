#include <iostream>
using namespace std;

int main() {
int num;
char sel;
do{
    cout<<"Enter integer number to be checked: "<<endl;
    cin>>num;
    if(num%2==0){
        cout<<"The number is Even."<<endl;
    }
    else{
        cout<<"The number is Odd."<<endl;
    }
    cout<<"Enter Y or y to check another number: "<<endl;
    cin>>sel;
}while(sel=='Y' || sel=='y');
cout<<"End of Program."<<endl;
    return 0;
}
