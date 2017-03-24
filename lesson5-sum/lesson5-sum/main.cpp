//
//  main.cpp
//  lesson5-sum
//
//  Created by NGUYEN VAN NGHIA on 3/24/17.
//  Copyright © 2017 vietplays. All rights reserved.
//

#include <iostream>
#include <iomanip>
using namespace std;

float sum5(int n){
    float S = 0;
    for(int i = 0; i <= n; i++){
        S += 1.0/(2*i+1);
    }
    return S;
}
int main(int argc, const char * argv[]) {
    int n;
    float S = 0;
    cout << "Input n = "; cin >> n;
    S = sum5(n);
    cout << "S = " << S << "\n";
    cout << fixed << setprecision(2) << "S = " << S << "\n";
    return 0;
}
