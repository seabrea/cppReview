//
//  main.cpp
//  CppReview
//
//  Created by Bob on 2019/1/9.
//  Copyright © 2019年 seabrea. All rights reserved.
//

#include <iostream>
#include "FunctionAndObject.hpp"

using namespace std;

void founctionObjectFuc(int a, int b);

int main(int argc, const char * argv[]) {
    
    founctionObjectFuc(1,2);
    return 0;
}

void founctionObjectFuc(int a, int b) {
    
    if(a > b) {
        cout << "founctionObjectFuc a > b" << endl;
    }
    else {
        cout << "founctionObjectFuc a <= b" << endl;
    }
}
