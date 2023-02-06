#pragma once
//********************************************************************* 
// File name:		DNAStrand.h
// Author:			CS, Pacific University
// Date:				
// Class:				CS 250
// Assignment:  01 DNA Class
// Purpose:			Declare the interface for a strand of DNA. A strand of
//							DNA contains a unique and an unknow number of chemical
//							bases adenine (A), guanine (G), cytosine (C), and 
//							thymine (T). The ID will be a simplified FASTA string.
//*********************************************************************

#include <string>
#include <iostream>

using namespace std;

const char INVALID_BASE = '!';
const char ADENINE = 'A';
const char CYTOSINE = 'C'; 
const char GUANINE = 'G';
const char THYMINE = 'T'; 

class DNAStrand {

public:
	DNAStrand (const string& rcBases = "");
	DNAStrand (const DNAStrand& rcDNAStrand);

	char getBase (int whichBase) const;

	bool read (istream& rcInStream);
	void write (ostream& rcOutStream) const;

	DNAStrand reverse () const;
	DNAStrand complement () const;
	double gcContent () const;
	double hamming (const DNAStrand& rcDNAStrand) const;

	unsigned int size () const;
	bool isEqual (const DNAStrand& rcDNAStrand) const;
	bool isLegalStrand () const;

private:
	
	string mBases;

	char dnaBaseComplement (char base) const;
};