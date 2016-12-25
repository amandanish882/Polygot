#include <iostream>
#include <vector>
#include <string>
#include <bitset>

/*using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;*/

using namespace std;

constexpr double getPi() {return 22.0/7;}

int main(int argc,char** argv){
cout << "Enter a number (0 - 255): ";
unsigned short InputNum = 0;
cin >> InputNum;
bitset<8> InputBits (InputNum);
cout << InputNum << " in binary is " << InputBits << endl;
bitset<8> BitwiseNOT = (~InputNum);
cout << "Logical NOT |" << endl;
cout << "~" << InputBits << " = " << BitwiseNOT << endl;
cout << "Logical AND, & with 00001111" << endl;
bitset<8> BitwiseAND = (0x0F & InputNum);// 0x0F is hex for 0001111
cout << "0001111 & " << InputBits << " = " << BitwiseAND << endl;
cout << "Logical OR, | with 00001111" << endl;
bitset<8> BitwiseOR = (0x0F | InputNum);
cout << "00001111 | " << InputBits << " = " << BitwiseOR << endl;
cout << "Logical XOR, ^ with 00001111" << endl;
bitset<8> BitwiseXOR = (0x0F ^ InputNum);
cout << "00001111 ^ " << InputBits << " = " << BitwiseXOR << endl;
return 0;
}