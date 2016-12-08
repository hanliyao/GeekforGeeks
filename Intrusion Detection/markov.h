#pragma once
#include<math.h>
#include<vector>
#include<random>
#include<algorithm>
using namespace std;
//保证左边的数小于右边的数
bool sortAsc(double, double);

//
vector<double> poissP(double, double);

//
vector<double> brownian(double, double, double, int);

//
vector<double> geoBrownian(double,double,double,double,int);

//

class CTMC
{
public:
	CTMC(vector<double> initMatrix);
	void simulate(double T, int state);
	vector<int> getStates();
	vector<double> transTimes();
	~CTMC();

protected:
	vector<vector<double>> matrix;
	vector<int> states;
	vector<double> times;
};
