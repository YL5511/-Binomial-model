//
//  Binmodel02.cpp
//  test
//
//  Created by Julia on 2018/11/6.
//  Copyright © 2018年 Julia. All rights reserved.
//

#include "Binmodel02.hpp"

#include <iostream>
#include<cmath>


double BinModel::RiskNeutProb()
{return (R-D)/(U-D);}

double BinModel::S(int n, int i)
{return S0*pow(1+U,i)*pow(1+D,n-i);}

double BinModel::GetR()
{return R;}

int BinModel::GetInputData()
{
    
    cout << "Enter S0: "; cin >> S0;
    cout << "Enter U:  "; cin >> U;
    cout << "Enter D:  "; cin >> D;
    cout << "Enter R:  "; cin >> R;
    cout << endl;
    
    if (S0<=0.0 || U<=-1.0 || D<=-1.0 || U<=D || R<=-1.0)
    {
        cout << "Illegal data ranges" << endl;
        cout << "Terminating program" << endl;
        return 1;
    }
    
    if (R>=U || R<=D)
    {
        cout << "Arbitrage exists" << endl;
        cout << "Terminating program" << endl;
        return 1;
    }
    
    cout << "Input data checked" << endl;
    cout << "There is no arbitrage" << endl << endl;
    
    return 0;
}
