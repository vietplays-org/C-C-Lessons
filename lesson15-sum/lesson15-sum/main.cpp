//
//  main.cpp
//  lesson15-sum
//
//  Created by NGUYEN VAN NGHIA on 3/24/17.
//  Copyright © 2017 vietplays. All rights reserved.
//

#include <iostream>
#include <iomanip>
using namespace std;

float sum8(int n){
    float S = 0;
    for(int i = 0; i <= n; i++){
        S += (float)(2*i+1)/(2*i+2);
    }
    return S;
}

int main(int argc, const char * argv[]) {
    int n;
    float S = 0;
    //n >= 0
    cout << "Input n = "; cin >> n;
    S = sum8(n);
    cout << "S = " << S << "\n";
    cout << fixed << setprecision(2) << "S = " << S << "\n";
    return 0;
}
