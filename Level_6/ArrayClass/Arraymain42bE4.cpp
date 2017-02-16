//
// Created by desktop on 2/15/17.
//

#include "Stack.cpp"
#include "Point.hpp"

using namespace TK::CAD;

int main(int argc, char** argv){
    Stack<Point> stack(2);
    try{
        stack.Pop();
    }
    catch(ArrayException& err){
        std::cout<<err.GetMessage();
    }

    try {
        stack.Push(Point(4));
        stack.Push(Point(6));
        //std::cout<<stack.Pop();
    }
    catch(ArrayException& err){
        std::cout<<err.GetMessage();
    }

    try {
        stack.Push(Point(12));
    }
    catch (ArrayException& err){
        std::cout<<err.GetMessage();
    }

    return 0;
}