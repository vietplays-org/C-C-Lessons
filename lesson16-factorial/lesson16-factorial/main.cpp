//
//  main.cpp
//  lesson16-factorial
//
//  Created by NGUYEN VAN NGHIA on 3/24/17.
//  Copyright © 2017 vietplays. All rights reserved.
//

#include <iostream>

#include <iostream>
#include <iomanip>
using namespace std;

unsigned long factorial(int n){
    unsigned long T = 1;
    for(int i = 1; i <= n; i++){
        T *= i;
    }
    return T;
}

int main(int argc, const char * argv[]) {
    int n;
    unsigned long T = 1;
    //n >= 0
    cout << "Input n = "; cin >> n;
    T = factorial(n);
    cout << "T = " << T << "\n";
    return 0;
}
