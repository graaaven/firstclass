// density.cpp : Defines the entry point for the console application.
// Gary Sheridan
// density project
// ITSE 1307
//professor macdougald
//1. gets user input
//2. calculates to get the volume
//3. puts user input into input.dat
//4. outputs volume to the user

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

	////asks user for density
	//cout << "please enter the density in grams per cubic centimeters: ";
	//cin >> dblDensity;
	
	////asks user for mass in grams
	//cout << "please enter mass in grams: ";
	//cin >> dblMass;

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

	cout << "the file was read" << endl;
	return 0;
}

