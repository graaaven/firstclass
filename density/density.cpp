// density.cpp : Defines the entry point for the console application.
// Gary Sheridan
// density project
// ITSE 1307
//professor macdougald
//1. pulls density and mass from input.dat
//2. calculates to get the volume
//3. outputs volume to the user
//4. reads to the user that the file has been read

#include "stdafx.h"
#include <iostream>
#include <cmath>
#include <iomanip>
#include <fstream>

using namespace std;


	int main()
	{
	double dblDensity = 0;
	double dblMass = 0;
	double dblVolume = 0;
	ifstream infile;
	ofstream outfile;

	//pulls density and mass from input.dat
	infile.open("input.dat");
	infile >> dblDensity >> dblMass;
	infile.close();

	//caluclates the volume
	dblVolume = dblMass * dblDensity;

	//makes output file with volume,mass, and density
	outfile.open("output.txt");

	outfile << fixed << setprecision(2) << "density: " << dblDensity << endl
			<< fixed << setprecision(2) << "mass: "    << dblMass << endl
			<< fixed << setprecision(2) << "volume: "  << dblVolume << endl;

	outfile.close();

	//reads out to the user that the input.dat was read
	cout << "the file was read " << endl;
	return 0;
}

