#include<iostream>

using namespace std;

int add(int, int);
int sub(int, int);
int mul(int, int);
float divi(float, float);
int mod(int, int);


int main(){

    int a, b, ch;
    
    do{

        cout << "Press 1 for + " << endl;
        cout << "Press 2 for - " << endl;
        cout << "Press 3 for * " << endl;
        cout << "Press 4 for / " << endl;
        cout << "Press 5 for % " << endl;
        cout << "Press 0 for Exit " << endl;

        cout << "Enter Your Choice:";
        cin >> ch;


        switch(ch)
        {
            case 0:
            break;

            case 1:
            cout <<"Enter your first Number:";
            cin >> a;

            cout << "Enter your second number:";
            cin >> b;

            cout << "Addition of " << a << "and " << b << "is " << add(a, b) << endl;
            break;

            case 2:
            cout <<"Enter your first Number:";
            cin >> a;

            cout << "Enter your second number:";
            cin >> b;

            cout << "Subtraction  of " << a << "and " << b << "is " << sub(a, b) << endl;
            break;

            case 3:
            cout <<"Enter your first Number:";
            cin >> a;

            cout << "Enter your second number:";
            cin >> b;

            cout << "Multiplication of " << a << "and " << b << "is " << mul(a, b) << endl;
            break;

            case 4:
            cout <<"Enter your first Number:";
            cin >> a;

            cout << "Enter your second number:";
            cin >> b;

            cout << "Division of " << a << "and " << b << "is " << divi(a, b) << endl;
            break;

            case 5:
            cout <<"Enter your first Number:";
            cin >> a;

            cout << "Enter your second number:";
            cin >> b;
            
            cout << "Modulus of " << a << "and " << b << "is " << mod(a, b) << endl;
            break;
        }
    }while(ch != 0);

    return 0;
}

int add(int a, int b){
    return (a + b);
}

int sub(int a, int b){
    return (a - b);
}

int mul(int a, int b){
    return (a * b);
}

float divi(float a, float b){
    float c;
    c = (a/b);
    return c;
}

int mod(int a, int b){
    return (a % b);
}