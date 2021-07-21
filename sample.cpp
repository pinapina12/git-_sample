#include <iostream>
using namespace std;

int main(){
  // 計算式を入力し，答えを出力するプログラム
  double A, B;
  string op;//文字列
  //「3 * 4」のように，(数字)[スペース]（演算子）[スペース]（数字）の形で入力
  cin >> A >> op >> B;

  if (op == "+") {
    cout << A + B << endl;
  }else if (op == "-"){
    cout << A - B << endl;
  }else if (op == "*"){
    cout << A * B << endl;
  }else if (op == "/"){
    if (B == 0) {
      cout <<"Calculation cannot be defined"<<endl;
    }else{
      cout << double(A / B) << endl;
    }
  }

  return 0;
}