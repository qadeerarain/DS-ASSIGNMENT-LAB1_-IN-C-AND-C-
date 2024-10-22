#include <iostream>
using namespace std;

class Average {
public:
    void calculateAverage(float num1, float num2, float num3) {
        float average = (num1 + num2 + num3) / 3;
        cout << "The average of the three numbers is: " << average << endl;
    }
};

int main() {
    float num1, num2, num3;
    Average avg;
    
    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;
    
    avg.calculateAverage(num1, num2, num3);
    return 0;
}
