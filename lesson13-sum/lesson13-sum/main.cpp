//
//  main.cpp
//  lesson13-sum
//
//  Created by NGUYEN VAN NGHIA on 3/24/17.
//  Copyright © 2017 vietplays. All rights reserved.
//

#include <iostream>
#include <iomanip>
using namespace std;

float sum6(int n){
    float S = 0;
    for(int i = 1; i <= n; i++){
        S += 1.0/(i*(i+1));
    }
    return S;
}
int main(int argc, const char * argv[]) {
    int n;
    float S = 0;
    //n >= 1
    cout << "Input n = "; cin >> n;
    S = sum6(n);
    cout << "S = " << S << "\n";
    cout << fixed << setprecision(2) << "S = " << S << "\n";
    return 0;
}

