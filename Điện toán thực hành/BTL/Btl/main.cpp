#include <iostream>
using namespace std;

float BMICalculator(double, double);
void BMICheck (double);

int main() {
    double weight,height;
    cin >> weight >> height;
    BMICheck(BMICalculator(weight,height));
    return 0;
}

float BMICalculator(double x, double y){
    double BMI;
    BMI= x / ( y * y);
    return BMI;
}

void BMICheck (double x){
    if (x < 18.5) cout << "Cơ thể bạn Gầy và nguy cơ phát bệnh Thấp";
    else if (x <= 25) cout << "Cơ thể bạn Bình thường và nguy cơ phát bệnh Trung bình";
    else if (x <= 30) cout << "Cơ thể bạn Hơi béo và nguy cơ phát bệnh Cao";
    else if (x <= 35) cout << "Cơ thể bạn Béo phì cấp độ 1 và nguy cơ phát bệnh Hơi cao";
    else if (x <= 40) cout << "Cơ thể bạn Béo phì cấp độ 2 và nguy cơ phát bệnh Cao";
    else cout << "Cơ thể bạn Béo phì cấp độ 3 và nguy cơ phát bệnh Cực cao";
}