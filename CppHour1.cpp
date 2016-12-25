#include <iostream>
using namespace std;

int main(int argc,char** argv){   
   
    cout<<"Enter numbers ";
    int InputNums =0;
    cin>>InputNums;

    int* pNumbers = new int[InputNums];
    int* pCopy = pNumbers;

    for(int Index=0;Index<InputNums;++Index){
        cout<<"Enter number ";
        cin>>*(pNumbers+Index);
        //cin>>pNumbers[Index];
    }

    for(int Index=0,b=0;Index<InputNums;++Index)
        cout<<*(pCopy++)<<" ";

    delete[] pNumbers;
    return 0;
}