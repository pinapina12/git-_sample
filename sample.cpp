#include <iostream>
using namespace std;

int main(){
  // Ex-2:計算式を入力し，答えを出力するプログラム
  int A, B;
  string op;//文字列
  //「3 * 4」のように，（整数）[スペース]（演算子）[スペース]（整数）の形で入力
  cin >> A >> op >> B;

  if (op == "+") {
    cout << A + B << endl;
  }else if (op == "-"){
    cout << A - B << endl;
  }else if (op == "*"){
    cout << A * B << endl;
  }else if (op == "/"){
    cout << A / B << endl;
  }

  return 0;
}