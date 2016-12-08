#include"markov.h"

bool sortAsc(double i, double j)
{
	return i < j;
}

vector<double> poissP(double lambda, double T)
{
	random_device rd;
	mt19937 gen(rd());
	poisson_distribution<> P(lambda*T);

	int n = P(gen);
	
	vector<double> myVec(n);

	for (int i = 0; i < n; i++)
	{
		myVec[i] = generate_canonical<double, 10>(gen)*T;
	}
	
	sort(myVec.begin(), myVec.end(), sortAsc);
	return myVec;
}

vector<double> brownian(double mu, double sigma, double T, int steps)
{
	double dt = T / steps;

	vector<double> myVect(steps + 1);

	random_device rd;
	mt19937 gen(rd());
	normal_distribution<> norm(mu*dt, sigma*sqrt(dt));

	//一步一步生成BM
	myVect[0] = 0;
	for (int i = 0; i < steps; i++)
	{
		myVect[i + 1] = myVect[i] + norm(gen);
	}
	return myVect;
}

vector<double> geoBrownian(double s0, double mu, double sigma, double T, int steps)
{
	vector<double> myVec = brownian(mu - (pow(sigma, 2) / 2), sigma, T, steps);

	for (int i = 0; i < myVec.size();i++)
	{
		myVec[i] = s0 * exp(myVec[i]);
	}
	return myVec;
}




