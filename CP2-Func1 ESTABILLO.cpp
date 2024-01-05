#include <iostream>

using namespace std;

int mainmenu();
int inputdata(int, int);
int subtract(int, int);
int divide(int, int);
int addition(int, int);
int multiply(int, int);

int main() {
    int num1 = 0, num2 = 0, total, symbols;
    char choicecontinue = 'Y';

    do {

        do {
        	symbols = mainmenu();
            switch (symbols) {
                case 1:
                    total = addition( inputdata(2, num2), inputdata(1, num1));
					cout << "Final answer is: " << total << endl; 
                    break;

                case 2:
                    total = subtract( inputdata(2, num2), inputdata(1, num1));
					cout << "Final answer is: " << total << endl; 
                    break;

                case 3:
                    total = multiply( inputdata(2, num2), inputdata(1, num1));
					cout << "Final answer is: " << total << endl; 
                    break;

                case 4:
					total = divide( inputdata(2, num2), inputdata(1, num1));
					cout << "Final answer is: " << total << endl;
                    break;

                default:
                	system("cls");
                    cout << "Wrong Input \n"<<endl;
                    break;
            }
        } while (symbols < 1 && symbols > 4);

        cout << "Try again Y/N?? ";
        cin >> choicecontinue;

    } while (choicecontinue == 'Y' && 'y');

    return 0;
}

int mainmenu() {
    int symbols;
    system("cls");
    cout << "What symbol will you choose \n"
         << "1 = + \n"
         << "2 = - \n"
         << "3 = * \n"
         << "4 = / \n"
         << "Answer: ";
    cin >> symbols;
    return symbols;
}

int inputdata(int digits, int num) {
    cout << "Enter number " << digits << " :";
    cin >> num;
    return num;
}

int addition(int num1, int num2) {
    return num1 + num2;
}

int subtract(int num1, int num2) {
    return num1 - num2;
}

int divide(int num1, int num2) {
    return num1 / num2;
}

int multiply(int num1, int num2) {
    return num1 * num2;
}